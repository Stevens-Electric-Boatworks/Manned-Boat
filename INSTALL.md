
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


**End of steps as of 9/16/2025


