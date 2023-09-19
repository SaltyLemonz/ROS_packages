
#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/srv/add_two_ints.hpp"

#include <chrono>
#include <cstdlib>
#include <memory>

using namespace std::chrono_literals;

int main(int argc, char* argv[]) {
    rclcpp::init(argc, argv);

    //check if argument count correct else terminate with 1
      if (argc != 3) {
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "usage: add_two_ints_client X Y");
      return 1;
  }

    auto node = rclcpp::Node::make_shared("add_two_ints_client");
    auto client = node->create_client<example_interfaces::srv::AddTwoInts>("add_two_ints");

    auto request = std::make_shared<example_interfaces::srv::AddTwoInts::Request>();

    //take arguments into request
    request->a = atoll(argv[1]);
    request->b = atoll(argv[2]);

    //check error in service request
    if (!client->wait_for_service(1s)) {
        if (!rclcpp::ok()) {
            RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for service. Exiting");
        }

        RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"Service unavailabe, retrying...");
    }

    //result object
    auto result = client->async_send_request(request);

    //if result success print sum else print failed
    if (rclcpp::spin_until_future_complete(node, result) ==
    rclcpp::FutureReturnCode::SUCCESS)
  {
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Sum: %ld", result.get()->sum);
  } else {
    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service add_two_ints");
  }

    rclcpp::shutdown();
    return 0;
}