// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gototable_interface:action/GoTable.idl
// generated code does not contain a copyright notice

#ifndef GOTOTABLE_INTERFACE__ACTION__DETAIL__GO_TABLE__BUILDER_HPP_
#define GOTOTABLE_INTERFACE__ACTION__DETAIL__GO_TABLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gototable_interface/action/detail/go_table__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gototable_interface
{

namespace action
{

namespace builder
{

class Init_GoTable_Goal_targety
{
public:
  explicit Init_GoTable_Goal_targety(::gototable_interface::action::GoTable_Goal & msg)
  : msg_(msg)
  {}
  ::gototable_interface::action::GoTable_Goal targety(::gototable_interface::action::GoTable_Goal::_targety_type arg)
  {
    msg_.targety = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gototable_interface::action::GoTable_Goal msg_;
};

class Init_GoTable_Goal_targetx
{
public:
  Init_GoTable_Goal_targetx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoTable_Goal_targety targetx(::gototable_interface::action::GoTable_Goal::_targetx_type arg)
  {
    msg_.targetx = std::move(arg);
    return Init_GoTable_Goal_targety(msg_);
  }

private:
  ::gototable_interface::action::GoTable_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::gototable_interface::action::GoTable_Goal>()
{
  return gototable_interface::action::builder::Init_GoTable_Goal_targetx();
}

}  // namespace gototable_interface


namespace gototable_interface
{

namespace action
{

namespace builder
{

class Init_GoTable_Result_success
{
public:
  Init_GoTable_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gototable_interface::action::GoTable_Result success(::gototable_interface::action::GoTable_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gototable_interface::action::GoTable_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::gototable_interface::action::GoTable_Result>()
{
  return gototable_interface::action::builder::Init_GoTable_Result_success();
}

}  // namespace gototable_interface


namespace gototable_interface
{

namespace action
{

namespace builder
{

class Init_GoTable_Feedback_curry
{
public:
  explicit Init_GoTable_Feedback_curry(::gototable_interface::action::GoTable_Feedback & msg)
  : msg_(msg)
  {}
  ::gototable_interface::action::GoTable_Feedback curry(::gototable_interface::action::GoTable_Feedback::_curry_type arg)
  {
    msg_.curry = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gototable_interface::action::GoTable_Feedback msg_;
};

class Init_GoTable_Feedback_currx
{
public:
  Init_GoTable_Feedback_currx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoTable_Feedback_curry currx(::gototable_interface::action::GoTable_Feedback::_currx_type arg)
  {
    msg_.currx = std::move(arg);
    return Init_GoTable_Feedback_curry(msg_);
  }

private:
  ::gototable_interface::action::GoTable_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::gototable_interface::action::GoTable_Feedback>()
{
  return gototable_interface::action::builder::Init_GoTable_Feedback_currx();
}

}  // namespace gototable_interface


namespace gototable_interface
{

namespace action
{

namespace builder
{

class Init_GoTable_SendGoal_Request_goal
{
public:
  explicit Init_GoTable_SendGoal_Request_goal(::gototable_interface::action::GoTable_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::gototable_interface::action::GoTable_SendGoal_Request goal(::gototable_interface::action::GoTable_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gototable_interface::action::GoTable_SendGoal_Request msg_;
};

class Init_GoTable_SendGoal_Request_goal_id
{
public:
  Init_GoTable_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoTable_SendGoal_Request_goal goal_id(::gototable_interface::action::GoTable_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GoTable_SendGoal_Request_goal(msg_);
  }

private:
  ::gototable_interface::action::GoTable_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::gototable_interface::action::GoTable_SendGoal_Request>()
{
  return gototable_interface::action::builder::Init_GoTable_SendGoal_Request_goal_id();
}

}  // namespace gototable_interface


namespace gototable_interface
{

namespace action
{

namespace builder
{

class Init_GoTable_SendGoal_Response_stamp
{
public:
  explicit Init_GoTable_SendGoal_Response_stamp(::gototable_interface::action::GoTable_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::gototable_interface::action::GoTable_SendGoal_Response stamp(::gototable_interface::action::GoTable_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gototable_interface::action::GoTable_SendGoal_Response msg_;
};

class Init_GoTable_SendGoal_Response_accepted
{
public:
  Init_GoTable_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoTable_SendGoal_Response_stamp accepted(::gototable_interface::action::GoTable_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_GoTable_SendGoal_Response_stamp(msg_);
  }

private:
  ::gototable_interface::action::GoTable_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::gototable_interface::action::GoTable_SendGoal_Response>()
{
  return gototable_interface::action::builder::Init_GoTable_SendGoal_Response_accepted();
}

}  // namespace gototable_interface


namespace gototable_interface
{

namespace action
{

namespace builder
{

class Init_GoTable_GetResult_Request_goal_id
{
public:
  Init_GoTable_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gototable_interface::action::GoTable_GetResult_Request goal_id(::gototable_interface::action::GoTable_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gototable_interface::action::GoTable_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::gototable_interface::action::GoTable_GetResult_Request>()
{
  return gototable_interface::action::builder::Init_GoTable_GetResult_Request_goal_id();
}

}  // namespace gototable_interface


namespace gototable_interface
{

namespace action
{

namespace builder
{

class Init_GoTable_GetResult_Response_result
{
public:
  explicit Init_GoTable_GetResult_Response_result(::gototable_interface::action::GoTable_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::gototable_interface::action::GoTable_GetResult_Response result(::gototable_interface::action::GoTable_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gototable_interface::action::GoTable_GetResult_Response msg_;
};

class Init_GoTable_GetResult_Response_status
{
public:
  Init_GoTable_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoTable_GetResult_Response_result status(::gototable_interface::action::GoTable_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GoTable_GetResult_Response_result(msg_);
  }

private:
  ::gototable_interface::action::GoTable_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::gototable_interface::action::GoTable_GetResult_Response>()
{
  return gototable_interface::action::builder::Init_GoTable_GetResult_Response_status();
}

}  // namespace gototable_interface


namespace gototable_interface
{

namespace action
{

namespace builder
{

class Init_GoTable_FeedbackMessage_feedback
{
public:
  explicit Init_GoTable_FeedbackMessage_feedback(::gototable_interface::action::GoTable_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::gototable_interface::action::GoTable_FeedbackMessage feedback(::gototable_interface::action::GoTable_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gototable_interface::action::GoTable_FeedbackMessage msg_;
};

class Init_GoTable_FeedbackMessage_goal_id
{
public:
  Init_GoTable_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoTable_FeedbackMessage_feedback goal_id(::gototable_interface::action::GoTable_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GoTable_FeedbackMessage_feedback(msg_);
  }

private:
  ::gototable_interface::action::GoTable_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::gototable_interface::action::GoTable_FeedbackMessage>()
{
  return gototable_interface::action::builder::Init_GoTable_FeedbackMessage_goal_id();
}

}  // namespace gototable_interface

#endif  // GOTOTABLE_INTERFACE__ACTION__DETAIL__GO_TABLE__BUILDER_HPP_
