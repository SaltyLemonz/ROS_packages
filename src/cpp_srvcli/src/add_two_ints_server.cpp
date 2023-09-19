
#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/srv/add_two_ints.hpp"
#include <memory>

void add(const std::shared_ptr<example_interfaces::srv::AddTwoInts::Request> request, std::shared_ptr<example_interfaces::srv::AddTwoInts::Response> response) {
    response->sum = request->a + request->b;  
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "sum of %ld and %ld requested\n..", request->a, request->b);
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"Response: %ld",(long int)response->sum);
}


int main(int argc, char* argv[]) {
    rclcpp::init(argc, argv);

    auto node = rclcpp::Node::make_shared("add_two_ints_server");
    auto server = node->create_service<example_interfaces::srv::AddTwoInts>("add_two_ints", &add);

    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "checking the order of logs");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}