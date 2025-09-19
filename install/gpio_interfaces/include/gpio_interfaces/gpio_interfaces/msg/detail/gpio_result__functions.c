// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gpio_interfaces:msg/GPIOResult.idl
// generated code does not contain a copyright notice
#include "gpio_interfaces/msg/detail/gpio_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
gpio_interfaces__msg__GPIOResult__init(gpio_interfaces__msg__GPIOResult * msg)
{
  if (!msg) {
    return false;
  }
  // temp
  // imu_x
  // imu_y
  // imu_z
  // gps_lat
  // gps_lon
  // gps_alt
  return true;
}

void
gpio_interfaces__msg__GPIOResult__fini(gpio_interfaces__msg__GPIOResult * msg)
{
  if (!msg) {
    return;
  }
  // temp
  // imu_x
  // imu_y
  // imu_z
  // gps_lat
  // gps_lon
  // gps_alt
}

bool
gpio_interfaces__msg__GPIOResult__are_equal(const gpio_interfaces__msg__GPIOResult * lhs, const gpio_interfaces__msg__GPIOResult * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // temp
  if (lhs->temp != rhs->temp) {
    return false;
  }
  // imu_x
  if (lhs->imu_x != rhs->imu_x) {
    return false;
  }
  // imu_y
  if (lhs->imu_y != rhs->imu_y) {
    return false;
  }
  // imu_z
  if (lhs->imu_z != rhs->imu_z) {
    return false;
  }
  // gps_lat
  if (lhs->gps_lat != rhs->gps_lat) {
    return false;
  }
  // gps_lon
  if (lhs->gps_lon != rhs->gps_lon) {
    return false;
  }
  // gps_alt
  if (lhs->gps_alt != rhs->gps_alt) {
    return false;
  }
  return true;
}

bool
gpio_interfaces__msg__GPIOResult__copy(
  const gpio_interfaces__msg__GPIOResult * input,
  gpio_interfaces__msg__GPIOResult * output)
{
  if (!input || !output) {
    return false;
  }
  // temp
  output->temp = input->temp;
  // imu_x
  output->imu_x = input->imu_x;
  // imu_y
  output->imu_y = input->imu_y;
  // imu_z
  output->imu_z = input->imu_z;
  // gps_lat
  output->gps_lat = input->gps_lat;
  // gps_lon
  output->gps_lon = input->gps_lon;
  // gps_alt
  output->gps_alt = input->gps_alt;
  return true;
}

gpio_interfaces__msg__GPIOResult *
gpio_interfaces__msg__GPIOResult__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpio_interfaces__msg__GPIOResult * msg = (gpio_interfaces__msg__GPIOResult *)allocator.allocate(sizeof(gpio_interfaces__msg__GPIOResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gpio_interfaces__msg__GPIOResult));
  bool success = gpio_interfaces__msg__GPIOResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gpio_interfaces__msg__GPIOResult__destroy(gpio_interfaces__msg__GPIOResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gpio_interfaces__msg__GPIOResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gpio_interfaces__msg__GPIOResult__Sequence__init(gpio_interfaces__msg__GPIOResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpio_interfaces__msg__GPIOResult * data = NULL;

  if (size) {
    data = (gpio_interfaces__msg__GPIOResult *)allocator.zero_allocate(size, sizeof(gpio_interfaces__msg__GPIOResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gpio_interfaces__msg__GPIOResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gpio_interfaces__msg__GPIOResult__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
gpio_interfaces__msg__GPIOResult__Sequence__fini(gpio_interfaces__msg__GPIOResult__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gpio_interfaces__msg__GPIOResult__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

gpio_interfaces__msg__GPIOResult__Sequence *
gpio_interfaces__msg__GPIOResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpio_interfaces__msg__GPIOResult__Sequence * array = (gpio_interfaces__msg__GPIOResult__Sequence *)allocator.allocate(sizeof(gpio_interfaces__msg__GPIOResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gpio_interfaces__msg__GPIOResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gpio_interfaces__msg__GPIOResult__Sequence__destroy(gpio_interfaces__msg__GPIOResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gpio_interfaces__msg__GPIOResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gpio_interfaces__msg__GPIOResult__Sequence__are_equal(const gpio_interfaces__msg__GPIOResult__Sequence * lhs, const gpio_interfaces__msg__GPIOResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gpio_interfaces__msg__GPIOResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gpio_interfaces__msg__GPIOResult__Sequence__copy(
  const gpio_interfaces__msg__GPIOResult__Sequence * input,
  gpio_interfaces__msg__GPIOResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gpio_interfaces__msg__GPIOResult);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gpio_interfaces__msg__GPIOResult * data =
      (gpio_interfaces__msg__GPIOResult *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gpio_interfaces__msg__GPIOResult__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gpio_interfaces__msg__GPIOResult__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gpio_interfaces__msg__GPIOResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
