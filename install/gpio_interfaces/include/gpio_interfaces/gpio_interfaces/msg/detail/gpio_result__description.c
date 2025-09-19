// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from gpio_interfaces:msg/GPIOResult.idl
// generated code does not contain a copyright notice

#include "gpio_interfaces/msg/detail/gpio_result__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_gpio_interfaces
const rosidl_type_hash_t *
gpio_interfaces__msg__GPIOResult__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5d, 0x4a, 0x2a, 0xef, 0x50, 0x70, 0x7e, 0x2c,
      0x38, 0x38, 0x7d, 0x88, 0xe1, 0x17, 0x44, 0xba,
      0x38, 0xac, 0xf2, 0x42, 0x32, 0xbe, 0xf8, 0x9f,
      0x79, 0x2f, 0x8b, 0xf0, 0x6a, 0x6e, 0x98, 0x4c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char gpio_interfaces__msg__GPIOResult__TYPE_NAME[] = "gpio_interfaces/msg/GPIOResult";

// Define type names, field names, and default values
static char gpio_interfaces__msg__GPIOResult__FIELD_NAME__temp[] = "temp";
static char gpio_interfaces__msg__GPIOResult__FIELD_NAME__imu_x[] = "imu_x";
static char gpio_interfaces__msg__GPIOResult__FIELD_NAME__imu_y[] = "imu_y";
static char gpio_interfaces__msg__GPIOResult__FIELD_NAME__imu_z[] = "imu_z";
static char gpio_interfaces__msg__GPIOResult__FIELD_NAME__gps_lat[] = "gps_lat";
static char gpio_interfaces__msg__GPIOResult__FIELD_NAME__gps_lon[] = "gps_lon";
static char gpio_interfaces__msg__GPIOResult__FIELD_NAME__gps_alt[] = "gps_alt";

static rosidl_runtime_c__type_description__Field gpio_interfaces__msg__GPIOResult__FIELDS[] = {
  {
    {gpio_interfaces__msg__GPIOResult__FIELD_NAME__temp, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gpio_interfaces__msg__GPIOResult__FIELD_NAME__imu_x, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gpio_interfaces__msg__GPIOResult__FIELD_NAME__imu_y, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gpio_interfaces__msg__GPIOResult__FIELD_NAME__imu_z, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gpio_interfaces__msg__GPIOResult__FIELD_NAME__gps_lat, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gpio_interfaces__msg__GPIOResult__FIELD_NAME__gps_lon, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gpio_interfaces__msg__GPIOResult__FIELD_NAME__gps_alt, 7, 7},
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
gpio_interfaces__msg__GPIOResult__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {gpio_interfaces__msg__GPIOResult__TYPE_NAME, 30, 30},
      {gpio_interfaces__msg__GPIOResult__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 temp\n"
  "float32 imu_x\n"
  "float32 imu_y\n"
  "float32 imu_z\n"
  "float32 gps_lat\n"
  "float32 gps_lon\n"
  "float32 gps_alt";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
gpio_interfaces__msg__GPIOResult__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {gpio_interfaces__msg__GPIOResult__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 100, 100},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
gpio_interfaces__msg__GPIOResult__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *gpio_interfaces__msg__GPIOResult__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
