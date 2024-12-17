// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from gototable_interface:action/GoTable.idl
// generated code does not contain a copyright notice

#ifndef GOTOTABLE_INTERFACE__ACTION__DETAIL__GO_TABLE__FUNCTIONS_H_
#define GOTOTABLE_INTERFACE__ACTION__DETAIL__GO_TABLE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "gototable_interface/msg/rosidl_generator_c__visibility_control.h"

#include "gototable_interface/action/detail/go_table__struct.h"

/// Initialize action/GoTable message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gototable_interface__action__GoTable_Goal
 * )) before or use
 * gototable_interface__action__GoTable_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_Goal__init(gototable_interface__action__GoTable_Goal * msg);

/// Finalize action/GoTable message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
void
gototable_interface__action__GoTable_Goal__fini(gototable_interface__action__GoTable_Goal * msg);

/// Create action/GoTable message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gototable_interface__action__GoTable_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
gototable_interface__action__GoTable_Goal *
gototable_interface__action__GoTable_Goal__create();

/// Destroy action/GoTable message.
/**
 * It calls
 * gototable_interface__action__GoTable_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
void
gototable_interface__action__GoTable_Goal__destroy(gototable_interface__action__GoTable_Goal * msg);

/// Check for action/GoTable message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_Goal__are_equal(const gototable_interface__action__GoTable_Goal * lhs, const gototable_interface__action__GoTable_Goal * rhs);

/// Copy a action/GoTable message.
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
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_Goal__copy(
  const gototable_interface__action__GoTable_Goal * input,
  gototable_interface__action__GoTable_Goal * output);

/// Initialize array of action/GoTable messages.
/**
 * It allocates the memory for the number of elements and calls
 * gototable_interface__action__GoTable_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_Goal__Sequence__init(gototable_interface__action__GoTable_Goal__Sequence * array, size_t size);

/// Finalize array of action/GoTable messages.
/**
 * It calls
 * gototable_interface__action__GoTable_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
void
gototable_interface__action__GoTable_Goal__Sequence__fini(gototable_interface__action__GoTable_Goal__Sequence * array);

/// Create array of action/GoTable messages.
/**
 * It allocates the memory for the array and calls
 * gototable_interface__action__GoTable_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
gototable_interface__action__GoTable_Goal__Sequence *
gototable_interface__action__GoTable_Goal__Sequence__create(size_t size);

/// Destroy array of action/GoTable messages.
/**
 * It calls
 * gototable_interface__action__GoTable_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
void
gototable_interface__action__GoTable_Goal__Sequence__destroy(gototable_interface__action__GoTable_Goal__Sequence * array);

/// Check for action/GoTable message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_Goal__Sequence__are_equal(const gototable_interface__action__GoTable_Goal__Sequence * lhs, const gototable_interface__action__GoTable_Goal__Sequence * rhs);

/// Copy an array of action/GoTable messages.
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
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_Goal__Sequence__copy(
  const gototable_interface__action__GoTable_Goal__Sequence * input,
  gototable_interface__action__GoTable_Goal__Sequence * output);

/// Initialize action/GoTable message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gototable_interface__action__GoTable_Result
 * )) before or use
 * gototable_interface__action__GoTable_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_Result__init(gototable_interface__action__GoTable_Result * msg);

/// Finalize action/GoTable message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
void
gototable_interface__action__GoTable_Result__fini(gototable_interface__action__GoTable_Result * msg);

/// Create action/GoTable message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gototable_interface__action__GoTable_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
gototable_interface__action__GoTable_Result *
gototable_interface__action__GoTable_Result__create();

/// Destroy action/GoTable message.
/**
 * It calls
 * gototable_interface__action__GoTable_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
void
gototable_interface__action__GoTable_Result__destroy(gototable_interface__action__GoTable_Result * msg);

/// Check for action/GoTable message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_Result__are_equal(const gototable_interface__action__GoTable_Result * lhs, const gototable_interface__action__GoTable_Result * rhs);

/// Copy a action/GoTable message.
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
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_Result__copy(
  const gototable_interface__action__GoTable_Result * input,
  gototable_interface__action__GoTable_Result * output);

/// Initialize array of action/GoTable messages.
/**
 * It allocates the memory for the number of elements and calls
 * gototable_interface__action__GoTable_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_Result__Sequence__init(gototable_interface__action__GoTable_Result__Sequence * array, size_t size);

/// Finalize array of action/GoTable messages.
/**
 * It calls
 * gototable_interface__action__GoTable_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
void
gototable_interface__action__GoTable_Result__Sequence__fini(gototable_interface__action__GoTable_Result__Sequence * array);

/// Create array of action/GoTable messages.
/**
 * It allocates the memory for the array and calls
 * gototable_interface__action__GoTable_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
gototable_interface__action__GoTable_Result__Sequence *
gototable_interface__action__GoTable_Result__Sequence__create(size_t size);

/// Destroy array of action/GoTable messages.
/**
 * It calls
 * gototable_interface__action__GoTable_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
void
gototable_interface__action__GoTable_Result__Sequence__destroy(gototable_interface__action__GoTable_Result__Sequence * array);

/// Check for action/GoTable message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_Result__Sequence__are_equal(const gototable_interface__action__GoTable_Result__Sequence * lhs, const gototable_interface__action__GoTable_Result__Sequence * rhs);

/// Copy an array of action/GoTable messages.
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
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_Result__Sequence__copy(
  const gototable_interface__action__GoTable_Result__Sequence * input,
  gototable_interface__action__GoTable_Result__Sequence * output);

/// Initialize action/GoTable message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gototable_interface__action__GoTable_Feedback
 * )) before or use
 * gototable_interface__action__GoTable_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_Feedback__init(gototable_interface__action__GoTable_Feedback * msg);

/// Finalize action/GoTable message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
void
gototable_interface__action__GoTable_Feedback__fini(gototable_interface__action__GoTable_Feedback * msg);

/// Create action/GoTable message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gototable_interface__action__GoTable_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
gototable_interface__action__GoTable_Feedback *
gototable_interface__action__GoTable_Feedback__create();

/// Destroy action/GoTable message.
/**
 * It calls
 * gototable_interface__action__GoTable_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
void
gototable_interface__action__GoTable_Feedback__destroy(gototable_interface__action__GoTable_Feedback * msg);

/// Check for action/GoTable message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_Feedback__are_equal(const gototable_interface__action__GoTable_Feedback * lhs, const gototable_interface__action__GoTable_Feedback * rhs);

/// Copy a action/GoTable message.
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
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_Feedback__copy(
  const gototable_interface__action__GoTable_Feedback * input,
  gototable_interface__action__GoTable_Feedback * output);

/// Initialize array of action/GoTable messages.
/**
 * It allocates the memory for the number of elements and calls
 * gototable_interface__action__GoTable_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_Feedback__Sequence__init(gototable_interface__action__GoTable_Feedback__Sequence * array, size_t size);

/// Finalize array of action/GoTable messages.
/**
 * It calls
 * gototable_interface__action__GoTable_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
void
gototable_interface__action__GoTable_Feedback__Sequence__fini(gototable_interface__action__GoTable_Feedback__Sequence * array);

/// Create array of action/GoTable messages.
/**
 * It allocates the memory for the array and calls
 * gototable_interface__action__GoTable_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
gototable_interface__action__GoTable_Feedback__Sequence *
gototable_interface__action__GoTable_Feedback__Sequence__create(size_t size);

/// Destroy array of action/GoTable messages.
/**
 * It calls
 * gototable_interface__action__GoTable_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
void
gototable_interface__action__GoTable_Feedback__Sequence__destroy(gototable_interface__action__GoTable_Feedback__Sequence * array);

/// Check for action/GoTable message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_Feedback__Sequence__are_equal(const gototable_interface__action__GoTable_Feedback__Sequence * lhs, const gototable_interface__action__GoTable_Feedback__Sequence * rhs);

/// Copy an array of action/GoTable messages.
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
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_Feedback__Sequence__copy(
  const gototable_interface__action__GoTable_Feedback__Sequence * input,
  gototable_interface__action__GoTable_Feedback__Sequence * output);

/// Initialize action/GoTable message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gototable_interface__action__GoTable_SendGoal_Request
 * )) before or use
 * gototable_interface__action__GoTable_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_SendGoal_Request__init(gototable_interface__action__GoTable_SendGoal_Request * msg);

/// Finalize action/GoTable message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
void
gototable_interface__action__GoTable_SendGoal_Request__fini(gototable_interface__action__GoTable_SendGoal_Request * msg);

/// Create action/GoTable message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gototable_interface__action__GoTable_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
gototable_interface__action__GoTable_SendGoal_Request *
gototable_interface__action__GoTable_SendGoal_Request__create();

/// Destroy action/GoTable message.
/**
 * It calls
 * gototable_interface__action__GoTable_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
void
gototable_interface__action__GoTable_SendGoal_Request__destroy(gototable_interface__action__GoTable_SendGoal_Request * msg);

/// Check for action/GoTable message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_SendGoal_Request__are_equal(const gototable_interface__action__GoTable_SendGoal_Request * lhs, const gototable_interface__action__GoTable_SendGoal_Request * rhs);

/// Copy a action/GoTable message.
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
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_SendGoal_Request__copy(
  const gototable_interface__action__GoTable_SendGoal_Request * input,
  gototable_interface__action__GoTable_SendGoal_Request * output);

/// Initialize array of action/GoTable messages.
/**
 * It allocates the memory for the number of elements and calls
 * gototable_interface__action__GoTable_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_SendGoal_Request__Sequence__init(gototable_interface__action__GoTable_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/GoTable messages.
/**
 * It calls
 * gototable_interface__action__GoTable_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
void
gototable_interface__action__GoTable_SendGoal_Request__Sequence__fini(gototable_interface__action__GoTable_SendGoal_Request__Sequence * array);

/// Create array of action/GoTable messages.
/**
 * It allocates the memory for the array and calls
 * gototable_interface__action__GoTable_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
gototable_interface__action__GoTable_SendGoal_Request__Sequence *
gototable_interface__action__GoTable_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/GoTable messages.
/**
 * It calls
 * gototable_interface__action__GoTable_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
void
gototable_interface__action__GoTable_SendGoal_Request__Sequence__destroy(gototable_interface__action__GoTable_SendGoal_Request__Sequence * array);

/// Check for action/GoTable message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_SendGoal_Request__Sequence__are_equal(const gototable_interface__action__GoTable_SendGoal_Request__Sequence * lhs, const gototable_interface__action__GoTable_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/GoTable messages.
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
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_SendGoal_Request__Sequence__copy(
  const gototable_interface__action__GoTable_SendGoal_Request__Sequence * input,
  gototable_interface__action__GoTable_SendGoal_Request__Sequence * output);

/// Initialize action/GoTable message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gototable_interface__action__GoTable_SendGoal_Response
 * )) before or use
 * gototable_interface__action__GoTable_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_SendGoal_Response__init(gototable_interface__action__GoTable_SendGoal_Response * msg);

/// Finalize action/GoTable message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
void
gototable_interface__action__GoTable_SendGoal_Response__fini(gototable_interface__action__GoTable_SendGoal_Response * msg);

/// Create action/GoTable message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gototable_interface__action__GoTable_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
gototable_interface__action__GoTable_SendGoal_Response *
gototable_interface__action__GoTable_SendGoal_Response__create();

/// Destroy action/GoTable message.
/**
 * It calls
 * gototable_interface__action__GoTable_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
void
gototable_interface__action__GoTable_SendGoal_Response__destroy(gototable_interface__action__GoTable_SendGoal_Response * msg);

/// Check for action/GoTable message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_SendGoal_Response__are_equal(const gototable_interface__action__GoTable_SendGoal_Response * lhs, const gototable_interface__action__GoTable_SendGoal_Response * rhs);

/// Copy a action/GoTable message.
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
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_SendGoal_Response__copy(
  const gototable_interface__action__GoTable_SendGoal_Response * input,
  gototable_interface__action__GoTable_SendGoal_Response * output);

/// Initialize array of action/GoTable messages.
/**
 * It allocates the memory for the number of elements and calls
 * gototable_interface__action__GoTable_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_SendGoal_Response__Sequence__init(gototable_interface__action__GoTable_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/GoTable messages.
/**
 * It calls
 * gototable_interface__action__GoTable_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
void
gototable_interface__action__GoTable_SendGoal_Response__Sequence__fini(gototable_interface__action__GoTable_SendGoal_Response__Sequence * array);

/// Create array of action/GoTable messages.
/**
 * It allocates the memory for the array and calls
 * gototable_interface__action__GoTable_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
gototable_interface__action__GoTable_SendGoal_Response__Sequence *
gototable_interface__action__GoTable_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/GoTable messages.
/**
 * It calls
 * gototable_interface__action__GoTable_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
void
gototable_interface__action__GoTable_SendGoal_Response__Sequence__destroy(gototable_interface__action__GoTable_SendGoal_Response__Sequence * array);

/// Check for action/GoTable message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_SendGoal_Response__Sequence__are_equal(const gototable_interface__action__GoTable_SendGoal_Response__Sequence * lhs, const gototable_interface__action__GoTable_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/GoTable messages.
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
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_SendGoal_Response__Sequence__copy(
  const gototable_interface__action__GoTable_SendGoal_Response__Sequence * input,
  gototable_interface__action__GoTable_SendGoal_Response__Sequence * output);

/// Initialize action/GoTable message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gototable_interface__action__GoTable_GetResult_Request
 * )) before or use
 * gototable_interface__action__GoTable_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_GetResult_Request__init(gototable_interface__action__GoTable_GetResult_Request * msg);

/// Finalize action/GoTable message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
void
gototable_interface__action__GoTable_GetResult_Request__fini(gototable_interface__action__GoTable_GetResult_Request * msg);

/// Create action/GoTable message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gototable_interface__action__GoTable_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
gototable_interface__action__GoTable_GetResult_Request *
gototable_interface__action__GoTable_GetResult_Request__create();

/// Destroy action/GoTable message.
/**
 * It calls
 * gototable_interface__action__GoTable_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
void
gototable_interface__action__GoTable_GetResult_Request__destroy(gototable_interface__action__GoTable_GetResult_Request * msg);

/// Check for action/GoTable message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_GetResult_Request__are_equal(const gototable_interface__action__GoTable_GetResult_Request * lhs, const gototable_interface__action__GoTable_GetResult_Request * rhs);

/// Copy a action/GoTable message.
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
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_GetResult_Request__copy(
  const gototable_interface__action__GoTable_GetResult_Request * input,
  gototable_interface__action__GoTable_GetResult_Request * output);

/// Initialize array of action/GoTable messages.
/**
 * It allocates the memory for the number of elements and calls
 * gototable_interface__action__GoTable_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_GetResult_Request__Sequence__init(gototable_interface__action__GoTable_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/GoTable messages.
/**
 * It calls
 * gototable_interface__action__GoTable_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
void
gototable_interface__action__GoTable_GetResult_Request__Sequence__fini(gototable_interface__action__GoTable_GetResult_Request__Sequence * array);

/// Create array of action/GoTable messages.
/**
 * It allocates the memory for the array and calls
 * gototable_interface__action__GoTable_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
gototable_interface__action__GoTable_GetResult_Request__Sequence *
gototable_interface__action__GoTable_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/GoTable messages.
/**
 * It calls
 * gototable_interface__action__GoTable_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
void
gototable_interface__action__GoTable_GetResult_Request__Sequence__destroy(gototable_interface__action__GoTable_GetResult_Request__Sequence * array);

/// Check for action/GoTable message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_GetResult_Request__Sequence__are_equal(const gototable_interface__action__GoTable_GetResult_Request__Sequence * lhs, const gototable_interface__action__GoTable_GetResult_Request__Sequence * rhs);

/// Copy an array of action/GoTable messages.
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
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_GetResult_Request__Sequence__copy(
  const gototable_interface__action__GoTable_GetResult_Request__Sequence * input,
  gototable_interface__action__GoTable_GetResult_Request__Sequence * output);

/// Initialize action/GoTable message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gototable_interface__action__GoTable_GetResult_Response
 * )) before or use
 * gototable_interface__action__GoTable_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_GetResult_Response__init(gototable_interface__action__GoTable_GetResult_Response * msg);

/// Finalize action/GoTable message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
void
gototable_interface__action__GoTable_GetResult_Response__fini(gototable_interface__action__GoTable_GetResult_Response * msg);

/// Create action/GoTable message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gototable_interface__action__GoTable_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
gototable_interface__action__GoTable_GetResult_Response *
gototable_interface__action__GoTable_GetResult_Response__create();

/// Destroy action/GoTable message.
/**
 * It calls
 * gototable_interface__action__GoTable_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
void
gototable_interface__action__GoTable_GetResult_Response__destroy(gototable_interface__action__GoTable_GetResult_Response * msg);

/// Check for action/GoTable message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_GetResult_Response__are_equal(const gototable_interface__action__GoTable_GetResult_Response * lhs, const gototable_interface__action__GoTable_GetResult_Response * rhs);

/// Copy a action/GoTable message.
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
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_GetResult_Response__copy(
  const gototable_interface__action__GoTable_GetResult_Response * input,
  gototable_interface__action__GoTable_GetResult_Response * output);

/// Initialize array of action/GoTable messages.
/**
 * It allocates the memory for the number of elements and calls
 * gototable_interface__action__GoTable_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_GetResult_Response__Sequence__init(gototable_interface__action__GoTable_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/GoTable messages.
/**
 * It calls
 * gototable_interface__action__GoTable_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
void
gototable_interface__action__GoTable_GetResult_Response__Sequence__fini(gototable_interface__action__GoTable_GetResult_Response__Sequence * array);

/// Create array of action/GoTable messages.
/**
 * It allocates the memory for the array and calls
 * gototable_interface__action__GoTable_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
gototable_interface__action__GoTable_GetResult_Response__Sequence *
gototable_interface__action__GoTable_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/GoTable messages.
/**
 * It calls
 * gototable_interface__action__GoTable_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
void
gototable_interface__action__GoTable_GetResult_Response__Sequence__destroy(gototable_interface__action__GoTable_GetResult_Response__Sequence * array);

/// Check for action/GoTable message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_GetResult_Response__Sequence__are_equal(const gototable_interface__action__GoTable_GetResult_Response__Sequence * lhs, const gototable_interface__action__GoTable_GetResult_Response__Sequence * rhs);

/// Copy an array of action/GoTable messages.
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
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_GetResult_Response__Sequence__copy(
  const gototable_interface__action__GoTable_GetResult_Response__Sequence * input,
  gototable_interface__action__GoTable_GetResult_Response__Sequence * output);

/// Initialize action/GoTable message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gototable_interface__action__GoTable_FeedbackMessage
 * )) before or use
 * gototable_interface__action__GoTable_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_FeedbackMessage__init(gototable_interface__action__GoTable_FeedbackMessage * msg);

/// Finalize action/GoTable message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
void
gototable_interface__action__GoTable_FeedbackMessage__fini(gototable_interface__action__GoTable_FeedbackMessage * msg);

/// Create action/GoTable message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gototable_interface__action__GoTable_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
gototable_interface__action__GoTable_FeedbackMessage *
gototable_interface__action__GoTable_FeedbackMessage__create();

/// Destroy action/GoTable message.
/**
 * It calls
 * gototable_interface__action__GoTable_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
void
gototable_interface__action__GoTable_FeedbackMessage__destroy(gototable_interface__action__GoTable_FeedbackMessage * msg);

/// Check for action/GoTable message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_FeedbackMessage__are_equal(const gototable_interface__action__GoTable_FeedbackMessage * lhs, const gototable_interface__action__GoTable_FeedbackMessage * rhs);

/// Copy a action/GoTable message.
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
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_FeedbackMessage__copy(
  const gototable_interface__action__GoTable_FeedbackMessage * input,
  gototable_interface__action__GoTable_FeedbackMessage * output);

/// Initialize array of action/GoTable messages.
/**
 * It allocates the memory for the number of elements and calls
 * gototable_interface__action__GoTable_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_FeedbackMessage__Sequence__init(gototable_interface__action__GoTable_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/GoTable messages.
/**
 * It calls
 * gototable_interface__action__GoTable_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
void
gototable_interface__action__GoTable_FeedbackMessage__Sequence__fini(gototable_interface__action__GoTable_FeedbackMessage__Sequence * array);

/// Create array of action/GoTable messages.
/**
 * It allocates the memory for the array and calls
 * gototable_interface__action__GoTable_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
gototable_interface__action__GoTable_FeedbackMessage__Sequence *
gototable_interface__action__GoTable_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/GoTable messages.
/**
 * It calls
 * gototable_interface__action__GoTable_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
void
gototable_interface__action__GoTable_FeedbackMessage__Sequence__destroy(gototable_interface__action__GoTable_FeedbackMessage__Sequence * array);

/// Check for action/GoTable message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_FeedbackMessage__Sequence__are_equal(const gototable_interface__action__GoTable_FeedbackMessage__Sequence * lhs, const gototable_interface__action__GoTable_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/GoTable messages.
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
ROSIDL_GENERATOR_C_PUBLIC_gototable_interface
bool
gototable_interface__action__GoTable_FeedbackMessage__Sequence__copy(
  const gototable_interface__action__GoTable_FeedbackMessage__Sequence * input,
  gototable_interface__action__GoTable_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // GOTOTABLE_INTERFACE__ACTION__DETAIL__GO_TABLE__FUNCTIONS_H_
