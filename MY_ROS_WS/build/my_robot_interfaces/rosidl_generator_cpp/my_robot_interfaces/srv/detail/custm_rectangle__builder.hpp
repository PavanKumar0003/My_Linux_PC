// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_interfaces:srv/CustmRectangle.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__SRV__DETAIL__CUSTM_RECTANGLE__BUILDER_HPP_
#define MY_ROBOT_INTERFACES__SRV__DETAIL__CUSTM_RECTANGLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robot_interfaces/srv/detail/custm_rectangle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_CustmRectangle_Request_width
{
public:
  explicit Init_CustmRectangle_Request_width(::my_robot_interfaces::srv::CustmRectangle_Request & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::srv::CustmRectangle_Request width(::my_robot_interfaces::srv::CustmRectangle_Request::_width_type arg)
  {
    msg_.width = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::srv::CustmRectangle_Request msg_;
};

class Init_CustmRectangle_Request_length
{
public:
  Init_CustmRectangle_Request_length()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustmRectangle_Request_width length(::my_robot_interfaces::srv::CustmRectangle_Request::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_CustmRectangle_Request_width(msg_);
  }

private:
  ::my_robot_interfaces::srv::CustmRectangle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::srv::CustmRectangle_Request>()
{
  return my_robot_interfaces::srv::builder::Init_CustmRectangle_Request_length();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_CustmRectangle_Response_area
{
public:
  Init_CustmRectangle_Response_area()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_robot_interfaces::srv::CustmRectangle_Response area(::my_robot_interfaces::srv::CustmRectangle_Response::_area_type arg)
  {
    msg_.area = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::srv::CustmRectangle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::srv::CustmRectangle_Response>()
{
  return my_robot_interfaces::srv::builder::Init_CustmRectangle_Response_area();
}

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__SRV__DETAIL__CUSTM_RECTANGLE__BUILDER_HPP_
