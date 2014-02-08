//===--- Light.cpp - --------------------------------------------*- C++ -*-===//
//
//                     Head First Design Patterns
//
//
//===----------------------------------------------------------------------===//
///
/// \file
/// \brief
///
//===----------------------------------------------------------------------===//


#include "Light.hpp"
#include "Utilities.hpp"
#include <iostream>

using namespace HFDP::Command::Undo;

Light::Light( const std::string location ) :
  _location( location ), _level( 0 )
{
  PrintMessage("Light::Light");
}
void Light::on() const
{
  PrintMessage("Light::on");
  _level = 100;
  std::cout << _location.c_str() << " light is on" << std::endl;
}
void Light::off() const
{
  PrintMessage("Light::off");
  _level = 0;
  std::cout << _location.c_str() << " light is off" << std::endl;
}
void Light::dim( int level ) const
{
  PrintMessage("Light::dim");
  _level = level;
  if( _level == 0 ) {
    off();
  } else {
    std::cout << "Light is dimmed to " << _level << "%" << std::endl;
  }
}
int Light::getLevel() const
{
  PrintMessage("Light::getLevel");
  return _level;
}

