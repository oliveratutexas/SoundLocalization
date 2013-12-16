#!/usr/bin/env python
import roslib; roslib.load_manifest('SoundLocalization')
import rospy
from std_msgs.msg import String
from std_msgs.msg import Float64
from std_msgs.msg import Int32
from SoundLocalization.msg import Speech

is_playing = False
time = 0.0
left = None
right = None

def callback(speech_data):
    rospy.loginfo(speech_data.sentence)
    global is_playing, time, left, right
    if not is_playing and speech_data.sentence.startswith('lets-play'):
        is_playing = True
        left = None
        right = None
        rospy.sleep(1.0)
        rospy.loginfo("Get Ready")
        rospy.sleep(1.0)
        rospy.loginfo("Get Set")
        rospy.sleep(1.0)
        rospy.loginfo("Speak!")
        time = speech_data.rostime
	rospy.loginfo(time)
    if is_playing and rospy.get_time() - time > 2:
        if speech_data.azimuth < -10 and right is None:
            right = speech_data.sentence
        elif speech_data.azimuth > 10 and left is None:
            left = speech_data.sentence
        if left is not None and right is not None:
            rospy.loginfo("The game is successful")
            is_playing = False
    if rospy.get_time() - time > 2:
	rospy.loginfo("The current game has timed out")
	is_playing = False
	left = None
	right = None

        

if __name__ == '__main__':
    try:
        while not rospy.is_shutdown():
            rospy.init_node('voice_rps', anonymous=True)
            rospy.Subscriber("/Speech", Speech, callback)
            rospy.spin()
            
    except KeyboardInterrupt:
        sys.exit(1)
	
