// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from boat_data_interfaces:msg/GPIOData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "boat_data_interfaces/msg/gpio_data.hpp"


#ifndef BOAT_DATA_INTERFACES__MSG__DETAIL__GPIO_DATA__STRUCT_HPP_
#define BOAT_DATA_INTERFACES__MSG__DETAIL__GPIO_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__boat_data_interfaces__msg__GPIOData __attribute__((deprecated))
#else
# define DEPRECATED__boat_data_interfaces__msg__GPIOData __declspec(deprecated)
#endif

namespace boat_data_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GPIOData_
{
  using Type = GPIOData_<ContainerAllocator>;

  explicit GPIOData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->coolant_temp = 0.0f;
      this->throttle = 0;
    }
  }

  explicit GPIOData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->coolant_temp = 0.0f;
      this->throttle = 0;
    }
  }

  // field types and members
  using _coolant_temp_type =
    float;
  _coolant_temp_type coolant_temp;
  using _throttle_type =
    uint8_t;
  _throttle_type throttle;

  // setters for named parameter idiom
  Type & set__coolant_temp(
    const float & _arg)
  {
    this->coolant_temp = _arg;
    return *this;
  }
  Type & set__throttle(
    const uint8_t & _arg)
  {
    this->throttle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    boat_data_interfaces::msg::GPIOData_<ContainerAllocator> *;
  using ConstRawPtr =
    const boat_data_interfaces::msg::GPIOData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<boat_data_interfaces::msg::GPIOData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<boat_data_interfaces::msg::GPIOData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      boat_data_interfaces::msg::GPIOData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<boat_data_interfaces::msg::GPIOData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      boat_data_interfaces::msg::GPIOData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<boat_data_interfaces::msg::GPIOData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<boat_data_interfaces::msg::GPIOData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<boat_data_interfaces::msg::GPIOData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__boat_data_interfaces__msg__GPIOData
    std::shared_ptr<boat_data_interfaces::msg::GPIOData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__boat_data_interfaces__msg__GPIOData
    std::shared_ptr<boat_data_interfaces::msg::GPIOData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GPIOData_ & other) const
  {
    if (this->coolant_temp != other.coolant_temp) {
      return false;
    }
    if (this->throttle != other.throttle) {
      return false;
    }
    return true;
  }
  bool operator!=(const GPIOData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GPIOData_

// alias to use template instance with default allocator
using GPIOData =
  boat_data_interfaces::msg::GPIOData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace boat_data_interfaces

#endif  // BOAT_DATA_INTERFACES__MSG__DETAIL__GPIO_DATA__STRUCT_HPP_
