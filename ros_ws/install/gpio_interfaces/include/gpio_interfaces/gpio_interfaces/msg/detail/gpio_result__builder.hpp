// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gpio_interfaces:msg/GPIOResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "gpio_interfaces/msg/gpio_result.hpp"


#ifndef GPIO_INTERFACES__MSG__DETAIL__GPIO_RESULT__BUILDER_HPP_
#define GPIO_INTERFACES__MSG__DETAIL__GPIO_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gpio_interfaces/msg/detail/gpio_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gpio_interfaces
{

namespace msg
{

namespace builder
{

class Init_GPIOResult_temp
{
public:
  Init_GPIOResult_temp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gpio_interfaces::msg::GPIOResult temp(::gpio_interfaces::msg::GPIOResult::_temp_type arg)
  {
    msg_.temp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gpio_interfaces::msg::GPIOResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gpio_interfaces::msg::GPIOResult>()
{
  return gpio_interfaces::msg::builder::Init_GPIOResult_temp();
}

}  // namespace gpio_interfaces

#endif  // GPIO_INTERFACES__MSG__DETAIL__GPIO_RESULT__BUILDER_HPP_
