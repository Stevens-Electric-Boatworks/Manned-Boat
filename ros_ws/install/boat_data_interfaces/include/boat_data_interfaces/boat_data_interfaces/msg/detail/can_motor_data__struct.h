// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from boat_data_interfaces:msg/CANMotorData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "boat_data_interfaces/msg/can_motor_data.h"


#ifndef BOAT_DATA_INTERFACES__MSG__DETAIL__CAN_MOTOR_DATA__STRUCT_H_
#define BOAT_DATA_INTERFACES__MSG__DETAIL__CAN_MOTOR_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/CANMotorData in the package boat_data_interfaces.
typedef struct boat_data_interfaces__msg__CANMotorData
{
  uint8_t voltage;
  uint16_t throttle_mv;
  uint8_t throttle_percentage;
  uint16_t rpm;
  int16_t torque;
  int8_t motor_temp;
  uint8_t current;
  int16_t power;
} boat_data_interfaces__msg__CANMotorData;

// Struct for a sequence of boat_data_interfaces__msg__CANMotorData.
typedef struct boat_data_interfaces__msg__CANMotorData__Sequence
{
  boat_data_interfaces__msg__CANMotorData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} boat_data_interfaces__msg__CANMotorData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOAT_DATA_INTERFACES__MSG__DETAIL__CAN_MOTOR_DATA__STRUCT_H_
