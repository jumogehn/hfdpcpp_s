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

using namespace HFDP::Command::SimpleRemote;


Light::Light()
{
  PrintMessage("Light::Light");
}
void Light::on() const
{
  PrintMessage("Light::on");
  std::cout << "Light is on" << std::endl;
}
void Light::off() const
{
  PrintMessage("Light::off");
  std::cout << "Light is off" << std::endl;
}

