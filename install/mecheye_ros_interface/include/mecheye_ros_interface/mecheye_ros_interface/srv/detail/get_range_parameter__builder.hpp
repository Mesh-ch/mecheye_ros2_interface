// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mecheye_ros_interface:srv/GetRangeParameter.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mecheye_ros_interface/srv/get_range_parameter.hpp"


#ifndef MECHEYE_ROS_INTERFACE__SRV__DETAIL__GET_RANGE_PARAMETER__BUILDER_HPP_
#define MECHEYE_ROS_INTERFACE__SRV__DETAIL__GET_RANGE_PARAMETER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mecheye_ros_interface/srv/detail/get_range_parameter__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mecheye_ros_interface
{

namespace srv
{

namespace builder
{

class Init_GetRangeParameter_Request_name
{
public:
  Init_GetRangeParameter_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mecheye_ros_interface::srv::GetRangeParameter_Request name(::mecheye_ros_interface::srv::GetRangeParameter_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecheye_ros_interface::srv::GetRangeParameter_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecheye_ros_interface::srv::GetRangeParameter_Request>()
{
  return mecheye_ros_interface::srv::builder::Init_GetRangeParameter_Request_name();
}

}  // namespace mecheye_ros_interface


namespace mecheye_ros_interface
{

namespace srv
{

namespace builder
{

class Init_GetRangeParameter_Response_upper
{
public:
  explicit Init_GetRangeParameter_Response_upper(::mecheye_ros_interface::srv::GetRangeParameter_Response & msg)
  : msg_(msg)
  {}
  ::mecheye_ros_interface::srv::GetRangeParameter_Response upper(::mecheye_ros_interface::srv::GetRangeParameter_Response::_upper_type arg)
  {
    msg_.upper = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecheye_ros_interface::srv::GetRangeParameter_Response msg_;
};

class Init_GetRangeParameter_Response_lower
{
public:
  Init_GetRangeParameter_Response_lower()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetRangeParameter_Response_upper lower(::mecheye_ros_interface::srv::GetRangeParameter_Response::_lower_type arg)
  {
    msg_.lower = std::move(arg);
    return Init_GetRangeParameter_Response_upper(msg_);
  }

private:
  ::mecheye_ros_interface::srv::GetRangeParameter_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecheye_ros_interface::srv::GetRangeParameter_Response>()
{
  return mecheye_ros_interface::srv::builder::Init_GetRangeParameter_Response_lower();
}

}  // namespace mecheye_ros_interface


namespace mecheye_ros_interface
{

namespace srv
{

namespace builder
{

class Init_GetRangeParameter_Event_response
{
public:
  explicit Init_GetRangeParameter_Event_response(::mecheye_ros_interface::srv::GetRangeParameter_Event & msg)
  : msg_(msg)
  {}
  ::mecheye_ros_interface::srv::GetRangeParameter_Event response(::mecheye_ros_interface::srv::GetRangeParameter_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecheye_ros_interface::srv::GetRangeParameter_Event msg_;
};

class Init_GetRangeParameter_Event_request
{
public:
  explicit Init_GetRangeParameter_Event_request(::mecheye_ros_interface::srv::GetRangeParameter_Event & msg)
  : msg_(msg)
  {}
  Init_GetRangeParameter_Event_response request(::mecheye_ros_interface::srv::GetRangeParameter_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetRangeParameter_Event_response(msg_);
  }

private:
  ::mecheye_ros_interface::srv::GetRangeParameter_Event msg_;
};

class Init_GetRangeParameter_Event_info
{
public:
  Init_GetRangeParameter_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetRangeParameter_Event_request info(::mecheye_ros_interface::srv::GetRangeParameter_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetRangeParameter_Event_request(msg_);
  }

private:
  ::mecheye_ros_interface::srv::GetRangeParameter_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecheye_ros_interface::srv::GetRangeParameter_Event>()
{
  return mecheye_ros_interface::srv::builder::Init_GetRangeParameter_Event_info();
}

}  // namespace mecheye_ros_interface

#endif  // MECHEYE_ROS_INTERFACE__SRV__DETAIL__GET_RANGE_PARAMETER__BUILDER_HPP_
