
# Current Install Config

* Ubuntu 24.04 Desktop LTS
* Kilted Kaiju
* System Configuration:
	* your name: *rpi*
	* your computers name: *rpi-node*
	* username: *rpi*
	* password: *rpi*
	* login automatically
* Networking Configuration
	* eth0 - Link Local Only (using `rpi-node.local` as connection IP)

# Raspberry Pi 4 Model B Install Instructions


## Instructions
  

 - Using the raspberry pi imaging tool, download the following
	 - Ubuntu 24.04 Desktop LTS
	 -  Then flash it to the micro sd card, and insert it
 - Once you have installed it, turn on the power switch on the red board underneath the raspberry pi
	 - This board is the one that powers the RPI using the LiPO
- In the installer, configure the following settings
	- Use English language and keyboard
	- Connect to a wifi network (a phone hotspot works, make sure to disable security settings if able to make connection easier
	- Configure your network settings (you can  use the example provided at the top of this file)
- In the terminal, now do the following
	- install the `htop` package
	- enable ssh with the following commands
		- `sudo apt update`
		- `sudo apt install ssh`
		- `sudo ufw disable` (disable the firewall)
	- try to ssh into the RPI using the creds you picked above
- Dont forget to disable screen sleeping in the power settings

### Installing ROS2
These steps will involve installing ROS2 onto the RPI
The ROS version used is [Kilted Kaiju](https://docs.ros.org/en/kilted/Installation/Ubuntu-Install-Debs.html)

* Run the installation instructions for Kilted Kaiju (linked above)  


### Cloning The Code

* To clone, run `git clone https://github.com/EmeraldWither/Stevens-Electric-Boatworks`
* Then, rename the folder with `mv Stevens-Electric-Boatworks/ eboat-sc/`


### ROS2 Canopen Setup

* This codebase uses `ros2_canopen` with instructions to install [here](https://ros-industrial.github.io/ros2_canopen/manual/rolling/quickstart/installation.html)

* Run the following commands to build the package
  
  * `rosdep install --from-paths src/ros2_canopen --ignore-src -r -y`
  * `colcon build` (this will take a while!!!)

 
### CAN_Motor Branch Specific Instructions

* Install the python package `canopen` by running `pip install canopen --break-system-packages`

Run on ROS2 instance
```
sudo apt-get install -y ros-kilted-rosbridge-server
sudo apt-get install -y ros-kilted-tf2-web-republisher
sudo apt install python3-roslaunch
```


Run services before running other thing
```
roslaunch rosbridge_server rosbridge_websocket.launch
rosrun tf2_web_republisher tf2_web_republisher
```


**End of steps as of 9/16/2025


