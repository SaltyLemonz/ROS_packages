
#include "rclcpp/rclcpp.hpp"
#include <rcl_interfaces/msg/parameter_event.hpp>
#include <memory>
#include <regex>

class SampleNodewithParam : public rclcpp::Node{
public:
    SampleNodewithParam() : Node("param_checker") {
        param_event_subscriber = this->create_subscription<rcl_interfaces::msg::ParameterEvent>("/parameter_events", 10, std::bind(&SampleNodewithParam::parameterEventCallback, this, std::placeholders::_1));
    }

private:
    void parameterEventCallback(const rcl_interfaces::msg::ParameterEvent::SharedPtr event) {
        std::regex re(".+");
        if (std::regex_match(event->node, re)) {
            for (const auto &new_param : event->changed_parameters) {
                RCLCPP_INFO(this->get_logger(), "Parameter event: Node \"%s\" changed parameter \"%s\"",event->node.c_str(), new_param.name.c_str());
            }
        }
    }

    rclcpp::Subscription<rcl_interfaces::msg::ParameterEvent>::SharedPtr param_event_subscriber;
};



int main(int argc, char* argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<SampleNodewithParam>());
    rclcpp::shutdown();
    return 0;
}
