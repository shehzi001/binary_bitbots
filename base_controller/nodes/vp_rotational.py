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
from std_msgs.msg import String

pub = rospy.Publisher('/linear_vel', std_msgs.msg.String)
NODE = 'base_controller'

from geometry_msgs.msg import Twist


class BASECONTROLLER:
	def __init__(self):
		self.max_linear_velocity = 0.8
		self.min_linear_velocity = 0.03
		self.max_linear_acceleration = 0.3
		self.linear_tolerance = 0.02
		self.max_angular_velocity = 0.3
		self.min_angular_velocity = 0.03
		self.max_angular_acceleration = 0.3
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

		#distance from current pose to goal pose
		dist = self.get_distance(current_pos,goal_pos)
		
		if (dist > self.linear_tolerance):
			print "Current distance:",dist
			linearVel = self.velocity_profiler(dist)
			#description of kinematics of a mobile robot and spatial path to be followed
			#difference between current pose orientation and goal pose orientation
			heading_theta = math.atan2(goal_pos[1]-current_pos[1],goal_pos[0]-current_pos[0])
			linearAngle = self.get_shortest_angle(heading_theta, current_pos[2]);
			twist.linear.x = linearVel * math.cos(linearAngle)
			twist.linear.y = linearVel * math.sin(linearAngle)
			pub.publish("hello world") 
		
		rotationalAngle = self.get_shortest_angle(goal_pos[2], current_pos[2]) 
		if (abs(rotationalAngle) >  self.angular_tolerance):
			angularVel = self.velocity_profiler_angular(rotationalAngle);
			print "current Orientation:",rotationalAngle
			twist.angular.z = angularVel
		
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
		
		self.goal_theta = self.get_shortest_angle(goal_pos[2], current_pos[2]) 
		print "theta:",	self.goal_theta
		
		self.t_acc_a = self.max_angular_velocity / self.max_angular_acceleration
		self.t_max_a = (abs(self.goal_theta)/self.max_angular_velocity) - (((self.t_acc_a)/2) + ((self.t_acc_a)/2))
		
		if(self.t_max_a < 0.0):
			self.t_max_a = 0.0
			print "no 2nd interval"
		
		self.t_total_a =  self.t_acc_a +  self.t_max_a +  self.t_acc_a
		print "t_total",  self.t_total_a
		rotation_direction = 1.0
		if(self.t_max_a == 0.0):
			self.s1_a = self.goal_theta / 2
			self.s2_a = self.s1_a
			self.s3_a = self.goal_theta
		else:
			
			self.s1_a = (0.5 * self.max_angular_acceleration * self.t_acc_a * self.t_acc_a) #+ current_pos[2]
			self.s2_a = (self.t_max_a * self.max_angular_velocity + self.s1_a)
			self.s3_a = (self.s2_a + self.s1_a)
			

		print "Goal orientation:",self.goal_theta
		print "S1_a:",self.s1_a
		print "S2_a:",self.s2_a
		print "S3_a:",self.s3_a
		
		self.t_acc = self.max_linear_velocity / self.max_linear_acceleration
		self.t_max = (self.goal_distance/self.max_linear_velocity) - (((self.t_acc)/2) + ((self.t_acc)/2))
		if(self.t_max < 0.0):
			self.t_max = 0.0
			#print "no 2nd interval"
			
		self.t_total =  self.t_acc +  self.t_max +  self.t_acc
		print "t_total",  self.t_total
		
		if(self.t_max == 0.0):
			self.s1 = self.goal_distance / 2
			self.s2 = self.s1
			self.s3 = self.goal_distance
		else:
			self.s1 = 0.5 * self.max_linear_acceleration * self.t_acc * self.t_acc
			self.s2 = self.t_max * self.max_linear_velocity + self.s1
			self.s3 = self.s2 + self.s1
		
		print "Goal distance:",self.goal_distance
		print "S1:",self.s1
		print "S2:",self.s2
		print "S3:",self.s3
		return True
		
	def velocity_profiler(self,dist):
			dist = self.goal_distance - dist
			if(dist == 0.0):
				v_a = self.min_linear_velocity
			elif((dist > 0.0) and (dist < self.s1)):
				vel1 = 0.01 + math.sqrt(abs(2*self.max_linear_acceleration*dist))
				v = vel1
				self.vel2 = vel1
				#print "R1:"
				#print "distance", dist 
				#print "self.s1", self.s1 
				#print "velocity", vel1
			elif ( (dist >= self.s1) and (dist < self.s2)):
				self.vel2 = self.max_linear_velocity
				v = self.vel2
				#print "R2:"
				#print "self.s2", self.s2
				#print "velocity", self.vel2 
			elif ((dist >= self.s2) and (dist <= self.s3)):
				self.vel3 = math.sqrt(abs(self.vel2 * self.vel2 - 2*self.max_linear_acceleration*(dist - self.s2)))
				#print "R3:"
				#print "velocity", self.vel3 
				#print "distance", dist
				v = self.vel3
			else:
				v = 0.0
				#print "R4:"
			print "Current Translational velocity:", v
			if(v < 0.0):
				v = 0.0
			print "Current Translational velocity:", v
			return v 
	
	def velocity_profiler_angular(self,dist_a):
			print "distance_normal", (dist_a)
			dist_a = abs(self.goal_theta) - abs(dist_a)
			print "abs(self.goal_theta)", abs(self.goal_theta)
			print "distance_a", abs(dist_a)
			if(dist_a == 0.0):
				v_a = self.min_angular_velocity
			elif((dist_a > 0.0) and (dist_a < self.s1_a)):
				vel1_a = math.sqrt(abs(2*self.max_angular_acceleration*dist_a))
				v_a = vel1_a
				self.vel2_a = vel1_a
				print "R1_a:"

			elif ( (dist_a >= self.s1_a) and (dist_a < self.s2_a)):
				self.vel2_a = self.max_angular_velocity
				v_a = self.vel2_a
				print "R2_a:"

			elif ((dist_a >= self.s2_a) and (dist_a <= self.s3_a)):
				self.vel3_a = math.sqrt(abs(self.vel2_a * self.vel2_a - 2*self.max_angular_acceleration*(dist_a - self.s2_a)))
				print "R3_a:"
				v_a = self.vel3_a
			else:
				v_a = 0.0
				print "R4_a:"
			if(self.goal_theta < 0.0):
				v_a = -v_a
			print "Current Angular velocity:", v_a
			return v_a

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
		
if __name__== '__main__':
    try:
		rospy.init_node(NODE)
		# /move_base_simple/goal [geometry_msgs/PoseStamped]
		rospy.loginfo("base_controller running")
		rospy.Subscriber("/move_base_simple/goal",PoseStamped,move_to)
		rospy.spin()
		
    except rospy.ROSInterruptException:
        pass
