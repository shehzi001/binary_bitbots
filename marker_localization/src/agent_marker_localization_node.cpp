/*
 * File : agent_marker_localization_node.cpp 
 * 
*/

#include <ros/ros.h>
#include <tf/transform_broadcaster.h>
#include <tf/transform_listener.h>
#include <geometry_msgs/PoseStamped.h>

// declaring subscriber and publisher
ros::Subscriber sub; 
ros::Publisher pub;

int main(int argc, char** argv) {

	ros::init(argc, argv, "agent_marker_localization_node");
	ros::NodeHandle nh;
	//sub = nh.subscribe("datamatrix", 1000, chatterCallback);
    ros::Publisher pub = nh.advertise<geometry_msgs::PoseStamped>("matrix_pose", 5);
	ROS_INFO("agent_marker_localization_node");
	
	
	tf::StampedTransform transform;
	tf::TransformListener listener;
	geometry_msgs::PoseStamped frame;
	ros::Rate rate(1.0);
	
	while(nh.ok())
	{
	              ros::Time now = ros::Time::now();
			try 
			{       
				listener.waitForTransform("/arm_link_1","/datamatrix_frame", now, ros::Duration(1.0));
				listener.lookupTransform("/arm_link_1","/datamatrix_frame", now , transform);
				ROS_INFO("datamatrix_to_Base_position: [%f,%f,%f]",transform.getOrigin().x(),transform.getOrigin().y(), transform.getOrigin().z());
                ROS_INFO("datamatrix_to_Base_orientation: [%f,%f,%f,%f]",transform.getRotation().x(),transform.getRotation().y(), transform.getRotation().z(),transform.getRotation().w());
				frame.pose.position.x = transform.getOrigin().x();
				frame.pose.position.y = transform.getOrigin().y();
				frame.pose.position.z = transform.getOrigin().z();
										
				frame.pose.orientation.x = transform.getRotation().x();
				frame.pose.orientation.y = transform.getRotation().y();
				frame.pose.orientation.z = transform.getRotation().z();
				frame.pose.orientation.w = transform.getRotation().w();
										
				pub.publish(frame);
            } catch (tf::TransformException ex) {
			 	continue;//ROS_ERROR("%s",ex.what());
			}catch (tf::ExtrapolationException ex) {
                continue;//ROS_ERROR("%s",ex.what());
            }catch (tf::ConnectivityException ex) {
                continue;//ROS_ERROR("%s",ex.what());
            }
		    rate.sleep();
	}
	 
	return 0;
}
