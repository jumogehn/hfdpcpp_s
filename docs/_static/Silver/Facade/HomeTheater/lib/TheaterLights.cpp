
#include "TheaterLights.hpp"
#include <iostream>
#include <string>

using namespace HeadFirstDesignPatterns::Facade::HomeTheater;

TheaterLights::TheaterLights( std::string description ) :
  _description( description )
{
  std::cout << "TheaterLights::TheaterLights" << std::endl;
}
void TheaterLights::on()
{
  std::cout << "TheaterLights::on" << std::endl;
  std::cout << _description.c_str() << " on" << std::endl;
}

void TheaterLights::off()
{
  std::cout << "TheaterLights::off" << std::endl;
  std::cout << _description.c_str() << " off" << std::endl;
}

void TheaterLights::dim( int level )
{
  std::cout << "TheaterLights::dim" << std::endl;
  std::cout << _description.c_str() << " dimming to " << level
    << "%" << std::endl;
}

std::string TheaterLights::toString()
{
  std::cout << "TheaterLights::toString" << std::endl;
  return _description;
}


