// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from godown_interface:action/Godownint.idl
// generated code does not contain a copyright notice

#ifndef GODOWN_INTERFACE__ACTION__DETAIL__GODOWNINT__BUILDER_HPP_
#define GODOWN_INTERFACE__ACTION__DETAIL__GODOWNINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "godown_interface/action/detail/godownint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace godown_interface
{

namespace action
{

namespace builder
{

class Init_Godownint_Goal_targety
{
public:
  explicit Init_Godownint_Goal_targety(::godown_interface::action::Godownint_Goal & msg)
  : msg_(msg)
  {}
  ::godown_interface::action::Godownint_Goal targety(::godown_interface::action::Godownint_Goal::_targety_type arg)
  {
    msg_.targety = std::move(arg);
    return std::move(msg_);
  }

private:
  ::godown_interface::action::Godownint_Goal msg_;
};

class Init_Godownint_Goal_targetx
{
public:
  Init_Godownint_Goal_targetx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Godownint_Goal_targety targetx(::godown_interface::action::Godownint_Goal::_targetx_type arg)
  {
    msg_.targetx = std::move(arg);
    return Init_Godownint_Goal_targety(msg_);
  }

private:
  ::godown_interface::action::Godownint_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::godown_interface::action::Godownint_Goal>()
{
  return godown_interface::action::builder::Init_Godownint_Goal_targetx();
}

}  // namespace godown_interface


namespace godown_interface
{

namespace action
{

namespace builder
{

class Init_Godownint_Result_success
{
public:
  Init_Godownint_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::godown_interface::action::Godownint_Result success(::godown_interface::action::Godownint_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::godown_interface::action::Godownint_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::godown_interface::action::Godownint_Result>()
{
  return godown_interface::action::builder::Init_Godownint_Result_success();
}

}  // namespace godown_interface


namespace godown_interface
{

namespace action
{

namespace builder
{

class Init_Godownint_Feedback_curry
{
public:
  explicit Init_Godownint_Feedback_curry(::godown_interface::action::Godownint_Feedback & msg)
  : msg_(msg)
  {}
  ::godown_interface::action::Godownint_Feedback curry(::godown_interface::action::Godownint_Feedback::_curry_type arg)
  {
    msg_.curry = std::move(arg);
    return std::move(msg_);
  }

private:
  ::godown_interface::action::Godownint_Feedback msg_;
};

class Init_Godownint_Feedback_currx
{
public:
  Init_Godownint_Feedback_currx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Godownint_Feedback_curry currx(::godown_interface::action::Godownint_Feedback::_currx_type arg)
  {
    msg_.currx = std::move(arg);
    return Init_Godownint_Feedback_curry(msg_);
  }

private:
  ::godown_interface::action::Godownint_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::godown_interface::action::Godownint_Feedback>()
{
  return godown_interface::action::builder::Init_Godownint_Feedback_currx();
}

}  // namespace godown_interface


namespace godown_interface
{

namespace action
{

namespace builder
{

class Init_Godownint_SendGoal_Request_goal
{
public:
  explicit Init_Godownint_SendGoal_Request_goal(::godown_interface::action::Godownint_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::godown_interface::action::Godownint_SendGoal_Request goal(::godown_interface::action::Godownint_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::godown_interface::action::Godownint_SendGoal_Request msg_;
};

class Init_Godownint_SendGoal_Request_goal_id
{
public:
  Init_Godownint_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Godownint_SendGoal_Request_goal goal_id(::godown_interface::action::Godownint_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Godownint_SendGoal_Request_goal(msg_);
  }

private:
  ::godown_interface::action::Godownint_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::godown_interface::action::Godownint_SendGoal_Request>()
{
  return godown_interface::action::builder::Init_Godownint_SendGoal_Request_goal_id();
}

}  // namespace godown_interface


namespace godown_interface
{

namespace action
{

namespace builder
{

class Init_Godownint_SendGoal_Response_stamp
{
public:
  explicit Init_Godownint_SendGoal_Response_stamp(::godown_interface::action::Godownint_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::godown_interface::action::Godownint_SendGoal_Response stamp(::godown_interface::action::Godownint_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::godown_interface::action::Godownint_SendGoal_Response msg_;
};

class Init_Godownint_SendGoal_Response_accepted
{
public:
  Init_Godownint_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Godownint_SendGoal_Response_stamp accepted(::godown_interface::action::Godownint_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Godownint_SendGoal_Response_stamp(msg_);
  }

private:
  ::godown_interface::action::Godownint_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::godown_interface::action::Godownint_SendGoal_Response>()
{
  return godown_interface::action::builder::Init_Godownint_SendGoal_Response_accepted();
}

}  // namespace godown_interface


namespace godown_interface
{

namespace action
{

namespace builder
{

class Init_Godownint_GetResult_Request_goal_id
{
public:
  Init_Godownint_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::godown_interface::action::Godownint_GetResult_Request goal_id(::godown_interface::action::Godownint_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::godown_interface::action::Godownint_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::godown_interface::action::Godownint_GetResult_Request>()
{
  return godown_interface::action::builder::Init_Godownint_GetResult_Request_goal_id();
}

}  // namespace godown_interface


namespace godown_interface
{

namespace action
{

namespace builder
{

class Init_Godownint_GetResult_Response_result
{
public:
  explicit Init_Godownint_GetResult_Response_result(::godown_interface::action::Godownint_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::godown_interface::action::Godownint_GetResult_Response result(::godown_interface::action::Godownint_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::godown_interface::action::Godownint_GetResult_Response msg_;
};

class Init_Godownint_GetResult_Response_status
{
public:
  Init_Godownint_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Godownint_GetResult_Response_result status(::godown_interface::action::Godownint_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Godownint_GetResult_Response_result(msg_);
  }

private:
  ::godown_interface::action::Godownint_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::godown_interface::action::Godownint_GetResult_Response>()
{
  return godown_interface::action::builder::Init_Godownint_GetResult_Response_status();
}

}  // namespace godown_interface


namespace godown_interface
{

namespace action
{

namespace builder
{

class Init_Godownint_FeedbackMessage_feedback
{
public:
  explicit Init_Godownint_FeedbackMessage_feedback(::godown_interface::action::Godownint_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::godown_interface::action::Godownint_FeedbackMessage feedback(::godown_interface::action::Godownint_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::godown_interface::action::Godownint_FeedbackMessage msg_;
};

class Init_Godownint_FeedbackMessage_goal_id
{
public:
  Init_Godownint_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Godownint_FeedbackMessage_feedback goal_id(::godown_interface::action::Godownint_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Godownint_FeedbackMessage_feedback(msg_);
  }

private:
  ::godown_interface::action::Godownint_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::godown_interface::action::Godownint_FeedbackMessage>()
{
  return godown_interface::action::builder::Init_Godownint_FeedbackMessage_goal_id();
}

}  // namespace godown_interface

#endif  // GODOWN_INTERFACE__ACTION__DETAIL__GODOWNINT__BUILDER_HPP_
