#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
using std::placeholders::_1;

class SimpleSubscriber : public rclcpp::Node {
  public:
    SimpleSubscriber() : Node("subscriber") {
      subscriber = this->create_subscription<std_msgs::msg::String>("talker", 10, std::bind(&SimpleSubscriber::talk_callback, this, _1));
    }

  private:
    void talk_callback(const std_msgs::msg::String& msg) const {
      RCLCPP_INFO(this->get_logger(), "received message: %s",msg.data.c_str());
    }

    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscriber; 
};



int main(int argc, char* argv[]) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<SimpleSubscriber>());
  rclcpp::shutdown();

  return 0;
}

// class MinimalSubscriber : public rclcpp::Node
// {
//   public:
//     MinimalSubscriber()
//     : Node("minimal_subscriber")
//     {
//       subscription_ = this->create_subscription<std_msgs::msg::String>(
//       "talker", 10, std::bind(&MinimalSubscriber::topic_callback, this, _1));
//     }

//   private:
//     void topic_callback(const std_msgs::msg::String & msg) const
//     {
//       RCLCPP_INFO(this->get_logger(), "I heard: '%s'", msg.data.c_str());
//     }
//     rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
// };

// int main(int argc, char * argv[])
// {
//   rclcpp::init(argc, argv);
//   rclcpp::spin(std::make_shared<MinimalSubscriber>());
//   rclcpp::shutdown();
//   return 0;
// }
