import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ishaan/eboat_src/install/examples_rclpy_minimal_action_server'
