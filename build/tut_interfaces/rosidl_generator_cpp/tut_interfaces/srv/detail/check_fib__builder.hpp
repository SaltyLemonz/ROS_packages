// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tut_interfaces:srv/CheckFib.idl
// generated code does not contain a copyright notice

#ifndef TUT_INTERFACES__SRV__DETAIL__CHECK_FIB__BUILDER_HPP_
#define TUT_INTERFACES__SRV__DETAIL__CHECK_FIB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tut_interfaces/srv/detail/check_fib__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tut_interfaces
{

namespace srv
{

namespace builder
{

class Init_CheckFib_Request_num
{
public:
  Init_CheckFib_Request_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tut_interfaces::srv::CheckFib_Request num(::tut_interfaces::srv::CheckFib_Request::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tut_interfaces::srv::CheckFib_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tut_interfaces::srv::CheckFib_Request>()
{
  return tut_interfaces::srv::builder::Init_CheckFib_Request_num();
}

}  // namespace tut_interfaces


namespace tut_interfaces
{

namespace srv
{

namespace builder
{

class Init_CheckFib_Response_data
{
public:
  Init_CheckFib_Response_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tut_interfaces::srv::CheckFib_Response data(::tut_interfaces::srv::CheckFib_Response::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tut_interfaces::srv::CheckFib_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tut_interfaces::srv::CheckFib_Response>()
{
  return tut_interfaces::srv::builder::Init_CheckFib_Response_data();
}

}  // namespace tut_interfaces


namespace tut_interfaces
{

namespace srv
{

namespace builder
{

class Init_CheckFib_Event_response
{
public:
  explicit Init_CheckFib_Event_response(::tut_interfaces::srv::CheckFib_Event & msg)
  : msg_(msg)
  {}
  ::tut_interfaces::srv::CheckFib_Event response(::tut_interfaces::srv::CheckFib_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tut_interfaces::srv::CheckFib_Event msg_;
};

class Init_CheckFib_Event_request
{
public:
  explicit Init_CheckFib_Event_request(::tut_interfaces::srv::CheckFib_Event & msg)
  : msg_(msg)
  {}
  Init_CheckFib_Event_response request(::tut_interfaces::srv::CheckFib_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CheckFib_Event_response(msg_);
  }

private:
  ::tut_interfaces::srv::CheckFib_Event msg_;
};

class Init_CheckFib_Event_info
{
public:
  Init_CheckFib_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CheckFib_Event_request info(::tut_interfaces::srv::CheckFib_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CheckFib_Event_request(msg_);
  }

private:
  ::tut_interfaces::srv::CheckFib_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tut_interfaces::srv::CheckFib_Event>()
{
  return tut_interfaces::srv::builder::Init_CheckFib_Event_info();
}

}  // namespace tut_interfaces

#endif  // TUT_INTERFACES__SRV__DETAIL__CHECK_FIB__BUILDER_HPP_
