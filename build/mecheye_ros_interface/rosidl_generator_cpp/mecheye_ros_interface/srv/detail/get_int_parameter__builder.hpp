// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mecheye_ros_interface:srv/GetIntParameter.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mecheye_ros_interface/srv/get_int_parameter.hpp"


#ifndef MECHEYE_ROS_INTERFACE__SRV__DETAIL__GET_INT_PARAMETER__BUILDER_HPP_
#define MECHEYE_ROS_INTERFACE__SRV__DETAIL__GET_INT_PARAMETER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mecheye_ros_interface/srv/detail/get_int_parameter__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mecheye_ros_interface
{

namespace srv
{

namespace builder
{

class Init_GetIntParameter_Request_name
{
public:
  Init_GetIntParameter_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mecheye_ros_interface::srv::GetIntParameter_Request name(::mecheye_ros_interface::srv::GetIntParameter_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecheye_ros_interface::srv::GetIntParameter_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecheye_ros_interface::srv::GetIntParameter_Request>()
{
  return mecheye_ros_interface::srv::builder::Init_GetIntParameter_Request_name();
}

}  // namespace mecheye_ros_interface


namespace mecheye_ros_interface
{

namespace srv
{

namespace builder
{

class Init_GetIntParameter_Response_value
{
public:
  Init_GetIntParameter_Response_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mecheye_ros_interface::srv::GetIntParameter_Response value(::mecheye_ros_interface::srv::GetIntParameter_Response::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecheye_ros_interface::srv::GetIntParameter_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecheye_ros_interface::srv::GetIntParameter_Response>()
{
  return mecheye_ros_interface::srv::builder::Init_GetIntParameter_Response_value();
}

}  // namespace mecheye_ros_interface


namespace mecheye_ros_interface
{

namespace srv
{

namespace builder
{

class Init_GetIntParameter_Event_response
{
public:
  explicit Init_GetIntParameter_Event_response(::mecheye_ros_interface::srv::GetIntParameter_Event & msg)
  : msg_(msg)
  {}
  ::mecheye_ros_interface::srv::GetIntParameter_Event response(::mecheye_ros_interface::srv::GetIntParameter_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecheye_ros_interface::srv::GetIntParameter_Event msg_;
};

class Init_GetIntParameter_Event_request
{
public:
  explicit Init_GetIntParameter_Event_request(::mecheye_ros_interface::srv::GetIntParameter_Event & msg)
  : msg_(msg)
  {}
  Init_GetIntParameter_Event_response request(::mecheye_ros_interface::srv::GetIntParameter_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetIntParameter_Event_response(msg_);
  }

private:
  ::mecheye_ros_interface::srv::GetIntParameter_Event msg_;
};

class Init_GetIntParameter_Event_info
{
public:
  Init_GetIntParameter_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetIntParameter_Event_request info(::mecheye_ros_interface::srv::GetIntParameter_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetIntParameter_Event_request(msg_);
  }

private:
  ::mecheye_ros_interface::srv::GetIntParameter_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecheye_ros_interface::srv::GetIntParameter_Event>()
{
  return mecheye_ros_interface::srv::builder::Init_GetIntParameter_Event_info();
}

}  // namespace mecheye_ros_interface

#endif  // MECHEYE_ROS_INTERFACE__SRV__DETAIL__GET_INT_PARAMETER__BUILDER_HPP_
