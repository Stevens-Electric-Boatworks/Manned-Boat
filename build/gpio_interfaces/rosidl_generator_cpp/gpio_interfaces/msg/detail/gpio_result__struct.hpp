// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gpio_interfaces:msg/GPIOResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "gpio_interfaces/msg/gpio_result.hpp"


#ifndef GPIO_INTERFACES__MSG__DETAIL__GPIO_RESULT__STRUCT_HPP_
#define GPIO_INTERFACES__MSG__DETAIL__GPIO_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__gpio_interfaces__msg__GPIOResult __attribute__((deprecated))
#else
# define DEPRECATED__gpio_interfaces__msg__GPIOResult __declspec(deprecated)
#endif

namespace gpio_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GPIOResult_
{
  using Type = GPIOResult_<ContainerAllocator>;

  explicit GPIOResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temp = 0ll;
      this->imu_x = 0.0f;
      this->imu_y = 0.0f;
      this->imu_z = 0.0f;
      this->gps_lat = 0.0f;
      this->gps_lon = 0.0f;
      this->gps_alt = 0.0f;
    }
  }

  explicit GPIOResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temp = 0ll;
      this->imu_x = 0.0f;
      this->imu_y = 0.0f;
      this->imu_z = 0.0f;
      this->gps_lat = 0.0f;
      this->gps_lon = 0.0f;
      this->gps_alt = 0.0f;
    }
  }

  // field types and members
  using _temp_type =
    int64_t;
  _temp_type temp;
  using _imu_x_type =
    float;
  _imu_x_type imu_x;
  using _imu_y_type =
    float;
  _imu_y_type imu_y;
  using _imu_z_type =
    float;
  _imu_z_type imu_z;
  using _gps_lat_type =
    float;
  _gps_lat_type gps_lat;
  using _gps_lon_type =
    float;
  _gps_lon_type gps_lon;
  using _gps_alt_type =
    float;
  _gps_alt_type gps_alt;

  // setters for named parameter idiom
  Type & set__temp(
    const int64_t & _arg)
  {
    this->temp = _arg;
    return *this;
  }
  Type & set__imu_x(
    const float & _arg)
  {
    this->imu_x = _arg;
    return *this;
  }
  Type & set__imu_y(
    const float & _arg)
  {
    this->imu_y = _arg;
    return *this;
  }
  Type & set__imu_z(
    const float & _arg)
  {
    this->imu_z = _arg;
    return *this;
  }
  Type & set__gps_lat(
    const float & _arg)
  {
    this->gps_lat = _arg;
    return *this;
  }
  Type & set__gps_lon(
    const float & _arg)
  {
    this->gps_lon = _arg;
    return *this;
  }
  Type & set__gps_alt(
    const float & _arg)
  {
    this->gps_alt = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gpio_interfaces::msg::GPIOResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const gpio_interfaces::msg::GPIOResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gpio_interfaces::msg::GPIOResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gpio_interfaces::msg::GPIOResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gpio_interfaces::msg::GPIOResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gpio_interfaces::msg::GPIOResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gpio_interfaces::msg::GPIOResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gpio_interfaces::msg::GPIOResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gpio_interfaces::msg::GPIOResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gpio_interfaces::msg::GPIOResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gpio_interfaces__msg__GPIOResult
    std::shared_ptr<gpio_interfaces::msg::GPIOResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gpio_interfaces__msg__GPIOResult
    std::shared_ptr<gpio_interfaces::msg::GPIOResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GPIOResult_ & other) const
  {
    if (this->temp != other.temp) {
      return false;
    }
    if (this->imu_x != other.imu_x) {
      return false;
    }
    if (this->imu_y != other.imu_y) {
      return false;
    }
    if (this->imu_z != other.imu_z) {
      return false;
    }
    if (this->gps_lat != other.gps_lat) {
      return false;
    }
    if (this->gps_lon != other.gps_lon) {
      return false;
    }
    if (this->gps_alt != other.gps_alt) {
      return false;
    }
    return true;
  }
  bool operator!=(const GPIOResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GPIOResult_

// alias to use template instance with default allocator
using GPIOResult =
  gpio_interfaces::msg::GPIOResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gpio_interfaces

#endif  // GPIO_INTERFACES__MSG__DETAIL__GPIO_RESULT__STRUCT_HPP_
