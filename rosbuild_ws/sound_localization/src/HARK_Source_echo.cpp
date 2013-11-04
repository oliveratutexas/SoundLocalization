/*
 * https://robotics.wtb.tue.nl/svn/ros/user/jos/visualize_soundsource/src/visualization_sound_source.cpp
 * visualization_sound_source.cpp
 *
 */

#include "ros/ros.h"
#include <geometry_msgs/Pose.h>
#include <hark_msgs/HarkSource.h>

using namespace std;


// Marker publisher
ros::Publisher geom_pose_pub;


void harkSourceCallback(const hark_msgs::HarkSource::ConstPtr& msg) {

	for(int num = 0; num < msg->exist_src_num; num++) {

		geometry_msgs::Pose src;
		src.position.x = -msg->src[num].y;
		src.position.y = msg->src[num].z;
		src.position.z = msg->src[num].x;

		ROS_INFO("Found sound source number %d at (%f,%f,%f) with power %f", 
				num, src.position.x, src.position.y, src.position.z, msg->src[num].power);

	

		geometry_msgs::Pose geom_pose_msg;
		geom_pose_msg.position = src.position;
		geom_pose_pub.publish(geom_pose_msg);
	}
}



int main(int argc, char **argv) {
	ros::init(argc, argv, "HARK_Source_echo");
	ros::NodeHandle n;

	// Advertise to marker topic
	geom_pose_pub = n.advertise<geometry_msgs::Pose>("HarkSourcePosePosition", 1000);

	// Subscribe to the world model
	ros::Subscriber sub_obj = n.subscribe("/HarkSource", 1000, &harkSourceCallback);

	ros::spin();
	return 0;
}
