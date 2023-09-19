// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tut_interfaces:msg/Message.idl
// generated code does not contain a copyright notice

#ifndef TUT_INTERFACES__MSG__DETAIL__MESSAGE__BUILDER_HPP_
#define TUT_INTERFACES__MSG__DETAIL__MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tut_interfaces/msg/detail/message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tut_interfaces
{

namespace msg
{

namespace builder
{

class Init_Message_flag
{
public:
  Init_Message_flag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tut_interfaces::msg::Message flag(::tut_interfaces::msg::Message::_flag_type arg)
  {
    msg_.flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tut_interfaces::msg::Message msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tut_interfaces::msg::Message>()
{
  return tut_interfaces::msg::builder::Init_Message_flag();
}

}  // namespace tut_interfaces

#endif  // TUT_INTERFACES__MSG__DETAIL__MESSAGE__BUILDER_HPP_
