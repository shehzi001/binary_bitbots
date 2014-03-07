#!/usr/bin/env python
import roslib
roslib.load_manifest('moveit_planning')
import sys
import copy
import rospy
import moveit_commander
import moveit_msgs.msg
import geometry_msgs.msg
from geometry_msgs.msg import PoseStamped
import tf
from tf.transformations import euler_from_quaternion

## END_SUB_TUTORIAL

from std_msgs.msg import String

#initialize moveit_commander and rospy
moveit_commander.roscpp_initialize(sys.argv)
#Instantiate a RobotCommander object
robot = moveit_commander.RobotCommander()
#Instantiate a PlanningSceneInterface object
scene = moveit_commander.PlanningSceneInterface()
#Instantiate a MoveGroupCommander object
group = moveit_commander.MoveGroupCommander("arm_1")
#create this DisplayTrajectory publisher which is used below to  publish trajectories for RVIZ to visualize.
display_trajectory_publisher = rospy.Publisher('/move_group/display_planned_path',moveit_msgs.msg.DisplayTrajectory)



def move_arm_joint_space(joint_angles):
		group.set_joint_value_target(joint_angles)
		plan = group.plan()
		
		#print "============ Waiting while RVIZ displays plan2..."
		rospy.sleep(1) 
		
		print "============going to goal position..."
		#group.go(joints = None,wait=True)
		#group.clear_pose_targets()
		group.execute(plan)
		#robot.set_current_state(robot.get_current_state().pose)
		#group.setStartState()
		#group.clear_pose_targets()
		group.stop()
		rospy.sleep(5) 
		
def move_arm_cart_space(cart_pose,joint_angles):
		#Step 2:Planning to a Pose goal
		#group.clear_pose_targets()
		print "============ Generating plan========="
		group.set_joint_value_target(joint_angles)
		group.set_pose_target(cart_pose)
		
		#call the planner to compute the plan
		plan = group.plan()
		
		print "============ Waiting while RVIZ displays plan1..."
		rospy.sleep(5)
		
		#print "============ Visualizing plan1"
		#display_trajectory = moveit_msgs.msg.DisplayTrajectory()
		#display_trajectory.trajectory_start = robot.get_current_state()
		#display_trajectory.trajectory.append(plan)
		#display_trajectory_publisher.publish(display_trajectory);
		print "============ Waiting while plan1 is visualized (again)..."
		#group.execute(plan)
		rospy.sleep(5)
		group.stop()
		#step 3:Moving to a pose goal
		# Uncomment below line when working with a real robot
		#group.go(wait=True)

def move_group():

		#Wait for RVIZ to initialize
		print "============ Waiting for RVIZ..."
		rospy.sleep(1)
		
		print "============ Reference frame:arm = " , group.get_planning_frame()
		
		print "============ Reference frame-end_effector:= " , group.get_end_effector_link()
		
		print "============ Robot Groups:"
		print robot.get_group_names()
		
		#print "==========Printing robot state=================="
		#print robot.get_current_state()
		#print "================================================="
		
		#step 4:Planning in a joint-space goal
		group.clear_pose_targets()
		
		#get the current set of joint values for the group
		group_variable_values = group.get_current_joint_values()
		print "============ Joint values: ", group_variable_values
		
		print "============Planning to move to right of base============"
		#right_base = [1.525,0.001,-2.7956,0,0]
		#move_arm_joint_space(right_base)
		
		print "============Planning to move to left of base============"
		#pre_grasping = [0.1, 2.48996, -1.53309, 1.17502, 2.92980]
		#left_base = [4.2,0.0010,-2.7665,0,0]
		#move_arm_joint_space(left_base)
		#====================================================
		
		print "============Planning to move to candle position============"
		candle = [2.9496, 1.13446, -2.54818, 1.78896, 2.93075]
		#right_base = [1.525,0.001,-2.7956,0,0]
		move_arm_joint_space(candle)
		
		print "============Planning to move to pre-grasping standing position============"
		#grasp_standing = [2.93836, 2.020597, -1.88253, 3.36243, 3.01283]
		#pre_grasping = [3.02221, 2.48996, -1.53309, 1.17502, 2.92980]
		#move_arm_joint_space(pre_grasping)
		
		print "============Planning to move to pre-grasping standing position========"
		#grasp_standing = [2.93836, 2.020597, -1.88253, 3.36243, 3.01283]
		#pre_grasping = [5.9, 2.48996, -1.53309, 1.17502, 2.92980]
		#move_arm_joint_space(grasp_standing)
		         
		#====================================================
		print "============Sending cart pose============"
		#cart_pose = geometry_msgs.msg.Pose()
		#cart_pose.position.x = 0.1
		#cart_pose.position.y = 0.1
		#cart_pose.position.z = 0.422
		#cart_pose.orientation.x = 0.0
		#cart_pose.orientation.y = 0.0
		#cart_pose.orientation.z = 0.0
		#cart_pose.orientation.w = 0.0
		#move_arm_cart_space(cart_pose)
		
		print "============ STOPPING=========================="

def move_arm_pose(msg):

			print "position",msg.pose.position
			print "orientation",msg.pose.orientation
			cart_pose = geometry_msgs.msg.Pose()
			#cart_pose.position = msg.pose.position
			#cart_pose.orientation = msg.pose.orientation
			grasp_standing = [2.93836, 2.020597, -1.88253, 3.36243, 3.01283]
			cart_pose.position.x = 0.1
               		cart_pose.position.y = 0.1
                	cart_pose.position.z = 0.422
                	cart_pose.orientation.x = 0.0
                	cart_pose.orientation.y = 0.0
                	cart_pose.orientation.z = 0.0
                	cart_pose.orientation.w = 0.0

                        move_arm_cart_space(cart_pose,grasp_standing)
			#angles = euler_from_quaternion(rot)
			#print "Object Pose", [trans[0],trans[1],trans[2],rot[0],rot[1],rot[2],rot[3]]

if __name__=='__main__':
	try:
		rospy.init_node('move_group',anonymous=True)
		rospy.loginfo("move_group running")
		rospy.Subscriber("/matrix_pose",PoseStamped,move_arm_pose)
		#listener = tf.TransformListener()
		move_group()
		moveit_commander.roscpp_shutdown()
		#get_object_pose(listener)
		#rospy.spin()
	except rospy.ROSInterruptException:
		pass
		
		#2.9496, 1.13446, -2.54818, 1.78896, 2.93075 //candle 2.9496,1.2157,-2.72271,-0.735093,-0.735093
		#2.94958, 0.01564, -2.59489, 2.38586, 2.93068 // out of view
		#3.02221, 2.48996, -1.53309, 1.17502, 2.92980 // pre grasping stangding
		#2.93836, 2.020597, -1.88253, 3.36243, 3.01283 // grasp standing 2.93836,2.0206,-1.88253,0.0460373,0.0460373
		#2.5061, 0.0935881, -2.60509, 1.42038, 2.93033 // tower_right 2.5061,-25.0109,66.4492,-19.7996,-19.7996
		#2.71339, 0.156002, -3.15581, 1.04624, 3.09898 //platform_right
		#1.5, 0.134162, -2.97261, 0.745996, 2.5
		#2.9496, 1.03446, -2.54818, 1.78896, 2.93075
		#2.96956, 1.84105, -1.30199, 2.1908, 2.88949

