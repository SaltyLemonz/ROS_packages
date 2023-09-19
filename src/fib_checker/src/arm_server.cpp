
#include "rclcpp/rclcpp.hpp"
#include "tut_interfaces/srv/check_fib.hpp"

void armstrong(const std::shared_ptr<tut_interfaces::srv::CheckFib::Request> request, const std::shared_ptr<tut_interfaces::srv::CheckFib::Response> response) {
    int arm = (int)request->num;
    int s {};
    //armstrong part
    while (arm) {
        int d = arm%10;
        s += d*d*d;
        arm /= 10;
    }
    response->data = ((s == request->num) ? true : false);
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"Requesting to check if %ld is Armstrong number.",request->num);
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Response : %s", response->data ? "true" : "false");
}

int main(int argc, char* argv[]) {

    //init 
    rclcpp::init(argc, argv);
    //node
    auto node = rclcpp::Node::make_shared("armstrong_check");
    //server
    auto server = node->create_service<tut_interfaces::srv::CheckFib>("arm_checker", &armstrong);
    //first log
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"Starting Service ARM_CHECKER");
    //process messages
    rclcpp::spin(node);
    //shutdown
    rclcpp::shutdown();
    return 0;
}