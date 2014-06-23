#!/usr/bin/env python

#Author:Shehzad Ahmed
#Base controller for the Mobile manipulation navigation exercise

import roslib; roslib.load_manifest('base_controller')
import rospy
import tf
from tf.transformations import euler_from_quaternion
import math
from geometry_msgs.msg import PoseStamped

NODE = 'base_controller'

from geometry_msgs.msg import Twist

class BASECONTROLLER:
	def __init__(self):
		self.max_linear_velocity = 0.8
		self.min_linear_velocity = -0.8
		self.linear_tolerance = 0.02
		self.max_angular_velocity = 0.3
		self.min_angular_velocity = -0.3
		self.max_angular_acceleration = 0.03
		self.angular_tolerance = 0.05 
		self.desired_time  = 30
		self.tf_transform = True 
		self.goal_reached = False
		self.pub = rospy.Publisher('cmd_vel', Twist)
		self.listener = tf.TransformListener()
		self.goal_linear = True
	
	def base_controller(self,pose):
		twist = Twist()
		rate = rospy.Rate(10.0)
		current_pos = []
		goal_pos = pose #[5,0,1.57]
		current_pos = self.get_current_pose() 
		if(self.check_move_execution(current_pos,goal_pos)):
			self.start_time = rospy.Time.now()
			self.previous_time = rospy.Time.now()
			self.goal_time = self.start_time + rospy.Duration(self.desired_time) 
			while not rospy.is_shutdown():
				current_pos = self.get_current_pose()  
				twist = self.compute_velocity(current_pos,goal_pos)
				if self.goal_reached:
					twist = Twist()
					self.pub.publish(twist)
					now = rospy.Time.now()
					print "Start time:",self.start_time
					print "Reached goal at time:",now
					print "Total time:",(now - self.start_time).secs
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
		
		if (dist > self.linear_tolerance and self.goal_linear):
			#calculating linear velocity using distance and desired time(time to move to goal position)  
			#linearVel = math.sqrt(2 * dist * self.max_linear_velocity/self.desired_time)
			linearVel = self.velocity_profiler()
			if (linearVel > self.max_linear_velocity):
				linearVel = self.max_linear_velocity
				
		else:
			linearVel = 0.0
			self.goal_linear = False
		
		if (abs(rotationalAngle) >  self.angular_tolerance):
			#angularVel = self.max_angular_velocity #rotationalAngle  / self.desired_time
			print "roatational distance : ",rotationalAngle
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
			self.goal_linear = True
		
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
		
		distance = self.get_distance(current_pos,goal_pos)
		
		#distance covered due to tapezoidal velocity profiler
		#Region_acc
		vf = self.max_linear_velocity
		vi = 0.0
		t1 = self.desired_time/3
		self.max_linear_acceleration = (vf - vi)/t1
		s1 = (vi * t1) + 0.5 * self.max_linear_acceleration * t1 * t1
		#Region_const_velocity
		
		vi = self.max_linear_velocity
		vf = self.max_linear_velocity
		t2 = t1
		s2 = (vi * t2)
		
		#deaccelerate_Region
		
		vi = self.max_linear_velocity
		vf = 0
		t3 = t1
		self.min_linear_acceleration = (vf - vi)/t3
		s3 = (vi * t3) + 0.5 * self.min_linear_acceleration * t3 * t3
		
		s = s1 + s2 + s3
		print "Distance that can be covered in desired time : " ,s
		print "Goal distance : " ,distance
		if(s < distance):
			return False
		else:
			return True
		
	def velocity_profiler(self):
		time = (rospy.Time.now() - self.start_time).secs
		t  = self.desired_time/3
		t1 = (rospy.Time.now() - self.start_time).secs
		v = 0.0
		print "Time elapsed:",time
		if (time <= t):
			print "Interval 1"
			print "time_difference:",t1
			v  = self.max_linear_acceleration * (rospy.Time.now() - self.start_time).secs
		elif(time > t and time <= 2*t):
			print "Interval 2"
			v = self.max_linear_velocity
		elif(time > (2*t) and time < (3*t)):
			print "Interval 3"
			v = self.max_linear_acceleration * (self.goal_time - rospy.Time.now()).secs
			if v < 0.0:
				v = 0.0
		else:
			print "Time out"
			v = 0.0
		print "Linear_velocity",v
		self.previous_time = rospy.Time.now()
		return v
		
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
