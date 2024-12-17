// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from move_interface:action/Move.idl
// generated code does not contain a copyright notice

#ifndef MOVE_INTERFACE__ACTION__DETAIL__MOVE__TRAITS_HPP_
#define MOVE_INTERFACE__ACTION__DETAIL__MOVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "move_interface/action/detail/move__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace move_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const Move_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: targetx
  {
    out << "targetx: ";
    rosidl_generator_traits::value_to_yaml(msg.targetx, out);
    out << ", ";
  }

  // member: targety
  {
    out << "targety: ";
    rosidl_generator_traits::value_to_yaml(msg.targety, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Move_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: targetx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "targetx: ";
    rosidl_generator_traits::value_to_yaml(msg.targetx, out);
    out << "\n";
  }

  // member: targety
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "targety: ";
    rosidl_generator_traits::value_to_yaml(msg.targety, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Move_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace move_interface

namespace rosidl_generator_traits
{

[[deprecated("use move_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const move_interface::action::Move_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  move_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use move_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const move_interface::action::Move_Goal & msg)
{
  return move_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<move_interface::action::Move_Goal>()
{
  return "move_interface::action::Move_Goal";
}

template<>
inline const char * name<move_interface::action::Move_Goal>()
{
  return "move_interface/action/Move_Goal";
}

template<>
struct has_fixed_size<move_interface::action::Move_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<move_interface::action::Move_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<move_interface::action::Move_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace move_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const Move_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Move_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Move_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace move_interface

namespace rosidl_generator_traits
{

[[deprecated("use move_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const move_interface::action::Move_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  move_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use move_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const move_interface::action::Move_Result & msg)
{
  return move_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<move_interface::action::Move_Result>()
{
  return "move_interface::action::Move_Result";
}

template<>
inline const char * name<move_interface::action::Move_Result>()
{
  return "move_interface/action/Move_Result";
}

template<>
struct has_fixed_size<move_interface::action::Move_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<move_interface::action::Move_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<move_interface::action::Move_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace move_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const Move_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: currx
  {
    out << "currx: ";
    rosidl_generator_traits::value_to_yaml(msg.currx, out);
    out << ", ";
  }

  // member: curry
  {
    out << "curry: ";
    rosidl_generator_traits::value_to_yaml(msg.curry, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Move_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: currx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "currx: ";
    rosidl_generator_traits::value_to_yaml(msg.currx, out);
    out << "\n";
  }

  // member: curry
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curry: ";
    rosidl_generator_traits::value_to_yaml(msg.curry, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Move_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace move_interface

namespace rosidl_generator_traits
{

[[deprecated("use move_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const move_interface::action::Move_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  move_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use move_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const move_interface::action::Move_Feedback & msg)
{
  return move_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<move_interface::action::Move_Feedback>()
{
  return "move_interface::action::Move_Feedback";
}

template<>
inline const char * name<move_interface::action::Move_Feedback>()
{
  return "move_interface/action/Move_Feedback";
}

template<>
struct has_fixed_size<move_interface::action::Move_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<move_interface::action::Move_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<move_interface::action::Move_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "move_interface/action/detail/move__traits.hpp"

namespace move_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const Move_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Move_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Move_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace move_interface

namespace rosidl_generator_traits
{

[[deprecated("use move_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const move_interface::action::Move_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  move_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use move_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const move_interface::action::Move_SendGoal_Request & msg)
{
  return move_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<move_interface::action::Move_SendGoal_Request>()
{
  return "move_interface::action::Move_SendGoal_Request";
}

template<>
inline const char * name<move_interface::action::Move_SendGoal_Request>()
{
  return "move_interface/action/Move_SendGoal_Request";
}

template<>
struct has_fixed_size<move_interface::action::Move_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<move_interface::action::Move_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<move_interface::action::Move_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<move_interface::action::Move_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<move_interface::action::Move_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace move_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const Move_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Move_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Move_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace move_interface

namespace rosidl_generator_traits
{

[[deprecated("use move_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const move_interface::action::Move_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  move_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use move_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const move_interface::action::Move_SendGoal_Response & msg)
{
  return move_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<move_interface::action::Move_SendGoal_Response>()
{
  return "move_interface::action::Move_SendGoal_Response";
}

template<>
inline const char * name<move_interface::action::Move_SendGoal_Response>()
{
  return "move_interface/action/Move_SendGoal_Response";
}

template<>
struct has_fixed_size<move_interface::action::Move_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<move_interface::action::Move_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<move_interface::action::Move_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<move_interface::action::Move_SendGoal>()
{
  return "move_interface::action::Move_SendGoal";
}

template<>
inline const char * name<move_interface::action::Move_SendGoal>()
{
  return "move_interface/action/Move_SendGoal";
}

template<>
struct has_fixed_size<move_interface::action::Move_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<move_interface::action::Move_SendGoal_Request>::value &&
    has_fixed_size<move_interface::action::Move_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<move_interface::action::Move_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<move_interface::action::Move_SendGoal_Request>::value &&
    has_bounded_size<move_interface::action::Move_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<move_interface::action::Move_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<move_interface::action::Move_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<move_interface::action::Move_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace move_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const Move_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Move_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Move_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace move_interface

namespace rosidl_generator_traits
{

[[deprecated("use move_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const move_interface::action::Move_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  move_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use move_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const move_interface::action::Move_GetResult_Request & msg)
{
  return move_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<move_interface::action::Move_GetResult_Request>()
{
  return "move_interface::action::Move_GetResult_Request";
}

template<>
inline const char * name<move_interface::action::Move_GetResult_Request>()
{
  return "move_interface/action/Move_GetResult_Request";
}

template<>
struct has_fixed_size<move_interface::action::Move_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<move_interface::action::Move_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<move_interface::action::Move_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "move_interface/action/detail/move__traits.hpp"

namespace move_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const Move_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Move_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Move_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace move_interface

namespace rosidl_generator_traits
{

[[deprecated("use move_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const move_interface::action::Move_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  move_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use move_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const move_interface::action::Move_GetResult_Response & msg)
{
  return move_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<move_interface::action::Move_GetResult_Response>()
{
  return "move_interface::action::Move_GetResult_Response";
}

template<>
inline const char * name<move_interface::action::Move_GetResult_Response>()
{
  return "move_interface/action/Move_GetResult_Response";
}

template<>
struct has_fixed_size<move_interface::action::Move_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<move_interface::action::Move_Result>::value> {};

template<>
struct has_bounded_size<move_interface::action::Move_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<move_interface::action::Move_Result>::value> {};

template<>
struct is_message<move_interface::action::Move_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<move_interface::action::Move_GetResult>()
{
  return "move_interface::action::Move_GetResult";
}

template<>
inline const char * name<move_interface::action::Move_GetResult>()
{
  return "move_interface/action/Move_GetResult";
}

template<>
struct has_fixed_size<move_interface::action::Move_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<move_interface::action::Move_GetResult_Request>::value &&
    has_fixed_size<move_interface::action::Move_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<move_interface::action::Move_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<move_interface::action::Move_GetResult_Request>::value &&
    has_bounded_size<move_interface::action::Move_GetResult_Response>::value
  >
{
};

template<>
struct is_service<move_interface::action::Move_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<move_interface::action::Move_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<move_interface::action::Move_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "move_interface/action/detail/move__traits.hpp"

namespace move_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const Move_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Move_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Move_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace move_interface

namespace rosidl_generator_traits
{

[[deprecated("use move_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const move_interface::action::Move_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  move_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use move_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const move_interface::action::Move_FeedbackMessage & msg)
{
  return move_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<move_interface::action::Move_FeedbackMessage>()
{
  return "move_interface::action::Move_FeedbackMessage";
}

template<>
inline const char * name<move_interface::action::Move_FeedbackMessage>()
{
  return "move_interface/action/Move_FeedbackMessage";
}

template<>
struct has_fixed_size<move_interface::action::Move_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<move_interface::action::Move_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<move_interface::action::Move_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<move_interface::action::Move_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<move_interface::action::Move_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<move_interface::action::Move>
  : std::true_type
{
};

template<>
struct is_action_goal<move_interface::action::Move_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<move_interface::action::Move_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<move_interface::action::Move_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // MOVE_INTERFACE__ACTION__DETAIL__MOVE__TRAITS_HPP_
