// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from move_interface:action/Move.idl
// generated code does not contain a copyright notice

#ifndef MOVE_INTERFACE__ACTION__DETAIL__MOVE__BUILDER_HPP_
#define MOVE_INTERFACE__ACTION__DETAIL__MOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "move_interface/action/detail/move__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace move_interface
{

namespace action
{

namespace builder
{

class Init_Move_Goal_targety
{
public:
  explicit Init_Move_Goal_targety(::move_interface::action::Move_Goal & msg)
  : msg_(msg)
  {}
  ::move_interface::action::Move_Goal targety(::move_interface::action::Move_Goal::_targety_type arg)
  {
    msg_.targety = std::move(arg);
    return std::move(msg_);
  }

private:
  ::move_interface::action::Move_Goal msg_;
};

class Init_Move_Goal_targetx
{
public:
  Init_Move_Goal_targetx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_Goal_targety targetx(::move_interface::action::Move_Goal::_targetx_type arg)
  {
    msg_.targetx = std::move(arg);
    return Init_Move_Goal_targety(msg_);
  }

private:
  ::move_interface::action::Move_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::move_interface::action::Move_Goal>()
{
  return move_interface::action::builder::Init_Move_Goal_targetx();
}

}  // namespace move_interface


namespace move_interface
{

namespace action
{

namespace builder
{

class Init_Move_Result_success
{
public:
  Init_Move_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::move_interface::action::Move_Result success(::move_interface::action::Move_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::move_interface::action::Move_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::move_interface::action::Move_Result>()
{
  return move_interface::action::builder::Init_Move_Result_success();
}

}  // namespace move_interface


namespace move_interface
{

namespace action
{

namespace builder
{

class Init_Move_Feedback_curry
{
public:
  explicit Init_Move_Feedback_curry(::move_interface::action::Move_Feedback & msg)
  : msg_(msg)
  {}
  ::move_interface::action::Move_Feedback curry(::move_interface::action::Move_Feedback::_curry_type arg)
  {
    msg_.curry = std::move(arg);
    return std::move(msg_);
  }

private:
  ::move_interface::action::Move_Feedback msg_;
};

class Init_Move_Feedback_currx
{
public:
  Init_Move_Feedback_currx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_Feedback_curry currx(::move_interface::action::Move_Feedback::_currx_type arg)
  {
    msg_.currx = std::move(arg);
    return Init_Move_Feedback_curry(msg_);
  }

private:
  ::move_interface::action::Move_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::move_interface::action::Move_Feedback>()
{
  return move_interface::action::builder::Init_Move_Feedback_currx();
}

}  // namespace move_interface


namespace move_interface
{

namespace action
{

namespace builder
{

class Init_Move_SendGoal_Request_goal
{
public:
  explicit Init_Move_SendGoal_Request_goal(::move_interface::action::Move_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::move_interface::action::Move_SendGoal_Request goal(::move_interface::action::Move_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::move_interface::action::Move_SendGoal_Request msg_;
};

class Init_Move_SendGoal_Request_goal_id
{
public:
  Init_Move_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_SendGoal_Request_goal goal_id(::move_interface::action::Move_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Move_SendGoal_Request_goal(msg_);
  }

private:
  ::move_interface::action::Move_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::move_interface::action::Move_SendGoal_Request>()
{
  return move_interface::action::builder::Init_Move_SendGoal_Request_goal_id();
}

}  // namespace move_interface


namespace move_interface
{

namespace action
{

namespace builder
{

class Init_Move_SendGoal_Response_stamp
{
public:
  explicit Init_Move_SendGoal_Response_stamp(::move_interface::action::Move_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::move_interface::action::Move_SendGoal_Response stamp(::move_interface::action::Move_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::move_interface::action::Move_SendGoal_Response msg_;
};

class Init_Move_SendGoal_Response_accepted
{
public:
  Init_Move_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_SendGoal_Response_stamp accepted(::move_interface::action::Move_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Move_SendGoal_Response_stamp(msg_);
  }

private:
  ::move_interface::action::Move_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::move_interface::action::Move_SendGoal_Response>()
{
  return move_interface::action::builder::Init_Move_SendGoal_Response_accepted();
}

}  // namespace move_interface


namespace move_interface
{

namespace action
{

namespace builder
{

class Init_Move_GetResult_Request_goal_id
{
public:
  Init_Move_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::move_interface::action::Move_GetResult_Request goal_id(::move_interface::action::Move_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::move_interface::action::Move_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::move_interface::action::Move_GetResult_Request>()
{
  return move_interface::action::builder::Init_Move_GetResult_Request_goal_id();
}

}  // namespace move_interface


namespace move_interface
{

namespace action
{

namespace builder
{

class Init_Move_GetResult_Response_result
{
public:
  explicit Init_Move_GetResult_Response_result(::move_interface::action::Move_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::move_interface::action::Move_GetResult_Response result(::move_interface::action::Move_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::move_interface::action::Move_GetResult_Response msg_;
};

class Init_Move_GetResult_Response_status
{
public:
  Init_Move_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_GetResult_Response_result status(::move_interface::action::Move_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Move_GetResult_Response_result(msg_);
  }

private:
  ::move_interface::action::Move_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::move_interface::action::Move_GetResult_Response>()
{
  return move_interface::action::builder::Init_Move_GetResult_Response_status();
}

}  // namespace move_interface


namespace move_interface
{

namespace action
{

namespace builder
{

class Init_Move_FeedbackMessage_feedback
{
public:
  explicit Init_Move_FeedbackMessage_feedback(::move_interface::action::Move_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::move_interface::action::Move_FeedbackMessage feedback(::move_interface::action::Move_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::move_interface::action::Move_FeedbackMessage msg_;
};

class Init_Move_FeedbackMessage_goal_id
{
public:
  Init_Move_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_FeedbackMessage_feedback goal_id(::move_interface::action::Move_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Move_FeedbackMessage_feedback(msg_);
  }

private:
  ::move_interface::action::Move_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::move_interface::action::Move_FeedbackMessage>()
{
  return move_interface::action::builder::Init_Move_FeedbackMessage_goal_id();
}

}  // namespace move_interface

#endif  // MOVE_INTERFACE__ACTION__DETAIL__MOVE__BUILDER_HPP_
