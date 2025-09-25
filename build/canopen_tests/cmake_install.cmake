# Install script for directory: /home/ishaan/eboat_src/ros_ws/src/ros2_canopen/canopen_tests

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/ishaan/eboat_src/install/canopen_tests")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/canopen_tests/config/simple/" TYPE DIRECTORY FILES "/home/ishaan/eboat_src/ros_ws/src/ros2_canopen/canopen_tests/config/simple/" REGEX "/bus\\.yml$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/canopen_tests/config/simple/" TYPE DIRECTORY FILES "/home/ishaan/eboat_src/build/canopen_tests/config/simple/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/canopen_tests/config/canopen_system/" TYPE DIRECTORY FILES "/home/ishaan/eboat_src/ros_ws/src/ros2_canopen/canopen_tests/config/canopen_system/" REGEX "/bus\\.yml$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/canopen_tests/config/canopen_system/" TYPE DIRECTORY FILES "/home/ishaan/eboat_src/build/canopen_tests/config/canopen_system/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/canopen_tests/config/cia402_system/" TYPE DIRECTORY FILES "/home/ishaan/eboat_src/ros_ws/src/ros2_canopen/canopen_tests/config/cia402_system/" REGEX "/bus\\.yml$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/canopen_tests/config/cia402_system/" TYPE DIRECTORY FILES "/home/ishaan/eboat_src/build/canopen_tests/config/cia402_system/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/canopen_tests/config/cia402_namespaced_system/" TYPE DIRECTORY FILES "/home/ishaan/eboat_src/ros_ws/src/ros2_canopen/canopen_tests/config/cia402_namespaced_system/" REGEX "/bus\\.yml$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/canopen_tests/config/cia402_namespaced_system/" TYPE DIRECTORY FILES "/home/ishaan/eboat_src/build/canopen_tests/config/cia402_namespaced_system/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/canopen_tests/config/cia402/" TYPE DIRECTORY FILES "/home/ishaan/eboat_src/ros_ws/src/ros2_canopen/canopen_tests/config/cia402/" REGEX "/bus\\.yml$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/canopen_tests/config/cia402/" TYPE DIRECTORY FILES "/home/ishaan/eboat_src/build/canopen_tests/config/cia402/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/canopen_tests/config/cia402_lifecycle/" TYPE DIRECTORY FILES "/home/ishaan/eboat_src/ros_ws/src/ros2_canopen/canopen_tests/config/cia402_lifecycle/" REGEX "/bus\\.yml$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/canopen_tests/config/cia402_lifecycle/" TYPE DIRECTORY FILES "/home/ishaan/eboat_src/build/canopen_tests/config/cia402_lifecycle/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/canopen_tests/config/cia402_diagnostics/" TYPE DIRECTORY FILES "/home/ishaan/eboat_src/ros_ws/src/ros2_canopen/canopen_tests/config/cia402_diagnostics/" REGEX "/bus\\.yml$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/canopen_tests/config/cia402_diagnostics/" TYPE DIRECTORY FILES "/home/ishaan/eboat_src/build/canopen_tests/config/cia402_diagnostics/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/canopen_tests/config/simple_lifecycle/" TYPE DIRECTORY FILES "/home/ishaan/eboat_src/ros_ws/src/ros2_canopen/canopen_tests/config/simple_lifecycle/" REGEX "/bus\\.yml$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/canopen_tests/config/simple_lifecycle/" TYPE DIRECTORY FILES "/home/ishaan/eboat_src/build/canopen_tests/config/simple_lifecycle/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/canopen_tests/config/simple_diagnostics/" TYPE DIRECTORY FILES "/home/ishaan/eboat_src/ros_ws/src/ros2_canopen/canopen_tests/config/simple_diagnostics/" REGEX "/bus\\.yml$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/canopen_tests/config/simple_diagnostics/" TYPE DIRECTORY FILES "/home/ishaan/eboat_src/build/canopen_tests/config/simple_diagnostics/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/canopen_tests/config/robot_control/" TYPE DIRECTORY FILES "/home/ishaan/eboat_src/ros_ws/src/ros2_canopen/canopen_tests/config/robot_control/" REGEX "/bus\\.yml$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/canopen_tests/config/robot_control/" TYPE DIRECTORY FILES "/home/ishaan/eboat_src/build/canopen_tests/config/robot_control/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/canopen_tests" TYPE DIRECTORY FILES
    "/home/ishaan/eboat_src/ros_ws/src/ros2_canopen/canopen_tests/launch"
    "/home/ishaan/eboat_src/ros_ws/src/ros2_canopen/canopen_tests/rviz"
    "/home/ishaan/eboat_src/ros_ws/src/ros2_canopen/canopen_tests/urdf"
    "/home/ishaan/eboat_src/ros_ws/src/ros2_canopen/canopen_tests/launch_tests"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/ishaan/eboat_src/build/canopen_tests/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/canopen_tests")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/ishaan/eboat_src/build/canopen_tests/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/canopen_tests")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/canopen_tests/environment" TYPE FILE FILES "/opt/ros/kilted/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/canopen_tests/environment" TYPE FILE FILES "/home/ishaan/eboat_src/build/canopen_tests/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/canopen_tests/environment" TYPE FILE FILES "/opt/ros/kilted/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/canopen_tests/environment" TYPE FILE FILES "/home/ishaan/eboat_src/build/canopen_tests/ament_cmake_environment_hooks/path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/canopen_tests" TYPE FILE FILES "/home/ishaan/eboat_src/build/canopen_tests/ament_cmake_environment_hooks/local_setup.bash")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/canopen_tests" TYPE FILE FILES "/home/ishaan/eboat_src/build/canopen_tests/ament_cmake_environment_hooks/local_setup.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/canopen_tests" TYPE FILE FILES "/home/ishaan/eboat_src/build/canopen_tests/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/canopen_tests" TYPE FILE FILES "/home/ishaan/eboat_src/build/canopen_tests/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/canopen_tests" TYPE FILE FILES "/home/ishaan/eboat_src/build/canopen_tests/ament_cmake_environment_hooks/package.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/ishaan/eboat_src/build/canopen_tests/ament_cmake_index/share/ament_index/resource_index/packages/canopen_tests")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/canopen_tests/cmake" TYPE FILE FILES
    "/home/ishaan/eboat_src/build/canopen_tests/ament_cmake_core/canopen_testsConfig.cmake"
    "/home/ishaan/eboat_src/build/canopen_tests/ament_cmake_core/canopen_testsConfig-version.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/canopen_tests" TYPE FILE FILES "/home/ishaan/eboat_src/ros_ws/src/ros2_canopen/canopen_tests/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/ishaan/eboat_src/build/canopen_tests/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
