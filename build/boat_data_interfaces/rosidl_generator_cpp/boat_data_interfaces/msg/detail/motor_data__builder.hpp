// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from boat_data_interfaces:msg/MotorData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "boat_data_interfaces/msg/motor_data.hpp"


#ifndef BOAT_DATA_INTERFACES__MSG__DETAIL__MOTOR_DATA__BUILDER_HPP_
#define BOAT_DATA_INTERFACES__MSG__DETAIL__MOTOR_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "boat_data_interfaces/msg/detail/motor_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace boat_data_interfaces
{

namespace msg
{

namespace builder
{

class Init_MotorData_propulsion_angle
{
public:
  explicit Init_MotorData_propulsion_angle(::boat_data_interfaces::msg::MotorData & msg)
  : msg_(msg)
  {}
  ::boat_data_interfaces::msg::MotorData propulsion_angle(::boat_data_interfaces::msg::MotorData::_propulsion_angle_type arg)
  {
    msg_.propulsion_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::boat_data_interfaces::msg::MotorData msg_;
};

class Init_MotorData_motor_synch
{
public:
  explicit Init_MotorData_motor_synch(::boat_data_interfaces::msg::MotorData & msg)
  : msg_(msg)
  {}
  Init_MotorData_propulsion_angle motor_synch(::boat_data_interfaces::msg::MotorData::_motor_synch_type arg)
  {
    msg_.motor_synch = std::move(arg);
    return Init_MotorData_propulsion_angle(msg_);
  }

private:
  ::boat_data_interfaces::msg::MotorData msg_;
};

class Init_MotorData_rpm_b
{
public:
  explicit Init_MotorData_rpm_b(::boat_data_interfaces::msg::MotorData & msg)
  : msg_(msg)
  {}
  Init_MotorData_motor_synch rpm_b(::boat_data_interfaces::msg::MotorData::_rpm_b_type arg)
  {
    msg_.rpm_b = std::move(arg);
    return Init_MotorData_motor_synch(msg_);
  }

private:
  ::boat_data_interfaces::msg::MotorData msg_;
};

class Init_MotorData_rpm_a
{
public:
  Init_MotorData_rpm_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorData_rpm_b rpm_a(::boat_data_interfaces::msg::MotorData::_rpm_a_type arg)
  {
    msg_.rpm_a = std::move(arg);
    return Init_MotorData_rpm_b(msg_);
  }

private:
  ::boat_data_interfaces::msg::MotorData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::boat_data_interfaces::msg::MotorData>()
{
  return boat_data_interfaces::msg::builder::Init_MotorData_rpm_a();
}

}  // namespace boat_data_interfaces

#endif  // BOAT_DATA_INTERFACES__MSG__DETAIL__MOTOR_DATA__BUILDER_HPP_
