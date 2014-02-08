//===--- CeilingFan.cpp - ---------------------------------------*- C++ -*-===//
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

#include "CeilingFan.hpp"
#include "Utilities.hpp"
#include <iostream>

using namespace HFDP::Command::Undo;

CeilingFan::CeilingFan( std::string location ) :
  _speed( OFF ), _location( location )
{
  PrintMessage("CeilingFan::CeilingFan");
}
void CeilingFan::high() const
{
  PrintMessage("CeilingFan::high");
  _speed = HIGH;
  std::cout << _location.c_str() << " ceiling fan is on high"
    << std::endl;
}
void CeilingFan::medium() const
{
  PrintMessage("CeilingFan::medium");
  _speed = MEDIUM;
  std::cout << _location.c_str() << " ceiling fan is on medium"
    << std::endl;
}
void CeilingFan::low() const
{
  PrintMessage("CeilingFan::low");
  _speed = LOW;
  std::cout << _location.c_str() << " ceiling fan is on low"
    << std::endl;
}
void CeilingFan::off() const
{
  PrintMessage("CeilingFan::off");
  _speed = OFF;
  std::cout << _location.c_str() << " ceiling fan is off"
    << std::endl;
}
int CeilingFan::getSpeed() const
{
  PrintMessage("CeilingFan::getSpeed");
  return _speed;
}


