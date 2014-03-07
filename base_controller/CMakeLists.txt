cmake_minimum_required(VERSION 2.8.3)
project(base_controller)


find_package(catkin REQUIRED COMPONENTS message_generation std_msgs geometry_msgs  rospy roscpp tf)


add_message_files(
 FILES
 base_velocity.msg
)

generate_messages(
  DEPENDENCIES std_msgs geometry_msgs
)

catkin_package(
	CATKIN_DEPENDS message_runtime rospy roscpp std_msgs geometry_msgs
)



## Set Compiler flags
INCLUDE_DIRECTORIES(
	include
)	


#add_executable(youbot_driver_ros_interface 
#)

#target_link_libraries(youbot_driver_ros_interface ${catkin_LIBRARIES} ${Boost_LIBRARIES} ${youbot_driver_LIBRARIES})

