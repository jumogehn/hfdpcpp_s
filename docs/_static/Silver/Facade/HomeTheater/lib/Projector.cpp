
#include "Projector.hpp"

#include <cassert>
#include <iostream>
#include <string>
#include "DvdPlayer.hpp"

using namespace HeadFirstDesignPatterns::Facade::HomeTheater;

Projector::Projector( std::string description, DvdPlayer* dvdPlayer ) :
  _description( description ), _dvdPlayer( dvdPlayer )
{
  assert( dvdPlayer );
  std::cout << "Projector::Projector" << std::endl;
}
void Projector::on()
{
  std::cout << "Projector::on" << std::endl;
  std::cout << _description.c_str() << " on" << std::endl;
}
void Projector::off()
{
  std::cout << "Projector::off" << std::endl;
  std::cout << _description.c_str() << " off" << std::endl;
}
void Projector::wideScreenMode()
{
  std::cout << "Projector::wideScreenMode" << std::endl;
  std::cout << _description.c_str()
    << " in widescreen mode (16x9 aspect ratio)" << std::endl;
}
void Projector::tvMode()
{
  std::cout << "Projector::tvMode" << std::endl;
  std::cout << _description.c_str()
    << " in tv mode (4x3 aspect ratio)" << std::endl;
}
std::string Projector::toString()
{
  std::cout << "Projector::toString" << std::endl;
  return _description;
}



