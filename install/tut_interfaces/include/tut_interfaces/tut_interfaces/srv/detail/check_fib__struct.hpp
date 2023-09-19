// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tut_interfaces:srv/CheckFib.idl
// generated code does not contain a copyright notice

#ifndef TUT_INTERFACES__SRV__DETAIL__CHECK_FIB__STRUCT_HPP_
#define TUT_INTERFACES__SRV__DETAIL__CHECK_FIB__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tut_interfaces__srv__CheckFib_Request __attribute__((deprecated))
#else
# define DEPRECATED__tut_interfaces__srv__CheckFib_Request __declspec(deprecated)
#endif

namespace tut_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CheckFib_Request_
{
  using Type = CheckFib_Request_<ContainerAllocator>;

  explicit CheckFib_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num = 0ll;
    }
  }

  explicit CheckFib_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num = 0ll;
    }
  }

  // field types and members
  using _num_type =
    int64_t;
  _num_type num;

  // setters for named parameter idiom
  Type & set__num(
    const int64_t & _arg)
  {
    this->num = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tut_interfaces::srv::CheckFib_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tut_interfaces::srv::CheckFib_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tut_interfaces::srv::CheckFib_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tut_interfaces::srv::CheckFib_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tut_interfaces::srv::CheckFib_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tut_interfaces::srv::CheckFib_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tut_interfaces::srv::CheckFib_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tut_interfaces::srv::CheckFib_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tut_interfaces::srv::CheckFib_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tut_interfaces::srv::CheckFib_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tut_interfaces__srv__CheckFib_Request
    std::shared_ptr<tut_interfaces::srv::CheckFib_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tut_interfaces__srv__CheckFib_Request
    std::shared_ptr<tut_interfaces::srv::CheckFib_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckFib_Request_ & other) const
  {
    if (this->num != other.num) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckFib_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckFib_Request_

// alias to use template instance with default allocator
using CheckFib_Request =
  tut_interfaces::srv::CheckFib_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tut_interfaces


#ifndef _WIN32
# define DEPRECATED__tut_interfaces__srv__CheckFib_Response __attribute__((deprecated))
#else
# define DEPRECATED__tut_interfaces__srv__CheckFib_Response __declspec(deprecated)
#endif

namespace tut_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CheckFib_Response_
{
  using Type = CheckFib_Response_<ContainerAllocator>;

  explicit CheckFib_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = false;
    }
  }

  explicit CheckFib_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    tut_interfaces::srv::CheckFib_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tut_interfaces::srv::CheckFib_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tut_interfaces::srv::CheckFib_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tut_interfaces::srv::CheckFib_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tut_interfaces::srv::CheckFib_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tut_interfaces::srv::CheckFib_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tut_interfaces::srv::CheckFib_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tut_interfaces::srv::CheckFib_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tut_interfaces::srv::CheckFib_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tut_interfaces::srv::CheckFib_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tut_interfaces__srv__CheckFib_Response
    std::shared_ptr<tut_interfaces::srv::CheckFib_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tut_interfaces__srv__CheckFib_Response
    std::shared_ptr<tut_interfaces::srv::CheckFib_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckFib_Response_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckFib_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckFib_Response_

// alias to use template instance with default allocator
using CheckFib_Response =
  tut_interfaces::srv::CheckFib_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tut_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tut_interfaces__srv__CheckFib_Event __attribute__((deprecated))
#else
# define DEPRECATED__tut_interfaces__srv__CheckFib_Event __declspec(deprecated)
#endif

namespace tut_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CheckFib_Event_
{
  using Type = CheckFib_Event_<ContainerAllocator>;

  explicit CheckFib_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit CheckFib_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<tut_interfaces::srv::CheckFib_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tut_interfaces::srv::CheckFib_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<tut_interfaces::srv::CheckFib_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tut_interfaces::srv::CheckFib_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<tut_interfaces::srv::CheckFib_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tut_interfaces::srv::CheckFib_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<tut_interfaces::srv::CheckFib_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tut_interfaces::srv::CheckFib_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tut_interfaces::srv::CheckFib_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const tut_interfaces::srv::CheckFib_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tut_interfaces::srv::CheckFib_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tut_interfaces::srv::CheckFib_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tut_interfaces::srv::CheckFib_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tut_interfaces::srv::CheckFib_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tut_interfaces::srv::CheckFib_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tut_interfaces::srv::CheckFib_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tut_interfaces::srv::CheckFib_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tut_interfaces::srv::CheckFib_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tut_interfaces__srv__CheckFib_Event
    std::shared_ptr<tut_interfaces::srv::CheckFib_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tut_interfaces__srv__CheckFib_Event
    std::shared_ptr<tut_interfaces::srv::CheckFib_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckFib_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckFib_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckFib_Event_

// alias to use template instance with default allocator
using CheckFib_Event =
  tut_interfaces::srv::CheckFib_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tut_interfaces

namespace tut_interfaces
{

namespace srv
{

struct CheckFib
{
  using Request = tut_interfaces::srv::CheckFib_Request;
  using Response = tut_interfaces::srv::CheckFib_Response;
  using Event = tut_interfaces::srv::CheckFib_Event;
};

}  // namespace srv

}  // namespace tut_interfaces

#endif  // TUT_INTERFACES__SRV__DETAIL__CHECK_FIB__STRUCT_HPP_
