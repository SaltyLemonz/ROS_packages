
#include "rclcpp/rclcpp.hpp"
#include "tut_interfaces/srv/check_fib.hpp"

#include <chrono>
#include <memory>

using namespace std::chrono_literals;


int main(int argc, char* argv[]) {
    rclcpp::init(argc, argv);
    
    if (argc != 2) {
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "usage: armstrong_check_client x");
        return 1;
    }

    //node
    auto node = rclcpp::Node::make_shared("armstrong_check_client");

    //client
    auto client = node->create_client<tut_interfaces::srv::CheckFib>("arm_checker");

    //request
    auto request = std::make_shared<tut_interfaces::srv::CheckFib::Request>();
    request->num = atoll(argv[1]);

    //check error
    if (!client->wait_for_service(1s)) {
        if (!rclcpp::ok()) {
            RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for service. Exiting");
        }

        RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"Service unavailabe, retrying...");
    }
    
    //result
    auto result = client->async_send_request(request);

    if (rclcpp::spin_until_future_complete(node, result) == rclcpp::FutureReturnCode::SUCCESS) {
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Answer: %s", result.get()->data ? "Armstrong" : "Not Armstrong");
    }
    else {
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Failed to call service armstrong_check.");
    }

    rclcpp::shutdown();
    return 0;
}