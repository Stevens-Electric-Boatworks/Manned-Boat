// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from boat_data_interfaces:msg/CANMotorData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "boat_data_interfaces/msg/can_motor_data.hpp"


#ifndef BOAT_DATA_INTERFACES__MSG__DETAIL__CAN_MOTOR_DATA__BUILDER_HPP_
#define BOAT_DATA_INTERFACES__MSG__DETAIL__CAN_MOTOR_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "boat_data_interfaces/msg/detail/can_motor_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace boat_data_interfaces
{

namespace msg
{

namespace builder
{

class Init_CANMotorData_power
{
public:
  explicit Init_CANMotorData_power(::boat_data_interfaces::msg::CANMotorData & msg)
  : msg_(msg)
  {}
  ::boat_data_interfaces::msg::CANMotorData power(::boat_data_interfaces::msg::CANMotorData::_power_type arg)
  {
    msg_.power = std::move(arg);
    return std::move(msg_);
  }

private:
  ::boat_data_interfaces::msg::CANMotorData msg_;
};

class Init_CANMotorData_current
{
public:
  explicit Init_CANMotorData_current(::boat_data_interfaces::msg::CANMotorData & msg)
  : msg_(msg)
  {}
  Init_CANMotorData_power current(::boat_data_interfaces::msg::CANMotorData::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_CANMotorData_power(msg_);
  }

private:
  ::boat_data_interfaces::msg::CANMotorData msg_;
};

class Init_CANMotorData_motor_temp
{
public:
  explicit Init_CANMotorData_motor_temp(::boat_data_interfaces::msg::CANMotorData & msg)
  : msg_(msg)
  {}
  Init_CANMotorData_current motor_temp(::boat_data_interfaces::msg::CANMotorData::_motor_temp_type arg)
  {
    msg_.motor_temp = std::move(arg);
    return Init_CANMotorData_current(msg_);
  }

private:
  ::boat_data_interfaces::msg::CANMotorData msg_;
};

class Init_CANMotorData_torque
{
public:
  explicit Init_CANMotorData_torque(::boat_data_interfaces::msg::CANMotorData & msg)
  : msg_(msg)
  {}
  Init_CANMotorData_motor_temp torque(::boat_data_interfaces::msg::CANMotorData::_torque_type arg)
  {
    msg_.torque = std::move(arg);
    return Init_CANMotorData_motor_temp(msg_);
  }

private:
  ::boat_data_interfaces::msg::CANMotorData msg_;
};

class Init_CANMotorData_rpm
{
public:
  explicit Init_CANMotorData_rpm(::boat_data_interfaces::msg::CANMotorData & msg)
  : msg_(msg)
  {}
  Init_CANMotorData_torque rpm(::boat_data_interfaces::msg::CANMotorData::_rpm_type arg)
  {
    msg_.rpm = std::move(arg);
    return Init_CANMotorData_torque(msg_);
  }

private:
  ::boat_data_interfaces::msg::CANMotorData msg_;
};

class Init_CANMotorData_throttle_percentage
{
public:
  explicit Init_CANMotorData_throttle_percentage(::boat_data_interfaces::msg::CANMotorData & msg)
  : msg_(msg)
  {}
  Init_CANMotorData_rpm throttle_percentage(::boat_data_interfaces::msg::CANMotorData::_throttle_percentage_type arg)
  {
    msg_.throttle_percentage = std::move(arg);
    return Init_CANMotorData_rpm(msg_);
  }

private:
  ::boat_data_interfaces::msg::CANMotorData msg_;
};

class Init_CANMotorData_throttle_mv
{
public:
  explicit Init_CANMotorData_throttle_mv(::boat_data_interfaces::msg::CANMotorData & msg)
  : msg_(msg)
  {}
  Init_CANMotorData_throttle_percentage throttle_mv(::boat_data_interfaces::msg::CANMotorData::_throttle_mv_type arg)
  {
    msg_.throttle_mv = std::move(arg);
    return Init_CANMotorData_throttle_percentage(msg_);
  }

private:
  ::boat_data_interfaces::msg::CANMotorData msg_;
};

class Init_CANMotorData_voltage
{
public:
  Init_CANMotorData_voltage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CANMotorData_throttle_mv voltage(::boat_data_interfaces::msg::CANMotorData::_voltage_type arg)
  {
    msg_.voltage = std::move(arg);
    return Init_CANMotorData_throttle_mv(msg_);
  }

private:
  ::boat_data_interfaces::msg::CANMotorData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::boat_data_interfaces::msg::CANMotorData>()
{
  return boat_data_interfaces::msg::builder::Init_CANMotorData_voltage();
}

}  // namespace boat_data_interfaces

#endif  // BOAT_DATA_INTERFACES__MSG__DETAIL__CAN_MOTOR_DATA__BUILDER_HPP_
