// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from boat_data_interfaces:msg/Alarm.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "boat_data_interfaces/msg/alarm.hpp"


#ifndef BOAT_DATA_INTERFACES__MSG__DETAIL__ALARM__BUILDER_HPP_
#define BOAT_DATA_INTERFACES__MSG__DETAIL__ALARM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "boat_data_interfaces/msg/detail/alarm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace boat_data_interfaces
{

namespace msg
{

namespace builder
{

class Init_Alarm_timestamp
{
public:
  explicit Init_Alarm_timestamp(::boat_data_interfaces::msg::Alarm & msg)
  : msg_(msg)
  {}
  ::boat_data_interfaces::msg::Alarm timestamp(::boat_data_interfaces::msg::Alarm::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::boat_data_interfaces::msg::Alarm msg_;
};

class Init_Alarm_error_code
{
public:
  Init_Alarm_error_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Alarm_timestamp error_code(::boat_data_interfaces::msg::Alarm::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_Alarm_timestamp(msg_);
  }

private:
  ::boat_data_interfaces::msg::Alarm msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::boat_data_interfaces::msg::Alarm>()
{
  return boat_data_interfaces::msg::builder::Init_Alarm_error_code();
}

}  // namespace boat_data_interfaces

#endif  // BOAT_DATA_INTERFACES__MSG__DETAIL__ALARM__BUILDER_HPP_
