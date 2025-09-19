// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from boat_data_interfaces:msg/MotionData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "boat_data_interfaces/msg/motion_data.h"


#ifndef BOAT_DATA_INTERFACES__MSG__DETAIL__MOTION_DATA__STRUCT_H_
#define BOAT_DATA_INTERFACES__MSG__DETAIL__MOTION_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/MotionData in the package boat_data_interfaces.
typedef struct boat_data_interfaces__msg__MotionData
{
  int8_t heading;
  /// speed is always postive
  uint8_t speed;
  float gps_lat;
  float gps_long;
  float gps_alt;
  float imu_x;
  float imu_y;
  float imu_z;
} boat_data_interfaces__msg__MotionData;

// Struct for a sequence of boat_data_interfaces__msg__MotionData.
typedef struct boat_data_interfaces__msg__MotionData__Sequence
{
  boat_data_interfaces__msg__MotionData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} boat_data_interfaces__msg__MotionData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOAT_DATA_INTERFACES__MSG__DETAIL__MOTION_DATA__STRUCT_H_
