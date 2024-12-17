// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from godown_interface:action/Godownint.idl
// generated code does not contain a copyright notice

#ifndef GODOWN_INTERFACE__ACTION__DETAIL__GODOWNINT__FUNCTIONS_H_
#define GODOWN_INTERFACE__ACTION__DETAIL__GODOWNINT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "godown_interface/msg/rosidl_generator_c__visibility_control.h"

#include "godown_interface/action/detail/godownint__struct.h"

/// Initialize action/Godownint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * godown_interface__action__Godownint_Goal
 * )) before or use
 * godown_interface__action__Godownint_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_Goal__init(godown_interface__action__Godownint_Goal * msg);

/// Finalize action/Godownint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
void
godown_interface__action__Godownint_Goal__fini(godown_interface__action__Godownint_Goal * msg);

/// Create action/Godownint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * godown_interface__action__Godownint_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
godown_interface__action__Godownint_Goal *
godown_interface__action__Godownint_Goal__create();

/// Destroy action/Godownint message.
/**
 * It calls
 * godown_interface__action__Godownint_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
void
godown_interface__action__Godownint_Goal__destroy(godown_interface__action__Godownint_Goal * msg);

/// Check for action/Godownint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_Goal__are_equal(const godown_interface__action__Godownint_Goal * lhs, const godown_interface__action__Godownint_Goal * rhs);

/// Copy a action/Godownint message.
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
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_Goal__copy(
  const godown_interface__action__Godownint_Goal * input,
  godown_interface__action__Godownint_Goal * output);

/// Initialize array of action/Godownint messages.
/**
 * It allocates the memory for the number of elements and calls
 * godown_interface__action__Godownint_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_Goal__Sequence__init(godown_interface__action__Godownint_Goal__Sequence * array, size_t size);

/// Finalize array of action/Godownint messages.
/**
 * It calls
 * godown_interface__action__Godownint_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
void
godown_interface__action__Godownint_Goal__Sequence__fini(godown_interface__action__Godownint_Goal__Sequence * array);

/// Create array of action/Godownint messages.
/**
 * It allocates the memory for the array and calls
 * godown_interface__action__Godownint_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
godown_interface__action__Godownint_Goal__Sequence *
godown_interface__action__Godownint_Goal__Sequence__create(size_t size);

/// Destroy array of action/Godownint messages.
/**
 * It calls
 * godown_interface__action__Godownint_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
void
godown_interface__action__Godownint_Goal__Sequence__destroy(godown_interface__action__Godownint_Goal__Sequence * array);

/// Check for action/Godownint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_Goal__Sequence__are_equal(const godown_interface__action__Godownint_Goal__Sequence * lhs, const godown_interface__action__Godownint_Goal__Sequence * rhs);

/// Copy an array of action/Godownint messages.
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
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_Goal__Sequence__copy(
  const godown_interface__action__Godownint_Goal__Sequence * input,
  godown_interface__action__Godownint_Goal__Sequence * output);

/// Initialize action/Godownint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * godown_interface__action__Godownint_Result
 * )) before or use
 * godown_interface__action__Godownint_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_Result__init(godown_interface__action__Godownint_Result * msg);

/// Finalize action/Godownint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
void
godown_interface__action__Godownint_Result__fini(godown_interface__action__Godownint_Result * msg);

/// Create action/Godownint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * godown_interface__action__Godownint_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
godown_interface__action__Godownint_Result *
godown_interface__action__Godownint_Result__create();

/// Destroy action/Godownint message.
/**
 * It calls
 * godown_interface__action__Godownint_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
void
godown_interface__action__Godownint_Result__destroy(godown_interface__action__Godownint_Result * msg);

/// Check for action/Godownint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_Result__are_equal(const godown_interface__action__Godownint_Result * lhs, const godown_interface__action__Godownint_Result * rhs);

/// Copy a action/Godownint message.
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
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_Result__copy(
  const godown_interface__action__Godownint_Result * input,
  godown_interface__action__Godownint_Result * output);

/// Initialize array of action/Godownint messages.
/**
 * It allocates the memory for the number of elements and calls
 * godown_interface__action__Godownint_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_Result__Sequence__init(godown_interface__action__Godownint_Result__Sequence * array, size_t size);

/// Finalize array of action/Godownint messages.
/**
 * It calls
 * godown_interface__action__Godownint_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
void
godown_interface__action__Godownint_Result__Sequence__fini(godown_interface__action__Godownint_Result__Sequence * array);

/// Create array of action/Godownint messages.
/**
 * It allocates the memory for the array and calls
 * godown_interface__action__Godownint_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
godown_interface__action__Godownint_Result__Sequence *
godown_interface__action__Godownint_Result__Sequence__create(size_t size);

/// Destroy array of action/Godownint messages.
/**
 * It calls
 * godown_interface__action__Godownint_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
void
godown_interface__action__Godownint_Result__Sequence__destroy(godown_interface__action__Godownint_Result__Sequence * array);

/// Check for action/Godownint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_Result__Sequence__are_equal(const godown_interface__action__Godownint_Result__Sequence * lhs, const godown_interface__action__Godownint_Result__Sequence * rhs);

/// Copy an array of action/Godownint messages.
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
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_Result__Sequence__copy(
  const godown_interface__action__Godownint_Result__Sequence * input,
  godown_interface__action__Godownint_Result__Sequence * output);

/// Initialize action/Godownint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * godown_interface__action__Godownint_Feedback
 * )) before or use
 * godown_interface__action__Godownint_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_Feedback__init(godown_interface__action__Godownint_Feedback * msg);

/// Finalize action/Godownint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
void
godown_interface__action__Godownint_Feedback__fini(godown_interface__action__Godownint_Feedback * msg);

/// Create action/Godownint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * godown_interface__action__Godownint_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
godown_interface__action__Godownint_Feedback *
godown_interface__action__Godownint_Feedback__create();

/// Destroy action/Godownint message.
/**
 * It calls
 * godown_interface__action__Godownint_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
void
godown_interface__action__Godownint_Feedback__destroy(godown_interface__action__Godownint_Feedback * msg);

/// Check for action/Godownint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_Feedback__are_equal(const godown_interface__action__Godownint_Feedback * lhs, const godown_interface__action__Godownint_Feedback * rhs);

/// Copy a action/Godownint message.
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
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_Feedback__copy(
  const godown_interface__action__Godownint_Feedback * input,
  godown_interface__action__Godownint_Feedback * output);

/// Initialize array of action/Godownint messages.
/**
 * It allocates the memory for the number of elements and calls
 * godown_interface__action__Godownint_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_Feedback__Sequence__init(godown_interface__action__Godownint_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Godownint messages.
/**
 * It calls
 * godown_interface__action__Godownint_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
void
godown_interface__action__Godownint_Feedback__Sequence__fini(godown_interface__action__Godownint_Feedback__Sequence * array);

/// Create array of action/Godownint messages.
/**
 * It allocates the memory for the array and calls
 * godown_interface__action__Godownint_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
godown_interface__action__Godownint_Feedback__Sequence *
godown_interface__action__Godownint_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Godownint messages.
/**
 * It calls
 * godown_interface__action__Godownint_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
void
godown_interface__action__Godownint_Feedback__Sequence__destroy(godown_interface__action__Godownint_Feedback__Sequence * array);

/// Check for action/Godownint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_Feedback__Sequence__are_equal(const godown_interface__action__Godownint_Feedback__Sequence * lhs, const godown_interface__action__Godownint_Feedback__Sequence * rhs);

/// Copy an array of action/Godownint messages.
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
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_Feedback__Sequence__copy(
  const godown_interface__action__Godownint_Feedback__Sequence * input,
  godown_interface__action__Godownint_Feedback__Sequence * output);

/// Initialize action/Godownint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * godown_interface__action__Godownint_SendGoal_Request
 * )) before or use
 * godown_interface__action__Godownint_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_SendGoal_Request__init(godown_interface__action__Godownint_SendGoal_Request * msg);

/// Finalize action/Godownint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
void
godown_interface__action__Godownint_SendGoal_Request__fini(godown_interface__action__Godownint_SendGoal_Request * msg);

/// Create action/Godownint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * godown_interface__action__Godownint_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
godown_interface__action__Godownint_SendGoal_Request *
godown_interface__action__Godownint_SendGoal_Request__create();

/// Destroy action/Godownint message.
/**
 * It calls
 * godown_interface__action__Godownint_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
void
godown_interface__action__Godownint_SendGoal_Request__destroy(godown_interface__action__Godownint_SendGoal_Request * msg);

/// Check for action/Godownint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_SendGoal_Request__are_equal(const godown_interface__action__Godownint_SendGoal_Request * lhs, const godown_interface__action__Godownint_SendGoal_Request * rhs);

/// Copy a action/Godownint message.
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
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_SendGoal_Request__copy(
  const godown_interface__action__Godownint_SendGoal_Request * input,
  godown_interface__action__Godownint_SendGoal_Request * output);

/// Initialize array of action/Godownint messages.
/**
 * It allocates the memory for the number of elements and calls
 * godown_interface__action__Godownint_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_SendGoal_Request__Sequence__init(godown_interface__action__Godownint_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Godownint messages.
/**
 * It calls
 * godown_interface__action__Godownint_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
void
godown_interface__action__Godownint_SendGoal_Request__Sequence__fini(godown_interface__action__Godownint_SendGoal_Request__Sequence * array);

/// Create array of action/Godownint messages.
/**
 * It allocates the memory for the array and calls
 * godown_interface__action__Godownint_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
godown_interface__action__Godownint_SendGoal_Request__Sequence *
godown_interface__action__Godownint_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Godownint messages.
/**
 * It calls
 * godown_interface__action__Godownint_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
void
godown_interface__action__Godownint_SendGoal_Request__Sequence__destroy(godown_interface__action__Godownint_SendGoal_Request__Sequence * array);

/// Check for action/Godownint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_SendGoal_Request__Sequence__are_equal(const godown_interface__action__Godownint_SendGoal_Request__Sequence * lhs, const godown_interface__action__Godownint_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/Godownint messages.
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
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_SendGoal_Request__Sequence__copy(
  const godown_interface__action__Godownint_SendGoal_Request__Sequence * input,
  godown_interface__action__Godownint_SendGoal_Request__Sequence * output);

/// Initialize action/Godownint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * godown_interface__action__Godownint_SendGoal_Response
 * )) before or use
 * godown_interface__action__Godownint_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_SendGoal_Response__init(godown_interface__action__Godownint_SendGoal_Response * msg);

/// Finalize action/Godownint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
void
godown_interface__action__Godownint_SendGoal_Response__fini(godown_interface__action__Godownint_SendGoal_Response * msg);

/// Create action/Godownint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * godown_interface__action__Godownint_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
godown_interface__action__Godownint_SendGoal_Response *
godown_interface__action__Godownint_SendGoal_Response__create();

/// Destroy action/Godownint message.
/**
 * It calls
 * godown_interface__action__Godownint_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
void
godown_interface__action__Godownint_SendGoal_Response__destroy(godown_interface__action__Godownint_SendGoal_Response * msg);

/// Check for action/Godownint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_SendGoal_Response__are_equal(const godown_interface__action__Godownint_SendGoal_Response * lhs, const godown_interface__action__Godownint_SendGoal_Response * rhs);

/// Copy a action/Godownint message.
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
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_SendGoal_Response__copy(
  const godown_interface__action__Godownint_SendGoal_Response * input,
  godown_interface__action__Godownint_SendGoal_Response * output);

/// Initialize array of action/Godownint messages.
/**
 * It allocates the memory for the number of elements and calls
 * godown_interface__action__Godownint_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_SendGoal_Response__Sequence__init(godown_interface__action__Godownint_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Godownint messages.
/**
 * It calls
 * godown_interface__action__Godownint_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
void
godown_interface__action__Godownint_SendGoal_Response__Sequence__fini(godown_interface__action__Godownint_SendGoal_Response__Sequence * array);

/// Create array of action/Godownint messages.
/**
 * It allocates the memory for the array and calls
 * godown_interface__action__Godownint_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
godown_interface__action__Godownint_SendGoal_Response__Sequence *
godown_interface__action__Godownint_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Godownint messages.
/**
 * It calls
 * godown_interface__action__Godownint_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
void
godown_interface__action__Godownint_SendGoal_Response__Sequence__destroy(godown_interface__action__Godownint_SendGoal_Response__Sequence * array);

/// Check for action/Godownint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_SendGoal_Response__Sequence__are_equal(const godown_interface__action__Godownint_SendGoal_Response__Sequence * lhs, const godown_interface__action__Godownint_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/Godownint messages.
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
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_SendGoal_Response__Sequence__copy(
  const godown_interface__action__Godownint_SendGoal_Response__Sequence * input,
  godown_interface__action__Godownint_SendGoal_Response__Sequence * output);

/// Initialize action/Godownint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * godown_interface__action__Godownint_GetResult_Request
 * )) before or use
 * godown_interface__action__Godownint_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_GetResult_Request__init(godown_interface__action__Godownint_GetResult_Request * msg);

/// Finalize action/Godownint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
void
godown_interface__action__Godownint_GetResult_Request__fini(godown_interface__action__Godownint_GetResult_Request * msg);

/// Create action/Godownint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * godown_interface__action__Godownint_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
godown_interface__action__Godownint_GetResult_Request *
godown_interface__action__Godownint_GetResult_Request__create();

/// Destroy action/Godownint message.
/**
 * It calls
 * godown_interface__action__Godownint_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
void
godown_interface__action__Godownint_GetResult_Request__destroy(godown_interface__action__Godownint_GetResult_Request * msg);

/// Check for action/Godownint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_GetResult_Request__are_equal(const godown_interface__action__Godownint_GetResult_Request * lhs, const godown_interface__action__Godownint_GetResult_Request * rhs);

/// Copy a action/Godownint message.
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
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_GetResult_Request__copy(
  const godown_interface__action__Godownint_GetResult_Request * input,
  godown_interface__action__Godownint_GetResult_Request * output);

/// Initialize array of action/Godownint messages.
/**
 * It allocates the memory for the number of elements and calls
 * godown_interface__action__Godownint_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_GetResult_Request__Sequence__init(godown_interface__action__Godownint_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Godownint messages.
/**
 * It calls
 * godown_interface__action__Godownint_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
void
godown_interface__action__Godownint_GetResult_Request__Sequence__fini(godown_interface__action__Godownint_GetResult_Request__Sequence * array);

/// Create array of action/Godownint messages.
/**
 * It allocates the memory for the array and calls
 * godown_interface__action__Godownint_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
godown_interface__action__Godownint_GetResult_Request__Sequence *
godown_interface__action__Godownint_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Godownint messages.
/**
 * It calls
 * godown_interface__action__Godownint_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
void
godown_interface__action__Godownint_GetResult_Request__Sequence__destroy(godown_interface__action__Godownint_GetResult_Request__Sequence * array);

/// Check for action/Godownint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_GetResult_Request__Sequence__are_equal(const godown_interface__action__Godownint_GetResult_Request__Sequence * lhs, const godown_interface__action__Godownint_GetResult_Request__Sequence * rhs);

/// Copy an array of action/Godownint messages.
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
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_GetResult_Request__Sequence__copy(
  const godown_interface__action__Godownint_GetResult_Request__Sequence * input,
  godown_interface__action__Godownint_GetResult_Request__Sequence * output);

/// Initialize action/Godownint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * godown_interface__action__Godownint_GetResult_Response
 * )) before or use
 * godown_interface__action__Godownint_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_GetResult_Response__init(godown_interface__action__Godownint_GetResult_Response * msg);

/// Finalize action/Godownint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
void
godown_interface__action__Godownint_GetResult_Response__fini(godown_interface__action__Godownint_GetResult_Response * msg);

/// Create action/Godownint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * godown_interface__action__Godownint_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
godown_interface__action__Godownint_GetResult_Response *
godown_interface__action__Godownint_GetResult_Response__create();

/// Destroy action/Godownint message.
/**
 * It calls
 * godown_interface__action__Godownint_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
void
godown_interface__action__Godownint_GetResult_Response__destroy(godown_interface__action__Godownint_GetResult_Response * msg);

/// Check for action/Godownint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_GetResult_Response__are_equal(const godown_interface__action__Godownint_GetResult_Response * lhs, const godown_interface__action__Godownint_GetResult_Response * rhs);

/// Copy a action/Godownint message.
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
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_GetResult_Response__copy(
  const godown_interface__action__Godownint_GetResult_Response * input,
  godown_interface__action__Godownint_GetResult_Response * output);

/// Initialize array of action/Godownint messages.
/**
 * It allocates the memory for the number of elements and calls
 * godown_interface__action__Godownint_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_GetResult_Response__Sequence__init(godown_interface__action__Godownint_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Godownint messages.
/**
 * It calls
 * godown_interface__action__Godownint_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
void
godown_interface__action__Godownint_GetResult_Response__Sequence__fini(godown_interface__action__Godownint_GetResult_Response__Sequence * array);

/// Create array of action/Godownint messages.
/**
 * It allocates the memory for the array and calls
 * godown_interface__action__Godownint_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
godown_interface__action__Godownint_GetResult_Response__Sequence *
godown_interface__action__Godownint_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Godownint messages.
/**
 * It calls
 * godown_interface__action__Godownint_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
void
godown_interface__action__Godownint_GetResult_Response__Sequence__destroy(godown_interface__action__Godownint_GetResult_Response__Sequence * array);

/// Check for action/Godownint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_GetResult_Response__Sequence__are_equal(const godown_interface__action__Godownint_GetResult_Response__Sequence * lhs, const godown_interface__action__Godownint_GetResult_Response__Sequence * rhs);

/// Copy an array of action/Godownint messages.
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
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_GetResult_Response__Sequence__copy(
  const godown_interface__action__Godownint_GetResult_Response__Sequence * input,
  godown_interface__action__Godownint_GetResult_Response__Sequence * output);

/// Initialize action/Godownint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * godown_interface__action__Godownint_FeedbackMessage
 * )) before or use
 * godown_interface__action__Godownint_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_FeedbackMessage__init(godown_interface__action__Godownint_FeedbackMessage * msg);

/// Finalize action/Godownint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
void
godown_interface__action__Godownint_FeedbackMessage__fini(godown_interface__action__Godownint_FeedbackMessage * msg);

/// Create action/Godownint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * godown_interface__action__Godownint_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
godown_interface__action__Godownint_FeedbackMessage *
godown_interface__action__Godownint_FeedbackMessage__create();

/// Destroy action/Godownint message.
/**
 * It calls
 * godown_interface__action__Godownint_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
void
godown_interface__action__Godownint_FeedbackMessage__destroy(godown_interface__action__Godownint_FeedbackMessage * msg);

/// Check for action/Godownint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_FeedbackMessage__are_equal(const godown_interface__action__Godownint_FeedbackMessage * lhs, const godown_interface__action__Godownint_FeedbackMessage * rhs);

/// Copy a action/Godownint message.
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
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_FeedbackMessage__copy(
  const godown_interface__action__Godownint_FeedbackMessage * input,
  godown_interface__action__Godownint_FeedbackMessage * output);

/// Initialize array of action/Godownint messages.
/**
 * It allocates the memory for the number of elements and calls
 * godown_interface__action__Godownint_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_FeedbackMessage__Sequence__init(godown_interface__action__Godownint_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Godownint messages.
/**
 * It calls
 * godown_interface__action__Godownint_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
void
godown_interface__action__Godownint_FeedbackMessage__Sequence__fini(godown_interface__action__Godownint_FeedbackMessage__Sequence * array);

/// Create array of action/Godownint messages.
/**
 * It allocates the memory for the array and calls
 * godown_interface__action__Godownint_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
godown_interface__action__Godownint_FeedbackMessage__Sequence *
godown_interface__action__Godownint_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Godownint messages.
/**
 * It calls
 * godown_interface__action__Godownint_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
void
godown_interface__action__Godownint_FeedbackMessage__Sequence__destroy(godown_interface__action__Godownint_FeedbackMessage__Sequence * array);

/// Check for action/Godownint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_FeedbackMessage__Sequence__are_equal(const godown_interface__action__Godownint_FeedbackMessage__Sequence * lhs, const godown_interface__action__Godownint_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/Godownint messages.
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
ROSIDL_GENERATOR_C_PUBLIC_godown_interface
bool
godown_interface__action__Godownint_FeedbackMessage__Sequence__copy(
  const godown_interface__action__Godownint_FeedbackMessage__Sequence * input,
  godown_interface__action__Godownint_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // GODOWN_INTERFACE__ACTION__DETAIL__GODOWNINT__FUNCTIONS_H_
