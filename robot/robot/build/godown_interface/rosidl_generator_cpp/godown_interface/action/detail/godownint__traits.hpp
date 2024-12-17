// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from godown_interface:action/Godownint.idl
// generated code does not contain a copyright notice

#ifndef GODOWN_INTERFACE__ACTION__DETAIL__GODOWNINT__TRAITS_HPP_
#define GODOWN_INTERFACE__ACTION__DETAIL__GODOWNINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "godown_interface/action/detail/godownint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace godown_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const Godownint_Goal & msg,
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
  const Godownint_Goal & msg,
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

inline std::string to_yaml(const Godownint_Goal & msg, bool use_flow_style = false)
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

}  // namespace godown_interface

namespace rosidl_generator_traits
{

[[deprecated("use godown_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const godown_interface::action::Godownint_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  godown_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use godown_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const godown_interface::action::Godownint_Goal & msg)
{
  return godown_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<godown_interface::action::Godownint_Goal>()
{
  return "godown_interface::action::Godownint_Goal";
}

template<>
inline const char * name<godown_interface::action::Godownint_Goal>()
{
  return "godown_interface/action/Godownint_Goal";
}

template<>
struct has_fixed_size<godown_interface::action::Godownint_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<godown_interface::action::Godownint_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<godown_interface::action::Godownint_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace godown_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const Godownint_Result & msg,
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
  const Godownint_Result & msg,
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

inline std::string to_yaml(const Godownint_Result & msg, bool use_flow_style = false)
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

}  // namespace godown_interface

namespace rosidl_generator_traits
{

[[deprecated("use godown_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const godown_interface::action::Godownint_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  godown_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use godown_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const godown_interface::action::Godownint_Result & msg)
{
  return godown_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<godown_interface::action::Godownint_Result>()
{
  return "godown_interface::action::Godownint_Result";
}

template<>
inline const char * name<godown_interface::action::Godownint_Result>()
{
  return "godown_interface/action/Godownint_Result";
}

template<>
struct has_fixed_size<godown_interface::action::Godownint_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<godown_interface::action::Godownint_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<godown_interface::action::Godownint_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace godown_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const Godownint_Feedback & msg,
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
  const Godownint_Feedback & msg,
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

inline std::string to_yaml(const Godownint_Feedback & msg, bool use_flow_style = false)
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

}  // namespace godown_interface

namespace rosidl_generator_traits
{

[[deprecated("use godown_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const godown_interface::action::Godownint_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  godown_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use godown_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const godown_interface::action::Godownint_Feedback & msg)
{
  return godown_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<godown_interface::action::Godownint_Feedback>()
{
  return "godown_interface::action::Godownint_Feedback";
}

template<>
inline const char * name<godown_interface::action::Godownint_Feedback>()
{
  return "godown_interface/action/Godownint_Feedback";
}

template<>
struct has_fixed_size<godown_interface::action::Godownint_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<godown_interface::action::Godownint_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<godown_interface::action::Godownint_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "godown_interface/action/detail/godownint__traits.hpp"

namespace godown_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const Godownint_SendGoal_Request & msg,
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
  const Godownint_SendGoal_Request & msg,
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

inline std::string to_yaml(const Godownint_SendGoal_Request & msg, bool use_flow_style = false)
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

}  // namespace godown_interface

namespace rosidl_generator_traits
{

[[deprecated("use godown_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const godown_interface::action::Godownint_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  godown_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use godown_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const godown_interface::action::Godownint_SendGoal_Request & msg)
{
  return godown_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<godown_interface::action::Godownint_SendGoal_Request>()
{
  return "godown_interface::action::Godownint_SendGoal_Request";
}

template<>
inline const char * name<godown_interface::action::Godownint_SendGoal_Request>()
{
  return "godown_interface/action/Godownint_SendGoal_Request";
}

template<>
struct has_fixed_size<godown_interface::action::Godownint_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<godown_interface::action::Godownint_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<godown_interface::action::Godownint_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<godown_interface::action::Godownint_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<godown_interface::action::Godownint_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace godown_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const Godownint_SendGoal_Response & msg,
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
  const Godownint_SendGoal_Response & msg,
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

inline std::string to_yaml(const Godownint_SendGoal_Response & msg, bool use_flow_style = false)
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

}  // namespace godown_interface

namespace rosidl_generator_traits
{

[[deprecated("use godown_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const godown_interface::action::Godownint_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  godown_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use godown_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const godown_interface::action::Godownint_SendGoal_Response & msg)
{
  return godown_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<godown_interface::action::Godownint_SendGoal_Response>()
{
  return "godown_interface::action::Godownint_SendGoal_Response";
}

template<>
inline const char * name<godown_interface::action::Godownint_SendGoal_Response>()
{
  return "godown_interface/action/Godownint_SendGoal_Response";
}

template<>
struct has_fixed_size<godown_interface::action::Godownint_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<godown_interface::action::Godownint_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<godown_interface::action::Godownint_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<godown_interface::action::Godownint_SendGoal>()
{
  return "godown_interface::action::Godownint_SendGoal";
}

template<>
inline const char * name<godown_interface::action::Godownint_SendGoal>()
{
  return "godown_interface/action/Godownint_SendGoal";
}

template<>
struct has_fixed_size<godown_interface::action::Godownint_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<godown_interface::action::Godownint_SendGoal_Request>::value &&
    has_fixed_size<godown_interface::action::Godownint_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<godown_interface::action::Godownint_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<godown_interface::action::Godownint_SendGoal_Request>::value &&
    has_bounded_size<godown_interface::action::Godownint_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<godown_interface::action::Godownint_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<godown_interface::action::Godownint_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<godown_interface::action::Godownint_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace godown_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const Godownint_GetResult_Request & msg,
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
  const Godownint_GetResult_Request & msg,
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

inline std::string to_yaml(const Godownint_GetResult_Request & msg, bool use_flow_style = false)
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

}  // namespace godown_interface

namespace rosidl_generator_traits
{

[[deprecated("use godown_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const godown_interface::action::Godownint_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  godown_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use godown_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const godown_interface::action::Godownint_GetResult_Request & msg)
{
  return godown_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<godown_interface::action::Godownint_GetResult_Request>()
{
  return "godown_interface::action::Godownint_GetResult_Request";
}

template<>
inline const char * name<godown_interface::action::Godownint_GetResult_Request>()
{
  return "godown_interface/action/Godownint_GetResult_Request";
}

template<>
struct has_fixed_size<godown_interface::action::Godownint_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<godown_interface::action::Godownint_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<godown_interface::action::Godownint_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "godown_interface/action/detail/godownint__traits.hpp"

namespace godown_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const Godownint_GetResult_Response & msg,
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
  const Godownint_GetResult_Response & msg,
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

inline std::string to_yaml(const Godownint_GetResult_Response & msg, bool use_flow_style = false)
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

}  // namespace godown_interface

namespace rosidl_generator_traits
{

[[deprecated("use godown_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const godown_interface::action::Godownint_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  godown_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use godown_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const godown_interface::action::Godownint_GetResult_Response & msg)
{
  return godown_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<godown_interface::action::Godownint_GetResult_Response>()
{
  return "godown_interface::action::Godownint_GetResult_Response";
}

template<>
inline const char * name<godown_interface::action::Godownint_GetResult_Response>()
{
  return "godown_interface/action/Godownint_GetResult_Response";
}

template<>
struct has_fixed_size<godown_interface::action::Godownint_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<godown_interface::action::Godownint_Result>::value> {};

template<>
struct has_bounded_size<godown_interface::action::Godownint_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<godown_interface::action::Godownint_Result>::value> {};

template<>
struct is_message<godown_interface::action::Godownint_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<godown_interface::action::Godownint_GetResult>()
{
  return "godown_interface::action::Godownint_GetResult";
}

template<>
inline const char * name<godown_interface::action::Godownint_GetResult>()
{
  return "godown_interface/action/Godownint_GetResult";
}

template<>
struct has_fixed_size<godown_interface::action::Godownint_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<godown_interface::action::Godownint_GetResult_Request>::value &&
    has_fixed_size<godown_interface::action::Godownint_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<godown_interface::action::Godownint_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<godown_interface::action::Godownint_GetResult_Request>::value &&
    has_bounded_size<godown_interface::action::Godownint_GetResult_Response>::value
  >
{
};

template<>
struct is_service<godown_interface::action::Godownint_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<godown_interface::action::Godownint_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<godown_interface::action::Godownint_GetResult_Response>
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
// #include "godown_interface/action/detail/godownint__traits.hpp"

namespace godown_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const Godownint_FeedbackMessage & msg,
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
  const Godownint_FeedbackMessage & msg,
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

inline std::string to_yaml(const Godownint_FeedbackMessage & msg, bool use_flow_style = false)
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

}  // namespace godown_interface

namespace rosidl_generator_traits
{

[[deprecated("use godown_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const godown_interface::action::Godownint_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  godown_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use godown_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const godown_interface::action::Godownint_FeedbackMessage & msg)
{
  return godown_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<godown_interface::action::Godownint_FeedbackMessage>()
{
  return "godown_interface::action::Godownint_FeedbackMessage";
}

template<>
inline const char * name<godown_interface::action::Godownint_FeedbackMessage>()
{
  return "godown_interface/action/Godownint_FeedbackMessage";
}

template<>
struct has_fixed_size<godown_interface::action::Godownint_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<godown_interface::action::Godownint_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<godown_interface::action::Godownint_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<godown_interface::action::Godownint_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<godown_interface::action::Godownint_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<godown_interface::action::Godownint>
  : std::true_type
{
};

template<>
struct is_action_goal<godown_interface::action::Godownint_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<godown_interface::action::Godownint_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<godown_interface::action::Godownint_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // GODOWN_INTERFACE__ACTION__DETAIL__GODOWNINT__TRAITS_HPP_
