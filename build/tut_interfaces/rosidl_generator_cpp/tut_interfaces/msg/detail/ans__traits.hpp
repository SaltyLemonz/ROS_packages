// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tut_interfaces:msg/Ans.idl
// generated code does not contain a copyright notice

#ifndef TUT_INTERFACES__MSG__DETAIL__ANS__TRAITS_HPP_
#define TUT_INTERFACES__MSG__DETAIL__ANS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tut_interfaces/msg/detail/ans__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tut_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Ans & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Ans & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Ans & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace tut_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tut_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tut_interfaces::msg::Ans & msg,
  std::ostream & out, size_t indentation = 0)
{
  tut_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tut_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const tut_interfaces::msg::Ans & msg)
{
  return tut_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tut_interfaces::msg::Ans>()
{
  return "tut_interfaces::msg::Ans";
}

template<>
inline const char * name<tut_interfaces::msg::Ans>()
{
  return "tut_interfaces/msg/Ans";
}

template<>
struct has_fixed_size<tut_interfaces::msg::Ans>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tut_interfaces::msg::Ans>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tut_interfaces::msg::Ans>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TUT_INTERFACES__MSG__DETAIL__ANS__TRAITS_HPP_
