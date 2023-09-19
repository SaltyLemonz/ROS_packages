#include <polygon_base/regular_polygon.hpp>
#include <cmath>
namespace polygon_plugins
{
    class Square : public polygon_base::RegularPolygon {

        public:
            void initialize(double size) override {
                side_len_ = size;
            }
            
            double area() override {
                return side_len_ * side_len_;
            }

        protected:
            double side_len_;
    };

    class Triangle : public polygon_base::RegularPolygon {
        
        public:
            void initialize(double size) override {
                side_len_ = size;
            }
            
            double area() override {
                return 0.5 * side_len_ * getHeight();
            }

            double getHeight() {
                return (sqrt(3) / 2) * side_len_;
            }

        protected:
            double side_len_;
    };


}  // namespace polygon_plugins

#include <pluginlib/class_list_macros.hpp>
PLUGINLIB_EXPORT_CLASS(polygon_plugins::Square, polygon_base::RegularPolygon)
PLUGINLIB_EXPORT_CLASS(polygon_plugins::Triangle, polygon_base::RegularPolygon)