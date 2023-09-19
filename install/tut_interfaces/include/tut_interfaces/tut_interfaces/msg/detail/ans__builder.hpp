// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tut_interfaces:msg/Ans.idl
// generated code does not contain a copyright notice

#ifndef TUT_INTERFACES__MSG__DETAIL__ANS__BUILDER_HPP_
#define TUT_INTERFACES__MSG__DETAIL__ANS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tut_interfaces/msg/detail/ans__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tut_interfaces
{

namespace msg
{

namespace builder
{

class Init_Ans_data
{
public:
  Init_Ans_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tut_interfaces::msg::Ans data(::tut_interfaces::msg::Ans::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tut_interfaces::msg::Ans msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tut_interfaces::msg::Ans>()
{
  return tut_interfaces::msg::builder::Init_Ans_data();
}

}  // namespace tut_interfaces

#endif  // TUT_INTERFACES__MSG__DETAIL__ANS__BUILDER_HPP_
