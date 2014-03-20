#!/usr/bin/env python
import roslib
roslib.load_manifest('mir_moveit_youbot_brsu_2')
import sys
import copy
import rospy
import moveit_commander
import moveit_msgs.msg
import geometry_msgs.msg
import tf

from tf.transformations import euler_from_quaternion
from geometry_msgs.msg import PoseArray
from geometry_msgs.msg import Pose
from std_msgs.msg import String

#joint known positions
candle = [2.9496, 1.13446, -2.54818, 1.78896, 2.93075]
out_of_view = [2.94958, 0.01564, -2.59489, 2.38586, 2.93068]
pre_grasp = [3.02221, 2.48996, -1.53309, 1.17502, 2.92980]
grasp_standing = [2.93836, 2.020597, -1.88253, 3.36243, 3.01283]
tower_right = [2.5061, 0.0935881, -2.60509, 1.42038, 2.93033]
platform_right = [2.71339, 0.156002, -3.15581, 1.04624, 3.09898]
improved_pre_grasp = [3.00381, 1.1923, -1.24848, 2.26237, 2.91602]

#global variable declaration:
#Instantiate a RobotCommander object
robot = moveit_commander.RobotCommander()
#Instantiate a PlanningSceneInterface object
scene = moveit_commander.PlanningSceneInterface()
#Instantiate a MoveGroupCommander object
group = moveit_commander.MoveGroupCommander("arm_1")
#create this DisplayTrajectory publisher which is used below to  publish trajectories for RVIZ to visualize.
display_trajectory_publisher = rospy.Publisher('/move_group/display_planned_path',moveit_msgs.msg.DisplayTrajectory)

def move_arm_joint_space(target_joint_angles):
	print "=== PLANNING IN JOINT SPACE ==="
	group.clear_pose_targets()
	print "Current joint values: %s" % group.get_current_joint_values()
	print "Target angles : ", target_joint_angles
	group.set_joint_value_target(target_joint_angles)
	try:
		plan = group.plan()
		rospy.sleep(1)
		group.execute(plan)
		rospy.sleep(5) 
	except rospy.ROSInterruptException:
		pass

def move_arm_cartesian_space(cart_pose):
	print "=== PLANNING IN CARTESIAN SPACE ==="
	group.clear_pose_targets()
	group.set_position_target([cart_pose[0], cart_pose[1], cart_pose[2]])
	group.set_orientation_target([cart_pose[3], cart_pose[4], cart_pose[5], cart_pose[6]])
	try:
		group.execute(group.plan())
	except rospy.ROSInterruptException:
		pass

def node_cartesian_callback(msg): #callback for the /goal_end_effector_pose topic
	print "Received goal position : ", msg.position
	print "Received goal orientation : ", msg.orientation
	print "Going to pregrasp position"
	move_arm_to_predefined_pose("improved_pre_grasp", improved_pre_grasp)
	print "Going to received pose as published on topic : /goal_end_effector_pose"
	received_cart_pose = []
	received_cart_pose.append(msg.position.x)
	received_cart_pose.append(msg.position.y)
	received_cart_pose.append(msg.position.z)
	received_cart_pose.append(msg.orientation.x)
	received_cart_pose.append(msg.orientation.y)
	received_cart_pose.append(msg.orientation.z)
	received_cart_pose.append(msg.orientation.w)
	move_arm_cartesian_space(received_cart_pose)
	spinning_message()

def node_joint_space_callback(msg2):
	predefined_goal = msg2.header.frame_id
	print "Received predefined goal : ", predefined_goal
	if predefined_goal == "candle":
		move_arm_to_predefined_pose("candle", candle)
	elif predefined_goal == "out_of_view":
		move_arm_to_predefined_pose("out_of_view", out_of_view)
	elif predefined_goal == "pre_grasp":
		move_arm_to_predefined_pose("pre_grasp", pre_grasp)
	elif predefined_goal == "grasp_standing":
		move_arm_to_predefined_pose("grasp_standing", grasp_standing)
	elif predefined_goal == "tower_right":
		move_arm_to_predefined_pose("tower_right", tower_right)
	elif predefined_goal == "platform_right":
		move_arm_to_predefined_pose("platform_right", platform_right)
	elif predefined_goal == "improved_pre_grasp":
		move_arm_to_predefined_pose("improved_pre_grasp", improved_pre_grasp)
	else:
		print "The requested predefined pose is not registered, try one of this : "
		print "candle, out_of_view, pre_grasp, grasp_standing, tower_right, platform_right"
	spinning_message()

def move_arm_to_predefined_pose(position, angles):
	print "Moving arm to ", position ,"..."
	move_arm_joint_space(angles)

def spinning_message():
	print "ros will spin now... waiting for /goal_end_effector_pose topic or /goal_predefined_pose"

def set_tolerance():
	group.set_goal_position_tolerance(0.003)
	group.set_goal_orientation_tolerance(0.03)
	group.set_goal_joint_tolerance(0.003)

if __name__=='__main__':
	moveit_commander.roscpp_initialize(sys.argv)
	rospy.init_node('moveit_listener', anonymous=True)
	rospy.Subscriber("/goal_end_effector_pose", Pose, node_cartesian_callback)
	rospy.Subscriber("/goal_predefined_pose", PoseArray, node_joint_space_callback)
	set_tolerance()
	print "Planning reference frame : " , group.get_planning_frame()
	print "End effector reference frame : " , group.get_end_effector_link()
	spinning_message()
	rospy.spin()