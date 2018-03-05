
#include "Screen.hpp"

#include <iostream>
#include <string>

using namespace HeadFirstDesignPatterns::Facade::HomeTheater;

Screen::Screen( std::string description ) :
  _description( description )
{
  std::cout << "Screen::Screen" << std::endl;
}
void Screen::up()
{
  std::cout << "Screen::up" << std::endl;
  std::cout << _description.c_str() << " going up" << std::endl;
}
void Screen::down()
{
  std::cout << "Screen::down" << std::endl;
  std::cout << _description.c_str() << " going down" << std::endl;
}
std::string Screen::toString()
{
  std::cout << "Screen::toString" << std::endl;
  return _description;
}


