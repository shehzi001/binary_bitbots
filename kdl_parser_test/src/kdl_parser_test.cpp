// Copyright  (C)  2007  Francois Cauwe <francois at cauwe dot org>
 
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
 #include <ros/ros.h>
#include <kdl/chain.hpp>
#include <kdl/chainfksolver.hpp>
#include <kdl/chainfksolverpos_recursive.hpp>
#include <kdl/frames_io.hpp>
#include <urdf/model.h>
#include <kdl/tree.hpp>
#include <kdl_parser/kdl_parser.hpp>

#include <vector>
#include <kdl/chainiksolver.hpp>
#include <kdl/chainiksolverpos_nr.hpp>
#include <kdl/chainiksolvervel_pinv.hpp>
#include <kdl/chainiksolverpos_nr_jl.hpp>
#include <kdl/frames_io.hpp>
#include <kdl/frames.hpp>
#include <urdf/model.h>
#include <trajectory_msgs/JointTrajectory.h>
#include <trajectory_msgs/JointTrajectoryPoint.h>
using namespace std;
using namespace KDL;
typedef std::map< std::string,KDL::TreeElement>::iterator Iter;

 const char* joint_names[] = {
		"base_link",
		"arm_joint_1",
		"arm_joint_2",
		"arm_joint_3",
		"arm_joint_4",
		"arm_joint_5",
		"gripper_finger_joint_l",
		"gripper_finger_joint_r"
};
/*
double positions[5] = 
	{
	 2.9496, 1.13446, -2.54818, 1.78896, 2.93075
	};
*/

double positions[4][5] = 
{
	{2.9496, 1.13446, -2.54818, 1.78896, 2.93075}, //candle 2.9496,1.2157,-2.72271,-0.735093,-0.735093
	{2.94958, 0.01564, -2.59489, 2.38586, 2.93068}, // out of view
	{3.02221, 2.48996, -1.53309, 1.17502, 2.92980}, // pre grasping stangding
	{2.93836, 2.020597, -1.88253, 3.36243, 3.01283} // grasp standing 2.93836,2.0206,-1.88253,0.0460373,0.0460373
	//2.5061, 0.0935881, -2.60509, 1.42038, 2.93033 // tower_right 2.5061,-25.0109,66.4492,-19.7996,-19.7996
	//2.71339, 0.156002, -3.15581, 1.04624, 3.09898 //platform_right
	//1.5, 0.134162, -2.97261, 0.745996, 2.5
	//2.9496, 1.03446, -2.54818, 1.78896, 2.93075
	
	//2.96956, 1.84105, -1.30199, 2.1908, 2.88949
};
const double upper_joints_limits[5] = {5.84014,2.61799,-0.015708,3.4292,5.64159};
const double lower_joints_limits[5] = {0.0100692,0.0100692,-5.02655,0.0221239,0.110619};

KDL::Tree tree;
KDL::Chain chain;


void rand_cart_pose(Vector &cart_positions)
{    
	double theta = lower_joints_limits[0] + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(upper_joints_limits[0]-lower_joints_limits[0])));
	double phi =  lower_joints_limits[1] + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(upper_joints_limits[1]-lower_joints_limits[1])));
	double radius_of_workspace = 0.655;
	cart_positions[0] =  radius_of_workspace * abs(cos(theta) * sin (phi));
	cart_positions[1] =  radius_of_workspace * abs(sin(theta) * sin(phi));
	cart_positions[2] =  radius_of_workspace * abs(cos(phi));
	//printf("\n[x,y,z]=[%f,%f,%f]",cart_positions[0],cart_positions[1],cart_positions[2]);
}
bool urdf2tree()
{
	std::string urdf_file = "/home/shehzad/ros_ws/hydro/catkin_ws/src/RobotManipulation_WS2013/kdl_parser_test/src/youbotarm.urdf";
		urdf::Model model;
	if (!model.initFile(urdf_file))
	{
		ROS_ERROR("Failed to parse urdf file");
		return false;
	}
	else
	{
		ROS_INFO("Successfully parsed urdf file");
	}
	
	if (!kdl_parser::treeFromUrdfModel(model, tree))
	{
		ROS_ERROR("Failed to build tree");
		return false;
	}
	return true;
}
bool tree2chain()
{
	return tree.getChain("arm_link_0","arm_link_5",chain);
}

int chain_info()
{
	//**************************************************
		unsigned int nj = 0;
		unsigned int js = 0;
		nj = chain.getNrOfJoints();
		js = chain.getNrOfSegments();
		ROS_INFO("[Segments,joints]:[%d,%d]",js,nj);
	//**************************************************
	
	return nj;
}

