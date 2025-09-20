// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from boat_data_interfaces:msg/MotorData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "boat_data_interfaces/msg/motor_data.hpp"


#ifndef BOAT_DATA_INTERFACES__MSG__DETAIL__MOTOR_DATA__TRAITS_HPP_
#define BOAT_DATA_INTERFACES__MSG__DETAIL__MOTOR_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "boat_data_interfaces/msg/detail/motor_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace boat_data_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorData & msg,
  std::ostream & out)
{
  out << "{";
  // member: rpm_a
  {
    out << "rpm_a: ";
    rosidl_generator_traits::value_to_yaml(msg.rpm_a, out);
    out << ", ";
  }

  // member: rpm_b
  {
    out << "rpm_b: ";
    rosidl_generator_traits::value_to_yaml(msg.rpm_b, out);
    out << ", ";
  }

  // member: motor_synch
  {
    out << "motor_synch: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_synch, out);
    out << ", ";
  }

  // member: propulsion_angle
  {
    out << "propulsion_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.propulsion_angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rpm_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rpm_a: ";
    rosidl_generator_traits::value_to_yaml(msg.rpm_a, out);
    out << "\n";
  }

  // member: rpm_b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rpm_b: ";
    rosidl_generator_traits::value_to_yaml(msg.rpm_b, out);
    out << "\n";
  }

  // member: motor_synch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_synch: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_synch, out);
    out << "\n";
  }

  // member: propulsion_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "propulsion_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.propulsion_angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorData & msg, bool use_flow_style = false)
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
  const boat_data_interfaces::msg::MotorData & msg,
  std::ostream & out, size_t indentation = 0)
{
  boat_data_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use boat_data_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const boat_data_interfaces::msg::MotorData & msg)
{
  return boat_data_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<boat_data_interfaces::msg::MotorData>()
{
  return "boat_data_interfaces::msg::MotorData";
}

template<>
inline const char * name<boat_data_interfaces::msg::MotorData>()
{
  return "boat_data_interfaces/msg/MotorData";
}

template<>
struct has_fixed_size<boat_data_interfaces::msg::MotorData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<boat_data_interfaces::msg::MotorData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<boat_data_interfaces::msg::MotorData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOAT_DATA_INTERFACES__MSG__DETAIL__MOTOR_DATA__TRAITS_HPP_
