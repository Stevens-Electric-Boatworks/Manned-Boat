// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from boat_data_interfaces:msg/MotionData.idl
// generated code does not contain a copyright notice
#include "boat_data_interfaces/msg/detail/motion_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "boat_data_interfaces/msg/detail/motion_data__functions.h"
#include "boat_data_interfaces/msg/detail/motion_data__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace boat_data_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_boat_data_interfaces
cdr_serialize(
  const boat_data_interfaces::msg::MotionData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: heading
  cdr << ros_message.heading;

  // Member: speed
  cdr << ros_message.speed;

  // Member: gps_lat
  cdr << ros_message.gps_lat;

  // Member: gps_long
  cdr << ros_message.gps_long;

  // Member: gps_alt
  cdr << ros_message.gps_alt;

  // Member: imu_x
  cdr << ros_message.imu_x;

  // Member: imu_y
  cdr << ros_message.imu_y;

  // Member: imu_z
  cdr << ros_message.imu_z;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_boat_data_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  boat_data_interfaces::msg::MotionData & ros_message)
{
  // Member: heading
  cdr >> ros_message.heading;

  // Member: speed
  cdr >> ros_message.speed;

  // Member: gps_lat
  cdr >> ros_message.gps_lat;

  // Member: gps_long
  cdr >> ros_message.gps_long;

  // Member: gps_alt
  cdr >> ros_message.gps_alt;

  // Member: imu_x
  cdr >> ros_message.imu_x;

  // Member: imu_y
  cdr >> ros_message.imu_y;

  // Member: imu_z
  cdr >> ros_message.imu_z;

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_boat_data_interfaces
get_serialized_size(
  const boat_data_interfaces::msg::MotionData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: heading
  {
    size_t item_size = sizeof(ros_message.heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: speed
  {
    size_t item_size = sizeof(ros_message.speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: gps_lat
  {
    size_t item_size = sizeof(ros_message.gps_lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: gps_long
  {
    size_t item_size = sizeof(ros_message.gps_long);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: gps_alt
  {
    size_t item_size = sizeof(ros_message.gps_alt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: imu_x
  {
    size_t item_size = sizeof(ros_message.imu_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: imu_y
  {
    size_t item_size = sizeof(ros_message.imu_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: imu_z
  {
    size_t item_size = sizeof(ros_message.imu_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_boat_data_interfaces
max_serialized_size_MotionData(
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

  // Member: heading
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: gps_lat
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: gps_long
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: gps_alt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: imu_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: imu_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: imu_z
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
    using DataType = boat_data_interfaces::msg::MotionData;
    is_plain =
      (
      offsetof(DataType, imu_z) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_boat_data_interfaces
cdr_serialize_key(
  const boat_data_interfaces::msg::MotionData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: heading
  cdr << ros_message.heading;

  // Member: speed
  cdr << ros_message.speed;

  // Member: gps_lat
  cdr << ros_message.gps_lat;

  // Member: gps_long
  cdr << ros_message.gps_long;

  // Member: gps_alt
  cdr << ros_message.gps_alt;

  // Member: imu_x
  cdr << ros_message.imu_x;

  // Member: imu_y
  cdr << ros_message.imu_y;

  // Member: imu_z
  cdr << ros_message.imu_z;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_boat_data_interfaces
get_serialized_size_key(
  const boat_data_interfaces::msg::MotionData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: heading
  {
    size_t item_size = sizeof(ros_message.heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: speed
  {
    size_t item_size = sizeof(ros_message.speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: gps_lat
  {
    size_t item_size = sizeof(ros_message.gps_lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: gps_long
  {
    size_t item_size = sizeof(ros_message.gps_long);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: gps_alt
  {
    size_t item_size = sizeof(ros_message.gps_alt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: imu_x
  {
    size_t item_size = sizeof(ros_message.imu_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: imu_y
  {
    size_t item_size = sizeof(ros_message.imu_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: imu_z
  {
    size_t item_size = sizeof(ros_message.imu_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_boat_data_interfaces
max_serialized_size_key_MotionData(
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

  // Member: heading
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gps_lat
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gps_long
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gps_alt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: imu_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: imu_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: imu_z
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
    using DataType = boat_data_interfaces::msg::MotionData;
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
  auto typed_message =
    static_cast<const boat_data_interfaces::msg::MotionData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MotionData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<boat_data_interfaces::msg::MotionData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MotionData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const boat_data_interfaces::msg::MotionData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MotionData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MotionData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MotionData__callbacks = {
  "boat_data_interfaces::msg",
  "MotionData",
  _MotionData__cdr_serialize,
  _MotionData__cdr_deserialize,
  _MotionData__get_serialized_size,
  _MotionData__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _MotionData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MotionData__callbacks,
  get_message_typesupport_handle_function,
  &boat_data_interfaces__msg__MotionData__get_type_hash,
  &boat_data_interfaces__msg__MotionData__get_type_description,
  &boat_data_interfaces__msg__MotionData__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace boat_data_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_boat_data_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<boat_data_interfaces::msg::MotionData>()
{
  return &boat_data_interfaces::msg::typesupport_fastrtps_cpp::_MotionData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, boat_data_interfaces, msg, MotionData)() {
  return &boat_data_interfaces::msg::typesupport_fastrtps_cpp::_MotionData__handle;
}

#ifdef __cplusplus
}
#endif
