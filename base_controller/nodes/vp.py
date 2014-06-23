#!/usr/bin/env python

#Author:Shehzad Ahmed
#Base controller for the Mobile manipulation navigation exercise

import roslib; roslib.load_manifest('base_controller')
import rospy
import tf
from tf.transformations import euler_from_quaternion
import math
import time
from geometry_msgs.msg import PoseStamped

NODE = 'base_controller'

from geometry_msgs.msg import Twist

class BASECONTROLLER:
	def __init__(self):
		self.max_linear_velocity = 0.8
		self.min_linear_velocity = -0.5
		self.max_linear_acceleration = 0.2
		self.linear_tolerance = 0.02
		self.max_angular_velocity = 0.3
		self.min_angular_velocity = -0.3
		self.max_angular_acceleration = 0.03
		self.angular_tolerance = 0.02 
		self.desired_time  = 30
		self.tf_transform = True 
		self.goal_reached = False
		self.pub = rospy.Publisher('cmd_vel', Twist)
		self.listener = tf.TransformListener()
		#self.goal_linear = True
	
	def base_controller(self,pose):
		twist = Twist()
		rate = rospy.Rate(10.0)
		current_pos = []
		goal_pos = pose #[5,0,1.57]
		current_pos = self.get_current_pose() 
		self.start_pose = current_pos
		if(self.check_move_execution(current_pos,goal_pos)):
			self.start_time_bc = rospy.Time.now()
			self.previous_time = rospy.Time.now()
			self.goal_time = self.start_time_bc + rospy.Duration(self.desired_time) 
			while not rospy.is_shutdown():
				current_pos = self.get_current_pose()  
				twist = self.compute_velocity(current_pos,goal_pos)
				if self.goal_reached:
					twist = Twist()
					self.pub.publish(twist)
					now = rospy.Time.now()
					print "Start time:",self.start_time_bc
					print "Reached goal at time:",now
					print "Total time:",(now - self.start_time_bc).secs
					print "Exiting:Goal reached successfully"
					break
				self.pub.publish(twist)
				rate.sleep()
		else:
			print "Exiting:Goal Unreachable in desired time"

	def compute_velocity(self,current_pos,goal_pos):

		twist = Twist()
		#print "Current Pose",current_pos
		#print "Goal Pose",goal_pos
		
		#distance from current pose to goal pose
		dist = self.get_distance(current_pos,goal_pos)

		#difference between current pose orientation and goal pose orientation
		heading_theta = math.atan2(goal_pos[1]-current_pos[1],goal_pos[0]-current_pos[0])
		linearAngle = self.get_shortest_angle(heading_theta, current_pos[2]);
		rotationalAngle = self.get_shortest_angle(goal_pos[2], current_pos[2]) 
		
		#print "distance : ", dist
		#print "roatational distance : ",abs(rotationalAngle)
		
		if (dist > self.linear_tolerance):
			linearVel = self.velocity_profiler(dist)
		else:
			linearVel = 0.0
		
		if (abs(rotationalAngle) >  self.angular_tolerance):
			#angularVel = self.max_angular_velocity #rotationalAngle  / self.desired_time
			#print "roatational angle : ",rotationalAngle
			if(rotationalAngle >= 0):
				angularVel = math.sqrt(2 * 0.03 * abs(rotationalAngle))
			else:
				angularVel = - math.sqrt(2 * 0.03 * abs(rotationalAngle))
			
			if (angularVel > self.max_angular_velocity):
				angularVel = self.max_angular_velocity
		else:
			angularVel = 0.0
			
		#description of kinematics of a mobile robot and spatial path to be followed
		v_x = linearVel * math.cos(linearAngle)
		v_y = linearVel * math.sin(linearAngle) 
		w_z = angularVel
		twist.linear.x = v_x
		twist.linear.y = v_y
		twist.angular.z = w_z 
		if (dist <= self.linear_tolerance) and (abs(rotationalAngle) <=  self.angular_tolerance):
			self.goal_reached = True
		return twist
	
	def get_current_pose(self):
		try:
			self.listener.waitForTransform('/odom', '/base_footprint', rospy.Time(), rospy.Duration(4.0))   #pose of base_footprint in odom frame
			(trans,rot) = self.listener.lookupTransform('/odom', '/base_footprint', rospy.Time(0))
			angles = euler_from_quaternion(rot)
			self.tf_transform = True
			return [trans[0],trans[1],angles[2]]
		except (tf.LookupException, tf.ConnectivityException):
			print "Transform not avaiable"
			self.tf_transform = False
			return [0,0,0]
	
	def get_shortest_angle(self,goal_pose_angle,current_pose_angle):
		return math.atan2(math.sin(goal_pose_angle - current_pose_angle), math.cos(goal_pose_angle - current_pose_angle))
	
	def get_distance(self,current_pos,goal_pos):
		return math.sqrt(math.pow(goal_pos[1]-current_pos[1],2) + math.pow(goal_pos[0]-current_pos[0],2))
	
	def check_move_execution(self,current_pos,goal_pos):
		
		self.goal_distance = self.get_distance(current_pos,goal_pos)
		vel_max = self.max_linear_velocity
		acc_max = self.max_linear_acceleration
		
		self.t_acc = self.max_linear_velocity / self.max_linear_acceleration
		self.t_max = (self.goal_distance/self.max_linear_velocity) - (((self.t_acc)/2) + ((self.t_acc)/2))
		if(self.t_max < 0.0):
			self.t_max = 0.0
			print "no 2nd interval"
		self.t = 0.0
		self.t_1 = self.t_acc 
		self.t_2 =  self.t_acc +  self.t_max
		self.t_total =  self.t_acc +  self.t_max +  self.t_acc
		
		t_step =  self.t_total / 20
		print "t_step", t_step
		self.t = t_step
		
		#print "t_acc",  self.t_acc
		#print "t_max",  self.t_max
		print "t_1",  self.t_1
		print "t_2",  self.t_2
		print "t_total",  self.t_total
		
		self.prev_time_stamp = 0.0
		self.prev_time_stamp1 = 0.0
		self.prev_vel = 0.0
		
		if(self.t_max == 0.0):
			self.s1 = self.goal_distance / 2
			self.s2 = self.s1
			self.s3 = self.goal_distance
		else:
			self.s1 = 0.5 * self.max_linear_acceleration * self.t_acc * self.t_acc
			self.s2 = self.t_max * self.max_linear_velocity + self.s1
			self.s3 = self.s2 + self.s1
		
		print "goal distance:",self.goal_distance
		print "S1:",self.s1
		print "S2:",self.s2
		print "S3:",self.s3
		#tt = rospy.Time.from_sec(time.time())
		#self.start_time = tt.to_sec()
		
		#if((self.goal_distance - self.s3) >= 0.0):
		return True
		#else:
		#	return False
			
		
	def velocity_profiler(self,dist):
			#dist = self.get_distance(current_pose,self.start_pose)
			dist = self.goal_distance - dist
			tt = rospy.Time.from_sec(time.time())
			now = tt.to_sec()
			#start_t = self.start_time
			#self.t = (now - start_t)
			#if (self.t > 0):
				#print "\ntime",self.t
			if( dist < self.s1 ):
				vel1 = math.sqrt(abs(2*self.max_linear_acceleration*dist))
				v = vel1
				self.vel2 = vel1
				self.prev_vel = vel1
				print "R1:"
				#print "distance", dist 
				#print "self.s1", self.s1 
				print "velocity", vel1

			elif ( (dist >= self.s1) and (dist < self.s2)):
				self.vel2 = self.max_linear_velocity
				self.prev_vel = self.vel2
				v = self.vel2
				print "R2:"
				#print "self.s2", self.s2
				print "velocity", self.vel2 
			elif ((dist >= self.s2) and (dist <= self.s3)):
				#self.vel3 = self.vel2 - self.max_linear_acceleration * (self.t-self.prev_time_stamp)
				self.vel3 = math.sqrt(abs(self.vel2 * self.vel2 - 2*self.max_linear_acceleration*(dist - self.s2)))
				print "R3:"
				print "velocity", self.vel3 
				print "distance", dist
				#print "self.s2", self.s2
				self.prev_vel = self.vel3
				v = self.vel3
			else:
				v = 0.0
				print "R4:"
				print "velocity", v
			if(v < 0.0):
				v = 0.0
			return v 
		
	def velocity_profiler2(self):
	
		#double t_acc, double t_max, double t_step,
		#double vel_max, double acc_max,
		#double theta_start, double theta_end,
		#double setpoint[], int *count)
		vel_max = 0.8
		acc_max = 0.4
		dist_goal = 1
		count = 0
		
		t_acc = vel_max / acc_max
		t_max = (dist_goal/vel_max) - ((t_acc)/2) - ((t_acc)/2)
		if(t_max < 0.0):
			t_max = 0.0
		t = 0.0
		t_1 = 0.0
		t_2 = 0.0 
		t_total = 0.0
		t_1 = t_acc 
		d_1 = t_acc
		t_2 = t_acc + t_max
		t_total = t_acc + t_max + t_acc
		print "t_acc", t_acc
		print "t_max", t_max
		print "t_2", t_2
		print "t_total", t_total
		t_step = t_total / 20
		print "t_step", t_step
		count = 0
		t = t_step
		vel2 = 0.8
		d1 = 0.0
		d2 = 0.0
		tt = rospy.Time.from_sec(time.time())
		start_time = tt.to_sec()
		prev_time_stamp = 0.0
		prev_time_stamp1 = 0.0
		prev_vel = 0.0
		while t <= t_total:
			tt = rospy.Time.from_sec(time.time())
			now = tt.to_sec()
			timer = (now - start_time)
			seconds = tt.to_sec() #floating point
			#nanoseconds = tt.to_nsec()
			#print "\ntime_rosns", nanoseconds
			#print "\ntime_rossec", seconds
			t = timer
			if (timer > 0):
				print "\ntime",t
				if( t < t_1 ):
					dist = 0.5*acc_max*t*t 
					vel1 = math.sqrt(abs(2*acc_max*dist))
					vel2 = vel1
					prev_vel = vel1
					prev_time_stamp = t
					prev_time_stamp1 = t
					print "R1:"
					print "distance", dist
					print "velocity", vel1
					print "acceleration",vel1/t

				elif ( (t >= t_1) and (t < t_2)):
					vel2 = vel_max
					prev_vel = vel2
					prev_time_stamp = t
					prev_time_stamp1 = t
					print "R2:"
					print "velocity", vel2 
				elif ((t >= t_2) and (t < t_total)):
					vel3 = vel2 - acc_max * (t-prev_time_stamp)
					print "R3:"
					print "velocity", vel3 
					print "acceleration", (prev_vel - vel3)/(prev_time_stamp1 - t)
					prev_time_stamp1 = t
					prev_vel = vel3
				else:
					vel3 = 0.0
					print "R3:"
					print "velocity", vel3 

		#setpoint[count] = dist_goal
		#count = count + 1  

