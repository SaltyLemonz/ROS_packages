// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tut_interfaces:msg/Ans.idl
// generated code does not contain a copyright notice

#ifndef TUT_INTERFACES__MSG__DETAIL__ANS__STRUCT_HPP_
#define TUT_INTERFACES__MSG__DETAIL__ANS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tut_interfaces__msg__Ans __attribute__((deprecated))
#else
# define DEPRECATED__tut_interfaces__msg__Ans __declspec(deprecated)
#endif

namespace tut_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Ans_
{
  using Type = Ans_<ContainerAllocator>;

  explicit Ans_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = false;
    }
  }

  explicit Ans_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = false;
    }
  }

  // field types and members
  using _data_type =
    bool;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const bool & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tut_interfaces::msg::Ans_<ContainerAllocator> *;
  using ConstRawPtr =
    const tut_interfaces::msg::Ans_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tut_interfaces::msg::Ans_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tut_interfaces::msg::Ans_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tut_interfaces::msg::Ans_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tut_interfaces::msg::Ans_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tut_interfaces::msg::Ans_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tut_interfaces::msg::Ans_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tut_interfaces::msg::Ans_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tut_interfaces::msg::Ans_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tut_interfaces__msg__Ans
    std::shared_ptr<tut_interfaces::msg::Ans_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tut_interfaces__msg__Ans
    std::shared_ptr<tut_interfaces::msg::Ans_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ans_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ans_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ans_

// alias to use template instance with default allocator
using Ans =
  tut_interfaces::msg::Ans_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tut_interfaces

#endif  // TUT_INTERFACES__MSG__DETAIL__ANS__STRUCT_HPP_
