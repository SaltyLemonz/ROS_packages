cmake_minimum_required(VERSION 3.8)
project(arm_checker)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(tut_interfaces REQUIRED)

add_executable(server src/arm_server.cpp)
ament_target_dependencies(server rclcpp tut_interfaces)

add_executable(client src/arm_client.cpp)
ament_target_dependencies(client rclcpp tut_interfaces)

install(TARGETS
  server
  client
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
