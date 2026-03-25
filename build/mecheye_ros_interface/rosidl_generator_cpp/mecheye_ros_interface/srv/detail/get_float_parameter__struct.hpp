// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mecheye_ros_interface:srv/GetFloatParameter.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mecheye_ros_interface/srv/get_float_parameter.hpp"


#ifndef MECHEYE_ROS_INTERFACE__SRV__DETAIL__GET_FLOAT_PARAMETER__STRUCT_HPP_
#define MECHEYE_ROS_INTERFACE__SRV__DETAIL__GET_FLOAT_PARAMETER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mecheye_ros_interface__srv__GetFloatParameter_Request __attribute__((deprecated))
#else
# define DEPRECATED__mecheye_ros_interface__srv__GetFloatParameter_Request __declspec(deprecated)
#endif

namespace mecheye_ros_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetFloatParameter_Request_
{
  using Type = GetFloatParameter_Request_<ContainerAllocator>;

  explicit GetFloatParameter_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit GetFloatParameter_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mecheye_ros_interface::srv::GetFloatParameter_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mecheye_ros_interface::srv::GetFloatParameter_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mecheye_ros_interface::srv::GetFloatParameter_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mecheye_ros_interface::srv::GetFloatParameter_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mecheye_ros_interface::srv::GetFloatParameter_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mecheye_ros_interface::srv::GetFloatParameter_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mecheye_ros_interface::srv::GetFloatParameter_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mecheye_ros_interface::srv::GetFloatParameter_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mecheye_ros_interface::srv::GetFloatParameter_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mecheye_ros_interface::srv::GetFloatParameter_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mecheye_ros_interface__srv__GetFloatParameter_Request
    std::shared_ptr<mecheye_ros_interface::srv::GetFloatParameter_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mecheye_ros_interface__srv__GetFloatParameter_Request
    std::shared_ptr<mecheye_ros_interface::srv::GetFloatParameter_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetFloatParameter_Request_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetFloatParameter_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetFloatParameter_Request_

// alias to use template instance with default allocator
using GetFloatParameter_Request =
  mecheye_ros_interface::srv::GetFloatParameter_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mecheye_ros_interface


#ifndef _WIN32
# define DEPRECATED__mecheye_ros_interface__srv__GetFloatParameter_Response __attribute__((deprecated))
#else
# define DEPRECATED__mecheye_ros_interface__srv__GetFloatParameter_Response __declspec(deprecated)
#endif

namespace mecheye_ros_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetFloatParameter_Response_
{
  using Type = GetFloatParameter_Response_<ContainerAllocator>;

  explicit GetFloatParameter_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0.0;
    }
  }

  explicit GetFloatParameter_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0.0;
    }
  }

  // field types and members
  using _value_type =
    double;
  _value_type value;

  // setters for named parameter idiom
  Type & set__value(
    const double & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mecheye_ros_interface::srv::GetFloatParameter_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mecheye_ros_interface::srv::GetFloatParameter_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mecheye_ros_interface::srv::GetFloatParameter_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mecheye_ros_interface::srv::GetFloatParameter_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mecheye_ros_interface::srv::GetFloatParameter_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mecheye_ros_interface::srv::GetFloatParameter_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mecheye_ros_interface::srv::GetFloatParameter_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mecheye_ros_interface::srv::GetFloatParameter_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mecheye_ros_interface::srv::GetFloatParameter_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mecheye_ros_interface::srv::GetFloatParameter_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mecheye_ros_interface__srv__GetFloatParameter_Response
    std::shared_ptr<mecheye_ros_interface::srv::GetFloatParameter_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mecheye_ros_interface__srv__GetFloatParameter_Response
    std::shared_ptr<mecheye_ros_interface::srv::GetFloatParameter_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetFloatParameter_Response_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetFloatParameter_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetFloatParameter_Response_

// alias to use template instance with default allocator
using GetFloatParameter_Response =
  mecheye_ros_interface::srv::GetFloatParameter_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mecheye_ros_interface


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mecheye_ros_interface__srv__GetFloatParameter_Event __attribute__((deprecated))
#else
# define DEPRECATED__mecheye_ros_interface__srv__GetFloatParameter_Event __declspec(deprecated)
#endif

namespace mecheye_ros_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetFloatParameter_Event_
{
  using Type = GetFloatParameter_Event_<ContainerAllocator>;

  explicit GetFloatParameter_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit GetFloatParameter_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<mecheye_ros_interface::srv::GetFloatParameter_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mecheye_ros_interface::srv::GetFloatParameter_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<mecheye_ros_interface::srv::GetFloatParameter_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mecheye_ros_interface::srv::GetFloatParameter_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<mecheye_ros_interface::srv::GetFloatParameter_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mecheye_ros_interface::srv::GetFloatParameter_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<mecheye_ros_interface::srv::GetFloatParameter_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mecheye_ros_interface::srv::GetFloatParameter_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mecheye_ros_interface::srv::GetFloatParameter_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const mecheye_ros_interface::srv::GetFloatParameter_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mecheye_ros_interface::srv::GetFloatParameter_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mecheye_ros_interface::srv::GetFloatParameter_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mecheye_ros_interface::srv::GetFloatParameter_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mecheye_ros_interface::srv::GetFloatParameter_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mecheye_ros_interface::srv::GetFloatParameter_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mecheye_ros_interface::srv::GetFloatParameter_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mecheye_ros_interface::srv::GetFloatParameter_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mecheye_ros_interface::srv::GetFloatParameter_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mecheye_ros_interface__srv__GetFloatParameter_Event
    std::shared_ptr<mecheye_ros_interface::srv::GetFloatParameter_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mecheye_ros_interface__srv__GetFloatParameter_Event
    std::shared_ptr<mecheye_ros_interface::srv::GetFloatParameter_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetFloatParameter_Event_ & other) const
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
  bool operator!=(const GetFloatParameter_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetFloatParameter_Event_

// alias to use template instance with default allocator
using GetFloatParameter_Event =
  mecheye_ros_interface::srv::GetFloatParameter_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mecheye_ros_interface

namespace mecheye_ros_interface
{

namespace srv
{

struct GetFloatParameter
{
  using Request = mecheye_ros_interface::srv::GetFloatParameter_Request;
  using Response = mecheye_ros_interface::srv::GetFloatParameter_Response;
  using Event = mecheye_ros_interface::srv::GetFloatParameter_Event;
};

}  // namespace srv

}  // namespace mecheye_ros_interface

#endif  // MECHEYE_ROS_INTERFACE__SRV__DETAIL__GET_FLOAT_PARAMETER__STRUCT_HPP_
