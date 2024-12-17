// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from move_interface:action/Move.idl
// generated code does not contain a copyright notice

#ifndef MOVE_INTERFACE__ACTION__DETAIL__MOVE__STRUCT_H_
#define MOVE_INTERFACE__ACTION__DETAIL__MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Move in the package move_interface.
typedef struct move_interface__action__Move_Goal
{
  double targetx;
  double targety;
} move_interface__action__Move_Goal;

// Struct for a sequence of move_interface__action__Move_Goal.
typedef struct move_interface__action__Move_Goal__Sequence
{
  move_interface__action__Move_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} move_interface__action__Move_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/Move in the package move_interface.
typedef struct move_interface__action__Move_Result
{
  bool success;
} move_interface__action__Move_Result;

// Struct for a sequence of move_interface__action__Move_Result.
typedef struct move_interface__action__Move_Result__Sequence
{
  move_interface__action__Move_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} move_interface__action__Move_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Move in the package move_interface.
typedef struct move_interface__action__Move_Feedback
{
  double currx;
  double curry;
} move_interface__action__Move_Feedback;

// Struct for a sequence of move_interface__action__Move_Feedback.
typedef struct move_interface__action__Move_Feedback__Sequence
{
  move_interface__action__Move_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} move_interface__action__Move_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "move_interface/action/detail/move__struct.h"

/// Struct defined in action/Move in the package move_interface.
typedef struct move_interface__action__Move_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  move_interface__action__Move_Goal goal;
} move_interface__action__Move_SendGoal_Request;

// Struct for a sequence of move_interface__action__Move_SendGoal_Request.
typedef struct move_interface__action__Move_SendGoal_Request__Sequence
{
  move_interface__action__Move_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} move_interface__action__Move_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Move in the package move_interface.
typedef struct move_interface__action__Move_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} move_interface__action__Move_SendGoal_Response;

// Struct for a sequence of move_interface__action__Move_SendGoal_Response.
typedef struct move_interface__action__Move_SendGoal_Response__Sequence
{
  move_interface__action__Move_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} move_interface__action__Move_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Move in the package move_interface.
typedef struct move_interface__action__Move_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} move_interface__action__Move_GetResult_Request;

// Struct for a sequence of move_interface__action__Move_GetResult_Request.
typedef struct move_interface__action__Move_GetResult_Request__Sequence
{
  move_interface__action__Move_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} move_interface__action__Move_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "move_interface/action/detail/move__struct.h"

/// Struct defined in action/Move in the package move_interface.
typedef struct move_interface__action__Move_GetResult_Response
{
  int8_t status;
  move_interface__action__Move_Result result;
} move_interface__action__Move_GetResult_Response;

// Struct for a sequence of move_interface__action__Move_GetResult_Response.
typedef struct move_interface__action__Move_GetResult_Response__Sequence
{
  move_interface__action__Move_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} move_interface__action__Move_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "move_interface/action/detail/move__struct.h"

/// Struct defined in action/Move in the package move_interface.
typedef struct move_interface__action__Move_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  move_interface__action__Move_Feedback feedback;
} move_interface__action__Move_FeedbackMessage;

// Struct for a sequence of move_interface__action__Move_FeedbackMessage.
typedef struct move_interface__action__Move_FeedbackMessage__Sequence
{
  move_interface__action__Move_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} move_interface__action__Move_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVE_INTERFACE__ACTION__DETAIL__MOVE__STRUCT_H_
