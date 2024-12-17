// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from godown_interface:action/Godownint.idl
// generated code does not contain a copyright notice

#ifndef GODOWN_INTERFACE__ACTION__DETAIL__GODOWNINT__STRUCT_H_
#define GODOWN_INTERFACE__ACTION__DETAIL__GODOWNINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Godownint in the package godown_interface.
typedef struct godown_interface__action__Godownint_Goal
{
  double targetx;
  double targety;
} godown_interface__action__Godownint_Goal;

// Struct for a sequence of godown_interface__action__Godownint_Goal.
typedef struct godown_interface__action__Godownint_Goal__Sequence
{
  godown_interface__action__Godownint_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} godown_interface__action__Godownint_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/Godownint in the package godown_interface.
typedef struct godown_interface__action__Godownint_Result
{
  bool success;
} godown_interface__action__Godownint_Result;

// Struct for a sequence of godown_interface__action__Godownint_Result.
typedef struct godown_interface__action__Godownint_Result__Sequence
{
  godown_interface__action__Godownint_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} godown_interface__action__Godownint_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Godownint in the package godown_interface.
typedef struct godown_interface__action__Godownint_Feedback
{
  double currx;
  double curry;
} godown_interface__action__Godownint_Feedback;

// Struct for a sequence of godown_interface__action__Godownint_Feedback.
typedef struct godown_interface__action__Godownint_Feedback__Sequence
{
  godown_interface__action__Godownint_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} godown_interface__action__Godownint_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "godown_interface/action/detail/godownint__struct.h"

/// Struct defined in action/Godownint in the package godown_interface.
typedef struct godown_interface__action__Godownint_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  godown_interface__action__Godownint_Goal goal;
} godown_interface__action__Godownint_SendGoal_Request;

// Struct for a sequence of godown_interface__action__Godownint_SendGoal_Request.
typedef struct godown_interface__action__Godownint_SendGoal_Request__Sequence
{
  godown_interface__action__Godownint_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} godown_interface__action__Godownint_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Godownint in the package godown_interface.
typedef struct godown_interface__action__Godownint_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} godown_interface__action__Godownint_SendGoal_Response;

// Struct for a sequence of godown_interface__action__Godownint_SendGoal_Response.
typedef struct godown_interface__action__Godownint_SendGoal_Response__Sequence
{
  godown_interface__action__Godownint_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} godown_interface__action__Godownint_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Godownint in the package godown_interface.
typedef struct godown_interface__action__Godownint_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} godown_interface__action__Godownint_GetResult_Request;

// Struct for a sequence of godown_interface__action__Godownint_GetResult_Request.
typedef struct godown_interface__action__Godownint_GetResult_Request__Sequence
{
  godown_interface__action__Godownint_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} godown_interface__action__Godownint_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "godown_interface/action/detail/godownint__struct.h"

/// Struct defined in action/Godownint in the package godown_interface.
typedef struct godown_interface__action__Godownint_GetResult_Response
{
  int8_t status;
  godown_interface__action__Godownint_Result result;
} godown_interface__action__Godownint_GetResult_Response;

// Struct for a sequence of godown_interface__action__Godownint_GetResult_Response.
typedef struct godown_interface__action__Godownint_GetResult_Response__Sequence
{
  godown_interface__action__Godownint_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} godown_interface__action__Godownint_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "godown_interface/action/detail/godownint__struct.h"

/// Struct defined in action/Godownint in the package godown_interface.
typedef struct godown_interface__action__Godownint_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  godown_interface__action__Godownint_Feedback feedback;
} godown_interface__action__Godownint_FeedbackMessage;

// Struct for a sequence of godown_interface__action__Godownint_FeedbackMessage.
typedef struct godown_interface__action__Godownint_FeedbackMessage__Sequence
{
  godown_interface__action__Godownint_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} godown_interface__action__Godownint_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GODOWN_INTERFACE__ACTION__DETAIL__GODOWNINT__STRUCT_H_
