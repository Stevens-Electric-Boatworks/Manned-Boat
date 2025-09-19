// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from gpio_interfaces:msg/GPIOResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "gpio_interfaces/msg/gpio_result.h"


#ifndef GPIO_INTERFACES__MSG__DETAIL__GPIO_RESULT__FUNCTIONS_H_
#define GPIO_INTERFACES__MSG__DETAIL__GPIO_RESULT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "gpio_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "gpio_interfaces/msg/detail/gpio_result__struct.h"

/// Initialize msg/GPIOResult message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gpio_interfaces__msg__GPIOResult
 * )) before or use
 * gpio_interfaces__msg__GPIOResult__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gpio_interfaces
bool
gpio_interfaces__msg__GPIOResult__init(gpio_interfaces__msg__GPIOResult * msg);

/// Finalize msg/GPIOResult message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpio_interfaces
void
gpio_interfaces__msg__GPIOResult__fini(gpio_interfaces__msg__GPIOResult * msg);

/// Create msg/GPIOResult message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gpio_interfaces__msg__GPIOResult__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gpio_interfaces
gpio_interfaces__msg__GPIOResult *
gpio_interfaces__msg__GPIOResult__create(void);

/// Destroy msg/GPIOResult message.
/**
 * It calls
 * gpio_interfaces__msg__GPIOResult__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpio_interfaces
void
gpio_interfaces__msg__GPIOResult__destroy(gpio_interfaces__msg__GPIOResult * msg);

/// Check for msg/GPIOResult message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpio_interfaces
bool
gpio_interfaces__msg__GPIOResult__are_equal(const gpio_interfaces__msg__GPIOResult * lhs, const gpio_interfaces__msg__GPIOResult * rhs);

/// Copy a msg/GPIOResult message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpio_interfaces
bool
gpio_interfaces__msg__GPIOResult__copy(
  const gpio_interfaces__msg__GPIOResult * input,
  gpio_interfaces__msg__GPIOResult * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_gpio_interfaces
const rosidl_type_hash_t *
gpio_interfaces__msg__GPIOResult__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_gpio_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
gpio_interfaces__msg__GPIOResult__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_gpio_interfaces
const rosidl_runtime_c__type_description__TypeSource *
gpio_interfaces__msg__GPIOResult__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_gpio_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
gpio_interfaces__msg__GPIOResult__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/GPIOResult messages.
/**
 * It allocates the memory for the number of elements and calls
 * gpio_interfaces__msg__GPIOResult__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpio_interfaces
bool
gpio_interfaces__msg__GPIOResult__Sequence__init(gpio_interfaces__msg__GPIOResult__Sequence * array, size_t size);

/// Finalize array of msg/GPIOResult messages.
/**
 * It calls
 * gpio_interfaces__msg__GPIOResult__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpio_interfaces
void
gpio_interfaces__msg__GPIOResult__Sequence__fini(gpio_interfaces__msg__GPIOResult__Sequence * array);

/// Create array of msg/GPIOResult messages.
/**
 * It allocates the memory for the array and calls
 * gpio_interfaces__msg__GPIOResult__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gpio_interfaces
gpio_interfaces__msg__GPIOResult__Sequence *
gpio_interfaces__msg__GPIOResult__Sequence__create(size_t size);

/// Destroy array of msg/GPIOResult messages.
/**
 * It calls
 * gpio_interfaces__msg__GPIOResult__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpio_interfaces
void
gpio_interfaces__msg__GPIOResult__Sequence__destroy(gpio_interfaces__msg__GPIOResult__Sequence * array);

/// Check for msg/GPIOResult message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpio_interfaces
bool
gpio_interfaces__msg__GPIOResult__Sequence__are_equal(const gpio_interfaces__msg__GPIOResult__Sequence * lhs, const gpio_interfaces__msg__GPIOResult__Sequence * rhs);

/// Copy an array of msg/GPIOResult messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpio_interfaces
bool
gpio_interfaces__msg__GPIOResult__Sequence__copy(
  const gpio_interfaces__msg__GPIOResult__Sequence * input,
  gpio_interfaces__msg__GPIOResult__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // GPIO_INTERFACES__MSG__DETAIL__GPIO_RESULT__FUNCTIONS_H_
