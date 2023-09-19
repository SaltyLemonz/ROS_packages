#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <std_msgs/msg/char.hpp>

class KeyboardControlNode : public rclcpp::Node {
public:
    KeyboardControlNode() : Node("keyboard_control_node") {
        pub_ = this->create_publisher<geometry_msgs::msg::Twist>("cmd_vel", 10);
        sub_ = this->create_subscription<std_msgs::msg::Char>("keyboard", 10, std::bind(&KeyboardControlNode::keyboardCallback, this, std::placeholders::_1));
    }

private:
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr pub_;
    rclcpp::Subscription<std_msgs::msg::Char>::SharedPtr sub_;
    geometry_msgs::msg::Twist twist_msg_;

    void keyboardCallback(const std_msgs::msg::Char::SharedPtr msg) {
        char key = msg->data;

        // Map keyboard input to Twist commands
        switch (key) {
            case 'w':
                twist_msg_.linear.x = 0.2; // Forward motion
                twist_msg_.angular.z = 0.0; // No rotation
                break;
            case 's':
                twist_msg_.linear.x = -0.2; // Reverse motion
                twist_msg_.angular.z = 0.0; // No rotation
                break;
            case 'a':
                twist_msg_.linear.x = 0.0; // No linear motion
                twist_msg_.angular.z = 0.2; // Rotate left
                break;
            case 'd':
                twist_msg_.linear.x = 0.0; // No linear motion
                twist_msg_.angular.z = -0.2; // Rotate right
                break;
            default:
                twist_msg_.linear.x = 0.0; // No motion
                twist_msg_.angular.z = 0.0; // No rotation
                break;
        }

        // Publish the Twist message
        pub_->publish(twist_msg_);
    }
};

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<KeyboardControlNode>());
    rclcpp::shutdown();
    return 0;
}
