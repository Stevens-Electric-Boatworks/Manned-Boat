// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from boat_data_interfaces:msg/CANMotorData.idl
// generated code does not contain a copyright notice

#include "boat_data_interfaces/msg/detail/can_motor_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_boat_data_interfaces
const rosidl_type_hash_t *
boat_data_interfaces__msg__CANMotorData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0f, 0x19, 0x17, 0x81, 0x41, 0x60, 0xf4, 0xcc,
      0x54, 0xce, 0x0d, 0xac, 0xdb, 0xf6, 0x8a, 0x6d,
      0x3a, 0xfb, 0x01, 0xd2, 0x5f, 0x37, 0x6e, 0xa9,
      0xba, 0x53, 0x75, 0x88, 0x34, 0x24, 0xd2, 0x65,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char boat_data_interfaces__msg__CANMotorData__TYPE_NAME[] = "boat_data_interfaces/msg/CANMotorData";

// Define type names, field names, and default values
static char boat_data_interfaces__msg__CANMotorData__FIELD_NAME__voltage[] = "voltage";
static char boat_data_interfaces__msg__CANMotorData__FIELD_NAME__throttle_mv[] = "throttle_mv";
static char boat_data_interfaces__msg__CANMotorData__FIELD_NAME__throttle_percentage[] = "throttle_percentage";
static char boat_data_interfaces__msg__CANMotorData__FIELD_NAME__rpm[] = "rpm";
static char boat_data_interfaces__msg__CANMotorData__FIELD_NAME__torque[] = "torque";
static char boat_data_interfaces__msg__CANMotorData__FIELD_NAME__motor_temp[] = "motor_temp";
static char boat_data_interfaces__msg__CANMotorData__FIELD_NAME__current[] = "current";
static char boat_data_interfaces__msg__CANMotorData__FIELD_NAME__power[] = "power";

static rosidl_runtime_c__type_description__Field boat_data_interfaces__msg__CANMotorData__FIELDS[] = {
  {
    {boat_data_interfaces__msg__CANMotorData__FIELD_NAME__voltage, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {boat_data_interfaces__msg__CANMotorData__FIELD_NAME__throttle_mv, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {boat_data_interfaces__msg__CANMotorData__FIELD_NAME__throttle_percentage, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {boat_data_interfaces__msg__CANMotorData__FIELD_NAME__rpm, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {boat_data_interfaces__msg__CANMotorData__FIELD_NAME__torque, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {boat_data_interfaces__msg__CANMotorData__FIELD_NAME__motor_temp, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {boat_data_interfaces__msg__CANMotorData__FIELD_NAME__current, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {boat_data_interfaces__msg__CANMotorData__FIELD_NAME__power, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
boat_data_interfaces__msg__CANMotorData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {boat_data_interfaces__msg__CANMotorData__TYPE_NAME, 37, 37},
      {boat_data_interfaces__msg__CANMotorData__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 voltage\n"
  "uint16 throttle_mv\n"
  "uint8 throttle_percentage\n"
  "uint16 rpm\n"
  "int16 torque\n"
  "int8 motor_temp\n"
  "uint8 current\n"
  "int16 power";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
boat_data_interfaces__msg__CANMotorData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {boat_data_interfaces__msg__CANMotorData__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 125, 125},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
boat_data_interfaces__msg__CANMotorData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *boat_data_interfaces__msg__CANMotorData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
