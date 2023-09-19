#!/usr/bin/env python3
import rclpy
from rclpy.node import Node 


class MyNode(Node):
    def __init__(self):
        super().__init__("my_node")
        self.get_logger().info("Hello ROS2")
        self.counter_ = 0
        self.create_timer(1, self.timer_callback)

    def timer_callback(self):
        self.counter_ += 1
        self.get_logger().info("Hello ROS2: {}".format(self.counter_))


def main(args=None):
    rclpy.init(args=args)
    node = MyNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()