#!/usr/bin/env python
import roslib; roslib.load_manifest('SoundLocalization')
import rospy
from std_msgs.msg import String
from std_msgs.msg import Float64
from std_msgs.msg import Int32
from SoundLocalization.msg import Speech

pub = rospy.Publisher("Speech",Speech)

def callback(data):
	params = data.data.split(';')
	rospy.loginfo(type(int(params[0])))

	speechObject = Speech()
	speechObject.sentence 	= params[1]
	rospy.loginfo(type(speechObject.sourceId))
	speechObject.sourceId 	= int(params[0])
	
	speechObject.rostime 	= float(params[3])
	speechObject.azimuth 	= float(params[2])
	pub.publish(speechObject)

def listener():
	rospy.init_node('parseNode', anonymous=True)
	rospy.Subscriber("/julius/parse/sentence", String, callback)
	rospy.spin()

if __name__ == '__main__':
	listener()
