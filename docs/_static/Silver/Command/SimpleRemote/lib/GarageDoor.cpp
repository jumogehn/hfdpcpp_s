//===--- GarageDoor.cpp - ---------------------------------------*- C++ -*-===//
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

#include "GarageDoor.hpp"
#include "Utilities.hpp"
#include <iostream>

using namespace HFDP::Command::SimpleRemote;

GarageDoor::GarageDoor()
{
  PrintMessage("GarageDoor::GarageDoor");
}
void GarageDoor::up() const
{
  PrintMessage("GarageDoor::up");
  std::cout << "Garage Door is Open" << std::endl;
}
void GarageDoor::down() const
{
  PrintMessage("GarageDoor::down");
  std::cout << "Garage Door is Closed" << std::endl;
}
void GarageDoor::stop() const
{
  PrintMessage("GarageDoor::stop");
  std::cout << "Garage Door is Stopped" << std::endl;
}
void GarageDoor::lightOn() const
{
  PrintMessage("GarageDoor::lightOn");
  std::cout << "Garage light is on" << std::endl;
}
void GarageDoor::lightOff() const
{
  PrintMessage("GarageDoor::lightOff");
  std::cout << "Garage light is off" << std::endl;
}


