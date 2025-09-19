// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from boat_data_interfaces:msg/MotionData.idl
// generated code does not contain a copyright notice
#include "boat_data_interfaces/msg/detail/motion_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "boat_data_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "boat_data_interfaces/msg/detail/motion_data__struct.h"
#include "boat_data_interfaces/msg/detail/motion_data__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _MotionData__ros_msg_type = boat_data_interfaces__msg__MotionData;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_boat_data_interfaces
bool cdr_serialize_boat_data_interfaces__msg__MotionData(
  const boat_data_interfaces__msg__MotionData * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: heading
  {
    cdr << ros_message->heading;
  }

  // Field name: speed
  {
    cdr << ros_message->speed;
  }

  // Field name: gps_lat
  {
    cdr << ros_message->gps_lat;
  }

  // Field name: gps_long
  {
    cdr << ros_message->gps_long;
  }

  // Field name: gps_alt
  {
    cdr << ros_message->gps_alt;
  }

  // Field name: imu_x
  {
    cdr << ros_message->imu_x;
  }

  // Field name: imu_y
  {
    cdr << ros_message->imu_y;
  }

  // Field name: imu_z
  {
    cdr << ros_message->imu_z;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_boat_data_interfaces
bool cdr_deserialize_boat_data_interfaces__msg__MotionData(
  eprosima::fastcdr::Cdr & cdr,
  boat_data_interfaces__msg__MotionData * ros_message)
{
  // Field name: heading
  {
    cdr >> ros_message->heading;
  }

  // Field name: speed
  {
    cdr >> ros_message->speed;
  }

  // Field name: gps_lat
  {
    cdr >> ros_message->gps_lat;
  }

  // Field name: gps_long
  {
    cdr >> ros_message->gps_long;
  }

  // Field name: gps_alt
  {
    cdr >> ros_message->gps_alt;
  }

  // Field name: imu_x
  {
    cdr >> ros_message->imu_x;
  }

  // Field name: imu_y
  {
    cdr >> ros_message->imu_y;
  }

  // Field name: imu_z
  {
    cdr >> ros_message->imu_z;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_boat_data_interfaces
size_t get_serialized_size_boat_data_interfaces__msg__MotionData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotionData__ros_msg_type * ros_message = static_cast<const _MotionData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: heading
  {
    size_t item_size = sizeof(ros_message->heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: speed
  {
    size_t item_size = sizeof(ros_message->speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gps_lat
  {
    size_t item_size = sizeof(ros_message->gps_lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gps_long
  {
    size_t item_size = sizeof(ros_message->gps_long);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gps_alt
  {
    size_t item_size = sizeof(ros_message->gps_alt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: imu_x
  {
    size_t item_size = sizeof(ros_message->imu_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: imu_y
  {
    size_t item_size = sizeof(ros_message->imu_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: imu_z
  {
    size_t item_size = sizeof(ros_message->imu_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_boat_data_interfaces
size_t max_serialized_size_boat_data_interfaces__msg__MotionData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: heading
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: gps_lat
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: gps_long
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: gps_alt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: imu_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: imu_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: imu_z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = boat_data_interfaces__msg__MotionData;
    is_plain =
      (
      offsetof(DataType, imu_z) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_boat_data_interfaces
bool cdr_serialize_key_boat_data_interfaces__msg__MotionData(
  const boat_data_interfaces__msg__MotionData * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: heading
  {
    cdr << ros_message->heading;
  }

  // Field name: speed
  {
    cdr << ros_message->speed;
  }

  // Field name: gps_lat
  {
    cdr << ros_message->gps_lat;
  }

  // Field name: gps_long
  {
    cdr << ros_message->gps_long;
  }

  // Field name: gps_alt
  {
    cdr << ros_message->gps_alt;
  }

  // Field name: imu_x
  {
    cdr << ros_message->imu_x;
  }

  // Field name: imu_y
  {
    cdr << ros_message->imu_y;
  }

  // Field name: imu_z
  {
    cdr << ros_message->imu_z;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_boat_data_interfaces
size_t get_serialized_size_key_boat_data_interfaces__msg__MotionData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotionData__ros_msg_type * ros_message = static_cast<const _MotionData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: heading
  {
    size_t item_size = sizeof(ros_message->heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: speed
  {
    size_t item_size = sizeof(ros_message->speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gps_lat
  {
    size_t item_size = sizeof(ros_message->gps_lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gps_long
  {
    size_t item_size = sizeof(ros_message->gps_long);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gps_alt
  {
    size_t item_size = sizeof(ros_message->gps_alt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: imu_x
  {
    size_t item_size = sizeof(ros_message->imu_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: imu_y
  {
    size_t item_size = sizeof(ros_message->imu_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: imu_z
  {
    size_t item_size = sizeof(ros_message->imu_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_boat_data_interfaces
size_t max_serialized_size_key_boat_data_interfaces__msg__MotionData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: heading
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: gps_lat
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: gps_long
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: gps_alt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: imu_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: imu_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: imu_z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = boat_data_interfaces__msg__MotionData;
    is_plain =
      (
      offsetof(DataType, imu_z) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _MotionData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const boat_data_interfaces__msg__MotionData * ros_message = static_cast<const boat_data_interfaces__msg__MotionData *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_boat_data_interfaces__msg__MotionData(ros_message, cdr);
}

static bool _MotionData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  boat_data_interfaces__msg__MotionData * ros_message = static_cast<boat_data_interfaces__msg__MotionData *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_boat_data_interfaces__msg__MotionData(cdr, ros_message);
}

static uint32_t _MotionData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_boat_data_interfaces__msg__MotionData(
      untyped_ros_message, 0));
}

static size_t _MotionData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_boat_data_interfaces__msg__MotionData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MotionData = {
  "boat_data_interfaces::msg",
  "MotionData",
  _MotionData__cdr_serialize,
  _MotionData__cdr_deserialize,
  _MotionData__get_serialized_size,
  _MotionData__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _MotionData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotionData,
  get_message_typesupport_handle_function,
  &boat_data_interfaces__msg__MotionData__get_type_hash,
  &boat_data_interfaces__msg__MotionData__get_type_description,
  &boat_data_interfaces__msg__MotionData__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, boat_data_interfaces, msg, MotionData)() {
  return &_MotionData__type_support;
}

#if defined(__cplusplus)
}
#endif
