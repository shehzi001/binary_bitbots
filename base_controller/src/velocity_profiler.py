#!/usr/bin/env python
import roslib; roslib.load_manifest('velocity_profiler')
import rospy
import math

NODE = 'velocity_profiler'

if __name__== '__main__':
    try:
		rospy.init_node(NODE)
		while not rospy.is_shutdown():
			start = rospy.Time.now()
			print "time before 10 seconds : ", start.secs 
			rospy.sleep(10)
			start = rospy.Time.now()
			print "time after  10 seconds : ", start.secs 
			#print "duration : ",rospy.Duration(5*60) 
    except rospy.ROSInterruptException:
        pass