void compute_fk()
{
	int nj = chain_info();
	KDL::JntArray q(nj);
	double roll = 0.0 , pitch = 0.0 , yaw = 0.0;
	// Assign some values to the joint positions
	printf("\nFKinput:[");
	for(unsigned int i = 0;i < 5;i++)
	{
		q(i)=positions[0][i];
	}
	
	printf("]\n");
	//cout << "\nForward kinematics solver....." << endl;
	cout << "\nFK solver result:" << endl;
	// Calculate forward position kinematics
	KDL::ChainFkSolverPos_recursive fksolver(chain);
	KDL::Frame cartpos;
	bool kinematics_status = fksolver.JntToCart(q,cartpos,nj);
	
	KDL::Rotation R;
	R = cartpos.M;
	
	R.GetRPY(roll,pitch,yaw);
	
	if(kinematics_status >= 0)
	{
		std::cout << cartpos << std::endl;
		printf("\n[Roll,Pitch,Yaw] = [%f,%f,%f]\n",roll,pitch,yaw);
	}
	else{
		printf("%s \n kinematic status:,%d","Error: could not calculate forward kinematics :(" ,kinematics_status);
	}
}


void move_arm(int pos)
{
	ros::NodeHandle n;
	ros::Publisher pub = n.advertise<trajectory_msgs::JointTrajectory>("/arm_1/arm_controller/command", 1000);
	ros::Duration d(0.5);
	trajectory_msgs::JointTrajectory msg;
	trajectory_msgs::JointTrajectoryPoint points;
	msg.joint_names.resize(5);
	msg.points.resize(1);
	points.positions.resize(5);
	cout << msg.joint_names.size();
	for(int i = 1; i < 6 ; i++)
	{
		msg.joint_names[i-1] = joint_names[i];
	}
	
	for(unsigned int i = 0;i < 5;i++)
	{
		points.positions[i] = positions[pos][i];
	}
	points.time_from_start = d;
	msg.points[0] = points;
	sleep(1);
	pub.publish(msg);
	ros::spinOnce();
	sleep(2);
}


int main(int argc, char** argv)
{
	ros::init(argc, argv, "kdl_parser_test");
	
	
	if(!urdf2tree())
		return 0;
	
	if(!tree2chain())
		return 0;
		
	for(int i = 0;i < 4;i++)
	{
		move_arm(i);
		sleep(2);
	}
	

		/*
		Vector p(-0.392042,  0.00244385,   0.0315553);
		Rotation R(0.779067,  0.00623352,    0.626909,
		  -0.00485643,    0.999981, -0.00390793,
			-0.626921,-1.35245e-17,    0.779083);
		cartpos.p = p;
		cartpos.M = R;
		//Vector rand_cart_p(0,0,0);
		//rand_cart_pose(rand_cart_p);
		//Frame rand0_t;
		//rand0_t.p = rand_cart_p;
		Vector tool_tip(0,0,0.105);
		//cartpos.p = cartpos.p + tool_tip ;
		Frame T0_t =  cartpos;
		Frame T5_t(tool_tip);
		Frame Tt_5 = T5_t.Inverse();
		
		cout << "T0_t" << T0_t << endl;
		cout << "Tt_5" << Tt_5 << endl;
		Frame T0_5 =  T0_t *  Tt_5;
		
		cout << "T0_5" << T0_5 << endl;
		*/
	
  return 0;
}
/*
 * 	//std::map<std::string,TreeElement>::const_iterator root;
	//std::map<std::string,TreeElement> segments;
    //segments = tree.getSegments();
	//root = tree.getRootSegment();
	* 
	* 
		//const KDL::Segment &segment9 = chain.getSegment(3);
		//const std::string &name = segment9.getName();
		//std::cout << segment9.pose(1.0) << std::endl;
		//std::cout << name.length() << std::endl;
		//std::cout << name.c_str() << std::endl;
		
		KDL::JntArray min_angles(5);
		KDL::JntArray max_angles(5);
		double init_positions[5] = 
			{
				2.9496, 1.13446, -2.54818, 1.78896, 2.93075
			};
		for (int i = 0 ; i < 5;i++){
			max_angles(i) = upper_joints_limits[i];
			min_angles(i) = lower_joints_limits[i];
		}
		KDL::ChainFkSolverPos_recursive fksolver1(chain);//Forward position solver
		KDL::ChainIkSolverVel_pinv iksolver1v(chain);//Inverse velocity solver
		KDL::ChainIkSolverPos_NR_JL iksolver1(chain,min_angles,max_angles,fksolver1,iksolver1v,500,1e-6);
		
		//Creation of jntarrays:
		KDL::JntArray q_init(nj);
		
		for(unsigned int i = 0;i < 5;i++)
		{
			q_init(i)=init_positions[i];
		}
		
		int ret = iksolver1.CartToJnt(q_init,T0_5,q);
		
		if(ret >= 0)
		{
			//std::cout << "Joint positions:\n" << q.data <<std::endl;
			printf("IK:[");
			for(unsigned int i = 0;i < nj;i++)
			{
				printf("%0.7lf,",q(i));
			}
			//printf("%s,\n","Succes Ik!");
			printf("]\n");
			return true;
			
		}
		else
		{
			printf("%s \n","Error: could not calculate Inverse kinematics :(");
			return false;
		}
		
*/
