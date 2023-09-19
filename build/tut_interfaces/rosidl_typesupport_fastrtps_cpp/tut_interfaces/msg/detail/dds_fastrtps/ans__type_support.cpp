// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tut_interfaces:msg/Ans.idl
// generated code does not contain a copyright notice
#include "tut_interfaces/msg/detail/ans__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tut_interfaces/msg/detail/ans__functions.h"
#include "tut_interfaces/msg/detail/ans__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace tut_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tut_interfaces
cdr_serialize(
  const tut_interfaces::msg::Ans & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: data
  cdr << (ros_message.data ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tut_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tut_interfaces::msg::Ans & ros_message)
{
  // Member: data
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.data = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tut_interfaces
get_serialized_size(
  const tut_interfaces::msg::Ans & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: data
  {
    size_t item_size = sizeof(ros_message.data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tut_interfaces
max_serialized_size_Ans(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: data
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _Ans__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tut_interfaces::msg::Ans *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Ans__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tut_interfaces::msg::Ans *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Ans__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tut_interfaces::msg::Ans *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Ans__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Ans(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Ans__callbacks = {
  "tut_interfaces::msg",
  "Ans",
  _Ans__cdr_serialize,
  _Ans__cdr_deserialize,
  _Ans__get_serialized_size,
  _Ans__max_serialized_size
};

static rosidl_message_type_support_t _Ans__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Ans__callbacks,
  get_message_typesupport_handle_function,
  &tut_interfaces__msg__Ans__get_type_hash,
  &tut_interfaces__msg__Ans__get_type_description,
  &tut_interfaces__msg__Ans__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tut_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tut_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<tut_interfaces::msg::Ans>()
{
  return &tut_interfaces::msg::typesupport_fastrtps_cpp::_Ans__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tut_interfaces, msg, Ans)() {
  return &tut_interfaces::msg::typesupport_fastrtps_cpp::_Ans__handle;
}

#ifdef __cplusplus
}
#endif
