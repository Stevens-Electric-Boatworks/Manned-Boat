// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from boat_data_interfaces:msg/MotorData.idl
// generated code does not contain a copyright notice

#include "boat_data_interfaces/msg/detail/motor_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_boat_data_interfaces
const rosidl_type_hash_t *
boat_data_interfaces__msg__MotorData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1d, 0x08, 0xbe, 0x4c, 0xc6, 0xef, 0x06, 0xc1,
      0xd3, 0xbb, 0x73, 0xc0, 0x1a, 0x53, 0x76, 0xd9,
      0x60, 0x37, 0x3c, 0xdb, 0x6f, 0x6f, 0x1d, 0x24,
      0x2c, 0x97, 0x3e, 0x88, 0xc9, 0x27, 0x45, 0x5d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char boat_data_interfaces__msg__MotorData__TYPE_NAME[] = "boat_data_interfaces/msg/MotorData";

// Define type names, field names, and default values
static char boat_data_interfaces__msg__MotorData__FIELD_NAME__rpm_a[] = "rpm_a";
static char boat_data_interfaces__msg__MotorData__FIELD_NAME__rpm_b[] = "rpm_b";
static char boat_data_interfaces__msg__MotorData__FIELD_NAME__motor_synch[] = "motor_synch";
static char boat_data_interfaces__msg__MotorData__FIELD_NAME__propulsion_angle[] = "propulsion_angle";

static rosidl_runtime_c__type_description__Field boat_data_interfaces__msg__MotorData__FIELDS[] = {
  {
    {boat_data_interfaces__msg__MotorData__FIELD_NAME__rpm_a, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {boat_data_interfaces__msg__MotorData__FIELD_NAME__rpm_b, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {boat_data_interfaces__msg__MotorData__FIELD_NAME__motor_synch, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {boat_data_interfaces__msg__MotorData__FIELD_NAME__propulsion_angle, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
boat_data_interfaces__msg__MotorData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {boat_data_interfaces__msg__MotorData__TYPE_NAME, 34, 34},
      {boat_data_interfaces__msg__MotorData__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 rpm_a\n"
  "uint8 rpm_b\n"
  "float32 motor_synch\n"
  "float32 propulsion_angle\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
boat_data_interfaces__msg__MotorData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {boat_data_interfaces__msg__MotorData__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 70, 70},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
boat_data_interfaces__msg__MotorData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *boat_data_interfaces__msg__MotorData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
