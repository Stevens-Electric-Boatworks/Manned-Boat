#! /bin/bash

echo "Starting up ROS2"

# For Development
USER_NAME="ishaan"
ROS_WS="eboat_src/ros_ws"

# Relative to ros_ws/launch
LAUNCH_FILE="test_eboat_allnodes.yaml"

# Relative to home
ROS_BAG_LOG_DIR="ros_bag_logs"


# For the RPI
# ROS_WS="~/eboat/ros_ws"
# USER_NAME="rpi"
cd /home/$USER_NAME/$ROS_WS || exit

# Source the install.bash
#
#
source install/setup.bash

# Start recording everything through ROSBag
mkdir -p /home/$USER_NAME/$ROS_BAG_LOG_DIR
cd /home/$USER_NAME/$ROS_BAG_LOG_DIR || exit

ros2 bag record -a &


# Go into the launch directory, and launch the nodes in the background

echo "Launching launch/$LAUNCH_FILE"

ros2 launch /home/$USER_NAME/$ROS_WS/launch/$LAUNCH_FILE &

echo "Finshed running startup script"

