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
answers = ['paper', 'scissors', 'rock']

def callback(speech_data):
    #rospy.loginfo(speech_data.sentence)
    global is_playing, time, left, right, answers
    if not is_playing and speech_data.sentence.startswith('lets-play'):
        is_playing = True
        left = ''
        right = ''
        rospy.loginfo("Get Ready")
        rospy.sleep(1.0)
        rospy.loginfo("Get Set")
        rospy.sleep(1.0)
        rospy.loginfo("Speak!")
        time = speech_data.rostime
	#rospy.loginfo(time)
    word = speech_data.sentence.split(' ')[0]
    if is_playing and word in answers:
        if speech_data.azimuth < -10 and right is '':
            right = word
        elif speech_data.azimuth > 10 and left is '':
            left = word
        if left is not '' and right is not '':
            rospy.loginfo("The game is successful")
	    rospy.loginfo("right: %s, left: %s" % (right, left))
	    if left == right:
		rospy.loginfo("TIE")
	    elif ((left is 'paper' and right is 'rock') or (left is 'rock' and right is 'scissors') or (left is 'scissors' and right is 'paper')):
		rospy.loginfo("<-- WINNER")
	    else:
		rospy.loginfo("WINNER -->")
            is_playing = False
#    if rospy.get_time() - time > 2000:
#	rospy.loginfo("The current game has timed out")
#	is_playing = False
#	left = None
#	right = None       

if __name__ == '__main__':
    try:
        while not rospy.is_shutdown():
            rospy.init_node('voice_rps', anonymous=True)
            rospy.Subscriber("/Speech", Speech, callback)
            rospy.spin()
    except KeyboardInterrupt:
        sys.exit(1)
	
