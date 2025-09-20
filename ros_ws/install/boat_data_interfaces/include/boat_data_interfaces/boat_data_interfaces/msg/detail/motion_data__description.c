// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from boat_data_interfaces:msg/MotionData.idl
// generated code does not contain a copyright notice

#include "boat_data_interfaces/msg/detail/motion_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_boat_data_interfaces
const rosidl_type_hash_t *
boat_data_interfaces__msg__MotionData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x02, 0xa1, 0x58, 0xfa, 0xf5, 0x97, 0xd4, 0x45,
      0xc8, 0x31, 0x9c, 0x0a, 0xa4, 0xf2, 0x6f, 0xf6,
      0x07, 0x41, 0x2e, 0x15, 0x83, 0xe7, 0xd9, 0x22,
      0xc0, 0xe3, 0xa1, 0xef, 0x20, 0x51, 0xc6, 0x9c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char boat_data_interfaces__msg__MotionData__TYPE_NAME[] = "boat_data_interfaces/msg/MotionData";

// Define type names, field names, and default values
static char boat_data_interfaces__msg__MotionData__FIELD_NAME__heading[] = "heading";
static char boat_data_interfaces__msg__MotionData__FIELD_NAME__speed[] = "speed";
static char boat_data_interfaces__msg__MotionData__FIELD_NAME__gps_lat[] = "gps_lat";
static char boat_data_interfaces__msg__MotionData__FIELD_NAME__gps_long[] = "gps_long";
static char boat_data_interfaces__msg__MotionData__FIELD_NAME__gps_alt[] = "gps_alt";
static char boat_data_interfaces__msg__MotionData__FIELD_NAME__imu_x[] = "imu_x";
static char boat_data_interfaces__msg__MotionData__FIELD_NAME__imu_y[] = "imu_y";
static char boat_data_interfaces__msg__MotionData__FIELD_NAME__imu_z[] = "imu_z";

static rosidl_runtime_c__type_description__Field boat_data_interfaces__msg__MotionData__FIELDS[] = {
  {
    {boat_data_interfaces__msg__MotionData__FIELD_NAME__heading, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {boat_data_interfaces__msg__MotionData__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {boat_data_interfaces__msg__MotionData__FIELD_NAME__gps_lat, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {boat_data_interfaces__msg__MotionData__FIELD_NAME__gps_long, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {boat_data_interfaces__msg__MotionData__FIELD_NAME__gps_alt, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {boat_data_interfaces__msg__MotionData__FIELD_NAME__imu_x, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {boat_data_interfaces__msg__MotionData__FIELD_NAME__imu_y, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {boat_data_interfaces__msg__MotionData__FIELD_NAME__imu_z, 5, 5},
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
boat_data_interfaces__msg__MotionData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {boat_data_interfaces__msg__MotionData__TYPE_NAME, 35, 35},
      {boat_data_interfaces__msg__MotionData__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int8 heading\n"
  "# speed is always postive\n"
  "uint8 speed\n"
  "\n"
  "float32 gps_lat\n"
  "float32 gps_long\n"
  "float32 gps_alt\n"
  "\n"
  "float32 imu_x\n"
  "float32 imu_y\n"
  "float32 imu_z ";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
boat_data_interfaces__msg__MotionData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {boat_data_interfaces__msg__MotionData__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 144, 144},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
boat_data_interfaces__msg__MotionData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *boat_data_interfaces__msg__MotionData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
