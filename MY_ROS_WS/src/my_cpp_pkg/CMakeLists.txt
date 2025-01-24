cmake_minimum_required(VERSION 3.8)
project(my_cpp_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(example_interfaces REQUIRED)
find_package(my_robot_interfaces REQUIRED)

#add_executable(cpp_node src/my_1st_node.cpp)
#dd_executable(cpp_node_oop src/my_cpp_oop_node.cpp)
# add_executable(robot_news_station src/PubSub/Publisher_Robot_Station1.cpp)
# add_executable(rns_sub_1 src/PubSub/Subscriber_Robot_Station1.cpp)
#  add_executable(number_publisher src/Activity_0001/Act_Pub.cpp)
#  add_executable(number_counter src/Activity_0001/Act_Sub.cpp)
# add_executable(add_two_ints_server src/Services/Two_int_Server.cpp)
# add_executable(add_two_ints_client_no src/Services/cli_no_oop.cpp)
# add_executable(add_two_ints_client_o src/Services/cli_oop.cpp)
#add_executable(mycli src/Services/test.cpp)
#add_executable(Hwrdstat_pub src/Hrdstat_pub.cpp)
#add_executable(Hwrdstat_sub src/Hrdstat_sub.cpp)
#  add_executable(Battery_node src/Activity_0004/Battery_node.cpp)
#  add_executable(Led_panel_node src/Activity_0004/LED_Panel_node.cpp)
add_executable(number_publisher_param src/Parameters/Act_Pub.cpp)
add_executable(number_counter_param src/Parameters/Act_Sub.cpp)

#ament_target_dependencies(cpp_node rclcpp)
#ament_target_dependencies(cpp_node_oop rclcpp)
# ament_target_dependencies(robot_news_station rclcpp example_interfaces)
# ament_target_dependencies(rns_sub_1 rclcpp example_interfaces)
#  ament_target_dependencies(number_publisher rclcpp example_interfaces)
#  ament_target_dependencies(number_counter rclcpp example_interfaces)
#ament_target_dependencies(add_two_ints_server rclcpp example_interfaces)
#ament_target_dependencies(add_two_ints_client_no rclcpp example_interfaces)
#ament_target_dependencies(add_two_ints_client_o rclcpp example_interfaces)
#ament_target_dependencies(mycli rclcpp example_interfaces)
#ament_target_dependencies(Hwrdstat_pub rclcpp my_robot_interfaces)
#ament_target_dependencies(Hwrdstat_sub rclcpp my_robot_interfaces)
# ament_target_dependencies(Battery_node rclcpp my_robot_interfaces)
# ament_target_dependencies(Led_panel_node rclcpp my_robot_interfaces)
ament_target_dependencies(number_publisher_param rclcpp example_interfaces)
ament_target_dependencies(number_counter_param rclcpp example_interfaces)

install(TARGETS
  #cpp_node
  #cpp_node_oop
  # robot_news_station
  # rns_sub_1
  # number_publisher
  # number_counter
  #add_two_ints_server
  #add_two_ints_client_no
  #add_two_ints_client_o
  #Server_abc
  #mycli
  #Hwrdstat_pub
  #Hwrdstat_sub
  # Battery_node
  # Led_panel_node
  number_publisher_param
  number_counter_param
  DESTINATION lib/${PROJECT_NAME}
)
ament_package()
