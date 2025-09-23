import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ishaan/eboat_src/ros_ws/src/install/shore_comms'
