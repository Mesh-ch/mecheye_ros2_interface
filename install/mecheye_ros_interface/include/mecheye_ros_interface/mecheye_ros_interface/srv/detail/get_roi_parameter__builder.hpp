// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mecheye_ros_interface:srv/GetROIParameter.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mecheye_ros_interface/srv/get_roi_parameter.hpp"


#ifndef MECHEYE_ROS_INTERFACE__SRV__DETAIL__GET_ROI_PARAMETER__BUILDER_HPP_
#define MECHEYE_ROS_INTERFACE__SRV__DETAIL__GET_ROI_PARAMETER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mecheye_ros_interface/srv/detail/get_roi_parameter__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mecheye_ros_interface
{

namespace srv
{

namespace builder
{

class Init_GetROIParameter_Request_name
{
public:
  Init_GetROIParameter_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mecheye_ros_interface::srv::GetROIParameter_Request name(::mecheye_ros_interface::srv::GetROIParameter_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecheye_ros_interface::srv::GetROIParameter_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecheye_ros_interface::srv::GetROIParameter_Request>()
{
  return mecheye_ros_interface::srv::builder::Init_GetROIParameter_Request_name();
}

}  // namespace mecheye_ros_interface


namespace mecheye_ros_interface
{

namespace srv
{

namespace builder
{

class Init_GetROIParameter_Response_height
{
public:
  explicit Init_GetROIParameter_Response_height(::mecheye_ros_interface::srv::GetROIParameter_Response & msg)
  : msg_(msg)
  {}
  ::mecheye_ros_interface::srv::GetROIParameter_Response height(::mecheye_ros_interface::srv::GetROIParameter_Response::_height_type arg)
  {
    msg_.height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecheye_ros_interface::srv::GetROIParameter_Response msg_;
};

class Init_GetROIParameter_Response_width
{
public:
  explicit Init_GetROIParameter_Response_width(::mecheye_ros_interface::srv::GetROIParameter_Response & msg)
  : msg_(msg)
  {}
  Init_GetROIParameter_Response_height width(::mecheye_ros_interface::srv::GetROIParameter_Response::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_GetROIParameter_Response_height(msg_);
  }

private:
  ::mecheye_ros_interface::srv::GetROIParameter_Response msg_;
};

class Init_GetROIParameter_Response_y
{
public:
  explicit Init_GetROIParameter_Response_y(::mecheye_ros_interface::srv::GetROIParameter_Response & msg)
  : msg_(msg)
  {}
  Init_GetROIParameter_Response_width y(::mecheye_ros_interface::srv::GetROIParameter_Response::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_GetROIParameter_Response_width(msg_);
  }

private:
  ::mecheye_ros_interface::srv::GetROIParameter_Response msg_;
};

class Init_GetROIParameter_Response_x
{
public:
  Init_GetROIParameter_Response_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetROIParameter_Response_y x(::mecheye_ros_interface::srv::GetROIParameter_Response::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_GetROIParameter_Response_y(msg_);
  }

private:
  ::mecheye_ros_interface::srv::GetROIParameter_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecheye_ros_interface::srv::GetROIParameter_Response>()
{
  return mecheye_ros_interface::srv::builder::Init_GetROIParameter_Response_x();
}

}  // namespace mecheye_ros_interface


namespace mecheye_ros_interface
{

namespace srv
{

namespace builder
{

class Init_GetROIParameter_Event_response
{
public:
  explicit Init_GetROIParameter_Event_response(::mecheye_ros_interface::srv::GetROIParameter_Event & msg)
  : msg_(msg)
  {}
  ::mecheye_ros_interface::srv::GetROIParameter_Event response(::mecheye_ros_interface::srv::GetROIParameter_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecheye_ros_interface::srv::GetROIParameter_Event msg_;
};

class Init_GetROIParameter_Event_request
{
public:
  explicit Init_GetROIParameter_Event_request(::mecheye_ros_interface::srv::GetROIParameter_Event & msg)
  : msg_(msg)
  {}
  Init_GetROIParameter_Event_response request(::mecheye_ros_interface::srv::GetROIParameter_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetROIParameter_Event_response(msg_);
  }

private:
  ::mecheye_ros_interface::srv::GetROIParameter_Event msg_;
};

class Init_GetROIParameter_Event_info
{
public:
  Init_GetROIParameter_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetROIParameter_Event_request info(::mecheye_ros_interface::srv::GetROIParameter_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetROIParameter_Event_request(msg_);
  }

private:
  ::mecheye_ros_interface::srv::GetROIParameter_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecheye_ros_interface::srv::GetROIParameter_Event>()
{
  return mecheye_ros_interface::srv::builder::Init_GetROIParameter_Event_info();
}

}  // namespace mecheye_ros_interface

#endif  // MECHEYE_ROS_INTERFACE__SRV__DETAIL__GET_ROI_PARAMETER__BUILDER_HPP_
