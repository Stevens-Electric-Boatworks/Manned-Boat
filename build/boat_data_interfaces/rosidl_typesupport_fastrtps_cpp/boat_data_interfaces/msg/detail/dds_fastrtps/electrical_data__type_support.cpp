// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from boat_data_interfaces:msg/ElectricalData.idl
// generated code does not contain a copyright notice
#include "boat_data_interfaces/msg/detail/electrical_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "boat_data_interfaces/msg/detail/electrical_data__functions.h"
#include "boat_data_interfaces/msg/detail/electrical_data__struct.hpp"

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
  const boat_data_interfaces::msg::ElectricalData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: vbat
  cdr << ros_message.vbat;

  // Member: vebat
  cdr << ros_message.vebat;

  // Member: temp_bat
  cdr << ros_message.temp_bat;

  // Member: battery_percent
  cdr << ros_message.battery_percent;

  // Member: current_bat
  cdr << ros_message.current_bat;

  // Member: bms_temp
  cdr << ros_message.bms_temp;

  // Member: can_bus_util_percent
  cdr << ros_message.can_bus_util_percent;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_boat_data_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  boat_data_interfaces::msg::ElectricalData & ros_message)
{
  // Member: vbat
  cdr >> ros_message.vbat;

  // Member: vebat
  cdr >> ros_message.vebat;

  // Member: temp_bat
  cdr >> ros_message.temp_bat;

  // Member: battery_percent
  cdr >> ros_message.battery_percent;

  // Member: current_bat
  cdr >> ros_message.current_bat;

  // Member: bms_temp
  cdr >> ros_message.bms_temp;

  // Member: can_bus_util_percent
  cdr >> ros_message.can_bus_util_percent;

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_boat_data_interfaces
get_serialized_size(
  const boat_data_interfaces::msg::ElectricalData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: vbat
  {
    size_t item_size = sizeof(ros_message.vbat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: vebat
  {
    size_t item_size = sizeof(ros_message.vebat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: temp_bat
  {
    size_t item_size = sizeof(ros_message.temp_bat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: battery_percent
  {
    size_t item_size = sizeof(ros_message.battery_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: current_bat
  {
    size_t item_size = sizeof(ros_message.current_bat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: bms_temp
  {
    size_t item_size = sizeof(ros_message.bms_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: can_bus_util_percent
  {
    size_t item_size = sizeof(ros_message.can_bus_util_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_boat_data_interfaces
max_serialized_size_ElectricalData(
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

  // Member: vbat
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: vebat
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: temp_bat
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: battery_percent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: current_bat
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: bms_temp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: can_bus_util_percent
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
    using DataType = boat_data_interfaces::msg::ElectricalData;
    is_plain =
      (
      offsetof(DataType, can_bus_util_percent) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_boat_data_interfaces
cdr_serialize_key(
  const boat_data_interfaces::msg::ElectricalData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: vbat
  cdr << ros_message.vbat;

  // Member: vebat
  cdr << ros_message.vebat;

  // Member: temp_bat
  cdr << ros_message.temp_bat;

  // Member: battery_percent
  cdr << ros_message.battery_percent;

  // Member: current_bat
  cdr << ros_message.current_bat;

  // Member: bms_temp
  cdr << ros_message.bms_temp;

  // Member: can_bus_util_percent
  cdr << ros_message.can_bus_util_percent;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_boat_data_interfaces
get_serialized_size_key(
  const boat_data_interfaces::msg::ElectricalData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: vbat
  {
    size_t item_size = sizeof(ros_message.vbat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: vebat
  {
    size_t item_size = sizeof(ros_message.vebat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: temp_bat
  {
    size_t item_size = sizeof(ros_message.temp_bat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: battery_percent
  {
    size_t item_size = sizeof(ros_message.battery_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: current_bat
  {
    size_t item_size = sizeof(ros_message.current_bat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: bms_temp
  {
    size_t item_size = sizeof(ros_message.bms_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: can_bus_util_percent
  {
    size_t item_size = sizeof(ros_message.can_bus_util_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_boat_data_interfaces
max_serialized_size_key_ElectricalData(
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

  // Member: vbat
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vebat
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: temp_bat
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: battery_percent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: current_bat
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bms_temp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_bus_util_percent
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
    using DataType = boat_data_interfaces::msg::ElectricalData;
    is_plain =
      (
      offsetof(DataType, can_bus_util_percent) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _ElectricalData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const boat_data_interfaces::msg::ElectricalData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ElectricalData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<boat_data_interfaces::msg::ElectricalData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ElectricalData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const boat_data_interfaces::msg::ElectricalData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ElectricalData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ElectricalData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ElectricalData__callbacks = {
  "boat_data_interfaces::msg",
  "ElectricalData",
  _ElectricalData__cdr_serialize,
  _ElectricalData__cdr_deserialize,
  _ElectricalData__get_serialized_size,
  _ElectricalData__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ElectricalData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ElectricalData__callbacks,
  get_message_typesupport_handle_function,
  &boat_data_interfaces__msg__ElectricalData__get_type_hash,
  &boat_data_interfaces__msg__ElectricalData__get_type_description,
  &boat_data_interfaces__msg__ElectricalData__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace boat_data_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_boat_data_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<boat_data_interfaces::msg::ElectricalData>()
{
  return &boat_data_interfaces::msg::typesupport_fastrtps_cpp::_ElectricalData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, boat_data_interfaces, msg, ElectricalData)() {
  return &boat_data_interfaces::msg::typesupport_fastrtps_cpp::_ElectricalData__handle;
}

#ifdef __cplusplus
}
#endif
