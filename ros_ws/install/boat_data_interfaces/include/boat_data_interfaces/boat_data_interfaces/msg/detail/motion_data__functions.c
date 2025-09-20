// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from boat_data_interfaces:msg/MotionData.idl
// generated code does not contain a copyright notice
#include "boat_data_interfaces/msg/detail/motion_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
boat_data_interfaces__msg__MotionData__init(boat_data_interfaces__msg__MotionData * msg)
{
  if (!msg) {
    return false;
  }
  // heading
  // speed
  // gps_lat
  // gps_long
  // gps_alt
  // imu_x
  // imu_y
  // imu_z
  return true;
}

void
boat_data_interfaces__msg__MotionData__fini(boat_data_interfaces__msg__MotionData * msg)
{
  if (!msg) {
    return;
  }
  // heading
  // speed
  // gps_lat
  // gps_long
  // gps_alt
  // imu_x
  // imu_y
  // imu_z
}

bool
boat_data_interfaces__msg__MotionData__are_equal(const boat_data_interfaces__msg__MotionData * lhs, const boat_data_interfaces__msg__MotionData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // gps_lat
  if (lhs->gps_lat != rhs->gps_lat) {
    return false;
  }
  // gps_long
  if (lhs->gps_long != rhs->gps_long) {
    return false;
  }
  // gps_alt
  if (lhs->gps_alt != rhs->gps_alt) {
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
  return true;
}

bool
boat_data_interfaces__msg__MotionData__copy(
  const boat_data_interfaces__msg__MotionData * input,
  boat_data_interfaces__msg__MotionData * output)
{
  if (!input || !output) {
    return false;
  }
  // heading
  output->heading = input->heading;
  // speed
  output->speed = input->speed;
  // gps_lat
  output->gps_lat = input->gps_lat;
  // gps_long
  output->gps_long = input->gps_long;
  // gps_alt
  output->gps_alt = input->gps_alt;
  // imu_x
  output->imu_x = input->imu_x;
  // imu_y
  output->imu_y = input->imu_y;
  // imu_z
  output->imu_z = input->imu_z;
  return true;
}

boat_data_interfaces__msg__MotionData *
boat_data_interfaces__msg__MotionData__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boat_data_interfaces__msg__MotionData * msg = (boat_data_interfaces__msg__MotionData *)allocator.allocate(sizeof(boat_data_interfaces__msg__MotionData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(boat_data_interfaces__msg__MotionData));
  bool success = boat_data_interfaces__msg__MotionData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
boat_data_interfaces__msg__MotionData__destroy(boat_data_interfaces__msg__MotionData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    boat_data_interfaces__msg__MotionData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
boat_data_interfaces__msg__MotionData__Sequence__init(boat_data_interfaces__msg__MotionData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boat_data_interfaces__msg__MotionData * data = NULL;

  if (size) {
    data = (boat_data_interfaces__msg__MotionData *)allocator.zero_allocate(size, sizeof(boat_data_interfaces__msg__MotionData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = boat_data_interfaces__msg__MotionData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        boat_data_interfaces__msg__MotionData__fini(&data[i - 1]);
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
boat_data_interfaces__msg__MotionData__Sequence__fini(boat_data_interfaces__msg__MotionData__Sequence * array)
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
      boat_data_interfaces__msg__MotionData__fini(&array->data[i]);
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

boat_data_interfaces__msg__MotionData__Sequence *
boat_data_interfaces__msg__MotionData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boat_data_interfaces__msg__MotionData__Sequence * array = (boat_data_interfaces__msg__MotionData__Sequence *)allocator.allocate(sizeof(boat_data_interfaces__msg__MotionData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = boat_data_interfaces__msg__MotionData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
boat_data_interfaces__msg__MotionData__Sequence__destroy(boat_data_interfaces__msg__MotionData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    boat_data_interfaces__msg__MotionData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
boat_data_interfaces__msg__MotionData__Sequence__are_equal(const boat_data_interfaces__msg__MotionData__Sequence * lhs, const boat_data_interfaces__msg__MotionData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!boat_data_interfaces__msg__MotionData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
boat_data_interfaces__msg__MotionData__Sequence__copy(
  const boat_data_interfaces__msg__MotionData__Sequence * input,
  boat_data_interfaces__msg__MotionData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(boat_data_interfaces__msg__MotionData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    boat_data_interfaces__msg__MotionData * data =
      (boat_data_interfaces__msg__MotionData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!boat_data_interfaces__msg__MotionData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          boat_data_interfaces__msg__MotionData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!boat_data_interfaces__msg__MotionData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
