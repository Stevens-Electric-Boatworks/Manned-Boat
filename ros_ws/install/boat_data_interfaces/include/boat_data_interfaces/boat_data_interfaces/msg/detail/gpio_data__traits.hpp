// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from boat_data_interfaces:msg/GPIOData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "boat_data_interfaces/msg/gpio_data.hpp"


#ifndef BOAT_DATA_INTERFACES__MSG__DETAIL__GPIO_DATA__TRAITS_HPP_
#define BOAT_DATA_INTERFACES__MSG__DETAIL__GPIO_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "boat_data_interfaces/msg/detail/gpio_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace boat_data_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const GPIOData & msg,
  std::ostream & out)
{
  out << "{";
  // member: coolant_temp
  {
    out << "coolant_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.coolant_temp, out);
    out << ", ";
  }

  // member: throttle
  {
    out << "throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GPIOData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: coolant_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coolant_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.coolant_temp, out);
    out << "\n";
  }

  // member: throttle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GPIOData & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace boat_data_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use boat_data_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const boat_data_interfaces::msg::GPIOData & msg,
  std::ostream & out, size_t indentation = 0)
{
  boat_data_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use boat_data_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const boat_data_interfaces::msg::GPIOData & msg)
{
  return boat_data_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<boat_data_interfaces::msg::GPIOData>()
{
  return "boat_data_interfaces::msg::GPIOData";
}

template<>
inline const char * name<boat_data_interfaces::msg::GPIOData>()
{
  return "boat_data_interfaces/msg/GPIOData";
}

template<>
struct has_fixed_size<boat_data_interfaces::msg::GPIOData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<boat_data_interfaces::msg::GPIOData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<boat_data_interfaces::msg::GPIOData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOAT_DATA_INTERFACES__MSG__DETAIL__GPIO_DATA__TRAITS_HPP_
