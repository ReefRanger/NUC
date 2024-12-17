// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gototable_interface:action/GoTable.idl
// generated code does not contain a copyright notice

#ifndef GOTOTABLE_INTERFACE__ACTION__DETAIL__GO_TABLE__STRUCT_H_
#define GOTOTABLE_INTERFACE__ACTION__DETAIL__GO_TABLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/GoTable in the package gototable_interface.
typedef struct gototable_interface__action__GoTable_Goal
{
  double targetx;
  double targety;
} gototable_interface__action__GoTable_Goal;

// Struct for a sequence of gototable_interface__action__GoTable_Goal.
typedef struct gototable_interface__action__GoTable_Goal__Sequence
{
  gototable_interface__action__GoTable_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gototable_interface__action__GoTable_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/GoTable in the package gototable_interface.
typedef struct gototable_interface__action__GoTable_Result
{
  bool success;
} gototable_interface__action__GoTable_Result;

// Struct for a sequence of gototable_interface__action__GoTable_Result.
typedef struct gototable_interface__action__GoTable_Result__Sequence
{
  gototable_interface__action__GoTable_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gototable_interface__action__GoTable_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/GoTable in the package gototable_interface.
typedef struct gototable_interface__action__GoTable_Feedback
{
  double currx;
  double curry;
} gototable_interface__action__GoTable_Feedback;

// Struct for a sequence of gototable_interface__action__GoTable_Feedback.
typedef struct gototable_interface__action__GoTable_Feedback__Sequence
{
  gototable_interface__action__GoTable_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gototable_interface__action__GoTable_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "gototable_interface/action/detail/go_table__struct.h"

/// Struct defined in action/GoTable in the package gototable_interface.
typedef struct gototable_interface__action__GoTable_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  gototable_interface__action__GoTable_Goal goal;
} gototable_interface__action__GoTable_SendGoal_Request;

// Struct for a sequence of gototable_interface__action__GoTable_SendGoal_Request.
typedef struct gototable_interface__action__GoTable_SendGoal_Request__Sequence
{
  gototable_interface__action__GoTable_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gototable_interface__action__GoTable_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/GoTable in the package gototable_interface.
typedef struct gototable_interface__action__GoTable_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} gototable_interface__action__GoTable_SendGoal_Response;

// Struct for a sequence of gototable_interface__action__GoTable_SendGoal_Response.
typedef struct gototable_interface__action__GoTable_SendGoal_Response__Sequence
{
  gototable_interface__action__GoTable_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gototable_interface__action__GoTable_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/GoTable in the package gototable_interface.
typedef struct gototable_interface__action__GoTable_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} gototable_interface__action__GoTable_GetResult_Request;

// Struct for a sequence of gototable_interface__action__GoTable_GetResult_Request.
typedef struct gototable_interface__action__GoTable_GetResult_Request__Sequence
{
  gototable_interface__action__GoTable_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gototable_interface__action__GoTable_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "gototable_interface/action/detail/go_table__struct.h"

/// Struct defined in action/GoTable in the package gototable_interface.
typedef struct gototable_interface__action__GoTable_GetResult_Response
{
  int8_t status;
  gototable_interface__action__GoTable_Result result;
} gototable_interface__action__GoTable_GetResult_Response;

// Struct for a sequence of gototable_interface__action__GoTable_GetResult_Response.
typedef struct gototable_interface__action__GoTable_GetResult_Response__Sequence
{
  gototable_interface__action__GoTable_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gototable_interface__action__GoTable_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "gototable_interface/action/detail/go_table__struct.h"

/// Struct defined in action/GoTable in the package gototable_interface.
typedef struct gototable_interface__action__GoTable_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  gototable_interface__action__GoTable_Feedback feedback;
} gototable_interface__action__GoTable_FeedbackMessage;

// Struct for a sequence of gototable_interface__action__GoTable_FeedbackMessage.
typedef struct gototable_interface__action__GoTable_FeedbackMessage__Sequence
{
  gototable_interface__action__GoTable_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gototable_interface__action__GoTable_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GOTOTABLE_INTERFACE__ACTION__DETAIL__GO_TABLE__STRUCT_H_
