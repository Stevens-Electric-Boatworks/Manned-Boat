// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from boat_data_interfaces:msg/GPIOData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "boat_data_interfaces/msg/gpio_data.hpp"


#ifndef BOAT_DATA_INTERFACES__MSG__DETAIL__GPIO_DATA__BUILDER_HPP_
#define BOAT_DATA_INTERFACES__MSG__DETAIL__GPIO_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "boat_data_interfaces/msg/detail/gpio_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace boat_data_interfaces
{

namespace msg
{

namespace builder
{

class Init_GPIOData_throttle
{
public:
  explicit Init_GPIOData_throttle(::boat_data_interfaces::msg::GPIOData & msg)
  : msg_(msg)
  {}
  ::boat_data_interfaces::msg::GPIOData throttle(::boat_data_interfaces::msg::GPIOData::_throttle_type arg)
  {
    msg_.throttle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::boat_data_interfaces::msg::GPIOData msg_;
};

class Init_GPIOData_coolant_temp
{
public:
  Init_GPIOData_coolant_temp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GPIOData_throttle coolant_temp(::boat_data_interfaces::msg::GPIOData::_coolant_temp_type arg)
  {
    msg_.coolant_temp = std::move(arg);
    return Init_GPIOData_throttle(msg_);
  }

private:
  ::boat_data_interfaces::msg::GPIOData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::boat_data_interfaces::msg::GPIOData>()
{
  return boat_data_interfaces::msg::builder::Init_GPIOData_coolant_temp();
}

}  // namespace boat_data_interfaces

#endif  // BOAT_DATA_INTERFACES__MSG__DETAIL__GPIO_DATA__BUILDER_HPP_
