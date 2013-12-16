import sys
import roslib
import rospy
from std_msgs.msg import String


def talker():
    pub_sid = rospy.Publisher('julius/parse/source_id', String)
    pub_sentence = rospy.Publisher('julius/parse/sentence', String)
    rospy.init_node('julius_parse_ros')
    while not rospy.is_shutdown():
        source = sys.stdin.readline().strip('\n')
        if source.startswith('source_id'):
            pub_sid.publish(String(source))
            params = source.split(',')
            sentence = sys.stdin.readline().strip('\n')
            while not sentence.startswith('sentence1'):
                sentence = sys.stdin.readline().strip('\n')
                if sentence.startswith('sentence1:'):
                    message = "%s;%s;%s;%s" % (params[0][12:], sentence[15:-5], params[1][11:], rospy.get_time())
                    pub_sentence.publish(String(message))
                    rospy.loginfo(sentence)
        

if __name__ == '__main__':
    try:
        while 1:
            talker()
    except KeyboardInterrupt:
        sys.exit(1)
	