def move_to(msg):
	rospy.loginfo("Received at goal message!")
	rospy.loginfo("Timestamp: " + str(msg.header.stamp))
	rospy.loginfo("frame_id: " + str(msg.header.frame_id))

	# Copying for simplicity
	position = msg.pose.position
	quat = msg.pose.orientation
	
	rospy.loginfo("Point Position: [ %f, %f, %f ]"%(position.x, position.y, position.z))
	rospy.loginfo("Quat Orientation: [ %f, %f, %f, %f]"%(quat.x, quat.y, quat.z, quat.w))

	# Also print Roll, Pitch, Yaw
	euler = tf.transformations.euler_from_quaternion([quat.x, quat.y, quat.z, quat.w])
	rospy.loginfo("Euler Angles: %s"%str(euler)) 
	pose = [position.x,position.y,euler[2]] 
	print pose
	bc = BASECONTROLLER()
	bc.base_controller(pose)
	#bc.velocity_profiler2()
		
if __name__== '__main__':
    try:
		rospy.init_node(NODE)
		# /move_base_simple/goal [geometry_msgs/PoseStamped]
		rospy.loginfo("base_controller running")
		rospy.Subscriber("/move_base_simple/goal",PoseStamped,move_to)
		#bc = BASECONTROLLER()
		#bc.velocity_profiler2()
		rospy.spin()
		
    except rospy.ROSInterruptException:
        pass
