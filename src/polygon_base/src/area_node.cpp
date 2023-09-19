#include <cstdio>
#include <pluginlib/class_loader.hpp>
#include <polygon_base/regular_polygon.hpp>

int main(int argc, char ** argv)
{
  //avoid unused parameter warnings;
  (void) argc;
  (void) argv;

  //plugin loader
  pluginlib::ClassLoader<polygon_base::RegularPolygon> poly_loader("polygon_base","polygon_base::RegularPolygon");

  try
  {
    //type will be: std::shared_ptr<polygon_base::RegularPolygon>

    //create plugin instance for Square
    auto square = poly_loader.createSharedInstance("polygon_plugins::Square");
    //create plugin instance for Triangle
    auto triangle = poly_loader.createSharedInstance("polygon_plugins::Triangle");

      //set polygon side length
      square->initialize(12.0);
      triangle->initialize(16.0);

      //display
      printf("Square's area is: %.2lf\n",square->area());
      printf("Triangle's area is: %.2lf\n",triangle->area());
  }
  catch(pluginlib::PluginlibException& ex)
  {
    printf("The plugin failed to load. Error: %s\n",ex.what());
  }
  
  return 0;
}
