
# Control Systems for Stevens Electric Boatworks 

This folder holds the information for the 2025 Control System for Stevens Electric Boatworks.

This is still very much a WIP, and everything is subject to change.

The current codebase is stored at `ros_ws/`
 * For more information about the ROS2 specfic components of this project, check out the documentation in there (WIP)


** Current Development is happening in `pre-navy-testing`. This is currently the codebase that is being used to prepare for the Navy Event. Once the event is over, changes will be merged from that branch back onto main.

** Documentation is still being written, but CAN motors are working.


## FAQ

#### How is this different from the 2017-2024 Control System?

This year differs because we decided to redo the control system for a variety of reasons:

* The old seniors who knew the code graduated, and left behind a system that is hard to understand
* The new control system will be more modular, and will allow us to be able to add components to the boat more easily



## Folder Structure

```
.
└── Control Systems/
    ├── README.md
    ├── INSTALL.md (install instructions)
    ├── COMPILE.md (compiling/building code instructions)
    └── diagrams/
        └── (Contains diagrams for control system, electrical, and ROS2 node structures and communications)
```

(Generated using this [ascii-tree generator](https://tree.nathanfriend.com/))
## Authors

- Ishaan Sayal (ROS2, CAN, Wiring)
- Thaigo Andrade (On-Shore Software, Remote Monitoring)
- Alex Garcia (ROS2, CAN)
- Lucas Moeller (Data Logging, Data Analysis, etc)
- Saajan Shah (Logging, Data Analysis)

