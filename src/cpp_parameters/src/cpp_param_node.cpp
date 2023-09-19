#include "rclcpp/rclcpp.hpp"
#include <chrono>
#include <string>

//for using time literals for seconds, milliseconds, etc
using namespace std::chrono_literals;

class Param : public rclcpp::Node {
    public:
    //constructor
    Param() : Node("param_node") {
        //create a parameter with name and default value
        this->declare_parameter("param_name","world");
        //initialize timer with interval duration and bind it to callback function
        timer = this->create_wall_timer(1000ms, std::bind(&Param::timer_callback, this));
    }
    //callback function 
    void timer_callback() {
        //get user-entered parameter value as string
        std::string get_param = this->get_parameter("param_name").as_string();
        //print that shit to screen
        RCLCPP_INFO(this->get_logger(), "Hello %s!", get_param.c_str());
        
        //NECESSARY-> return parameter value back to default value
        //create vector of all custom parameters
        std::vector<rclcpp::Parameter> reset_param {rclcpp::Parameter("param_name","world")};
        //set all parameters back to parameters in vector
        this->set_parameters(reset_param);
    }

    private:
    //timer object (private preferred)
    rclcpp::TimerBase::SharedPtr timer;
};

int main(int argc, char* argv[]) {

    rclcpp::init(argc, argv);
    //shared pointer of node Param
    auto node = std::make_shared<Param>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;

} 