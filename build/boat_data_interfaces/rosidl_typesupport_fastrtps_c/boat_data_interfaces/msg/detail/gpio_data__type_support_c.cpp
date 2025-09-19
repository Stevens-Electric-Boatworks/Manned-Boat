// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from boat_data_interfaces:msg/GPIOData.idl
// generated code does not contain a copyright notice
#include "boat_data_interfaces/msg/detail/gpio_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "boat_data_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "boat_data_interfaces/msg/detail/gpio_data__struct.h"
#include "boat_data_interfaces/msg/detail/gpio_data__functions.h"
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


using _GPIOData__ros_msg_type = boat_data_interfaces__msg__GPIOData;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_boat_data_interfaces
bool cdr_serialize_boat_data_interfaces__msg__GPIOData(
  const boat_data_interfaces__msg__GPIOData * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: coolant_temp
  {
    cdr << ros_message->coolant_temp;
  }

  // Field name: throttle
  {
    cdr << ros_message->throttle;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_boat_data_interfaces
bool cdr_deserialize_boat_data_interfaces__msg__GPIOData(
  eprosima::fastcdr::Cdr & cdr,
  boat_data_interfaces__msg__GPIOData * ros_message)
{
  // Field name: coolant_temp
  {
    cdr >> ros_message->coolant_temp;
  }

  // Field name: throttle
  {
    cdr >> ros_message->throttle;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_boat_data_interfaces
size_t get_serialized_size_boat_data_interfaces__msg__GPIOData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GPIOData__ros_msg_type * ros_message = static_cast<const _GPIOData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: coolant_temp
  {
    size_t item_size = sizeof(ros_message->coolant_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: throttle
  {
    size_t item_size = sizeof(ros_message->throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_boat_data_interfaces
size_t max_serialized_size_boat_data_interfaces__msg__GPIOData(
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

  // Field name: coolant_temp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: throttle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = boat_data_interfaces__msg__GPIOData;
    is_plain =
      (
      offsetof(DataType, throttle) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_boat_data_interfaces
bool cdr_serialize_key_boat_data_interfaces__msg__GPIOData(
  const boat_data_interfaces__msg__GPIOData * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: coolant_temp
  {
    cdr << ros_message->coolant_temp;
  }

  // Field name: throttle
  {
    cdr << ros_message->throttle;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_boat_data_interfaces
size_t get_serialized_size_key_boat_data_interfaces__msg__GPIOData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GPIOData__ros_msg_type * ros_message = static_cast<const _GPIOData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: coolant_temp
  {
    size_t item_size = sizeof(ros_message->coolant_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: throttle
  {
    size_t item_size = sizeof(ros_message->throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_boat_data_interfaces
size_t max_serialized_size_key_boat_data_interfaces__msg__GPIOData(
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
  // Field name: coolant_temp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: throttle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = boat_data_interfaces__msg__GPIOData;
    is_plain =
      (
      offsetof(DataType, throttle) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _GPIOData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const boat_data_interfaces__msg__GPIOData * ros_message = static_cast<const boat_data_interfaces__msg__GPIOData *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_boat_data_interfaces__msg__GPIOData(ros_message, cdr);
}

static bool _GPIOData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  boat_data_interfaces__msg__GPIOData * ros_message = static_cast<boat_data_interfaces__msg__GPIOData *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_boat_data_interfaces__msg__GPIOData(cdr, ros_message);
}

static uint32_t _GPIOData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_boat_data_interfaces__msg__GPIOData(
      untyped_ros_message, 0));
}

static size_t _GPIOData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_boat_data_interfaces__msg__GPIOData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GPIOData = {
  "boat_data_interfaces::msg",
  "GPIOData",
  _GPIOData__cdr_serialize,
  _GPIOData__cdr_deserialize,
  _GPIOData__get_serialized_size,
  _GPIOData__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _GPIOData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GPIOData,
  get_message_typesupport_handle_function,
  &boat_data_interfaces__msg__GPIOData__get_type_hash,
  &boat_data_interfaces__msg__GPIOData__get_type_description,
  &boat_data_interfaces__msg__GPIOData__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, boat_data_interfaces, msg, GPIOData)() {
  return &_GPIOData__type_support;
}

#if defined(__cplusplus)
}
#endif
