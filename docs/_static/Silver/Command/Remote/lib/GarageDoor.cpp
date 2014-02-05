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
#include <string>
#include <iostream>


using namespace HFDP::Command::Remote;

GarageDoor::GarageDoor( const std::string location ) :
  _location( location )
{
  PrintMessage("GarageDoor::GarageDoor");
}

void GarageDoor::up() const
{
  PrintMessage("GarageDoor::up");
  std::cout << _location.c_str() << " Door is Up" << std::endl;
}

void GarageDoor::down() const
{
  PrintMessage("GarageDoor::down");
  std::cout << _location.c_str() << " Door is Down" << std::endl;
}

void GarageDoor::stop() const
{
  PrintMessage("GarageDoor::stop");
  std::cout << _location.c_str() << " Door is Stopped" << std::endl;
}

void GarageDoor::lightOn() const
{
  PrintMessage("GarageDoor::lightOn");
  std::cout << _location.c_str() << " light is on" << std::endl;
}

void GarageDoor::lightOff() const
{
  PrintMessage("GarageDoor::lightOff");
  std::cout << _location.c_str() << " light is off" << std::endl;
}


