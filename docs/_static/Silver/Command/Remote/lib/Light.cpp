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

using namespace HFDP::Command::Remote;

Light::Light( const std::string location) :
  _location( location )
{
  PrintMessage("Light::Light");
}
void Light::on() const
{
  PrintMessage("Light::on");
  std::cout << _location.c_str() << " light is on" << std::endl;
}
void Light::off() const
{
  PrintMessage("Light::off");
  std::cout << _location.c_str() << " light is off" << std::endl;
}


