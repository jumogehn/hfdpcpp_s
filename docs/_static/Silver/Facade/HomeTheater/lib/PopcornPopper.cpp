
#include "PopcornPopper.hpp"

#include <iostream>
#include <string>

using namespace HeadFirstDesignPatterns::Facade::HomeTheater;

PopcornPopper::PopcornPopper( std::string description) :
  _description( description )
{
  std::cout << "PopcornPopper::PopcornPopper" << std::endl;
}
void PopcornPopper::on() const
{
  std::cout << "PopcornPopper::on" << std::endl;
  std::cout << _description.c_str() << " on" << std::endl;
}
void PopcornPopper::off() const
{
  std::cout << "PopcornPopper::off" << std::endl;
  std::cout << _description.c_str() << " off" << std::endl;
}
void PopcornPopper::pop() const
{
  std::cout << "PopcornPopper::pop" << std::endl;
  std::cout << _description.c_str() << " popping popcorn!"
    << std::endl;
}
std::string PopcornPopper::toString() const
{
  std::cout << "PopcornPopper::toString" << std::endl;
  return _description;
}


