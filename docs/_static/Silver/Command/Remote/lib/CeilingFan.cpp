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
#include <string>
#include <iostream>


using namespace HFDP::Command::Remote;

CeilingFan::CeilingFan( const std::string location ) :
  _level( LOW ), _location( location )
{
  PrintMessage("CeilingFan::CeilingFan");
}

void CeilingFan::high() const
{
  PrintMessage("CeilingFan::high");
  _level = HIGH;
  std::cout << _location.c_str()
    << " ceiling fan is on high" << std::endl;
}

void CeilingFan::medium() const
{
  PrintMessage("CeilingFan::medium");
  _level = MEDIUM;
  std::cout << _location.c_str()
    << " ceiling fan is on medium" << std::endl;
}

void CeilingFan::low() const
{
  PrintMessage("CeilingFan::low");
  _level = LOW;
  std::cout << _location.c_str()
    << " ceiling fan is on low" << std::endl;
}

void CeilingFan::off() const
{
  PrintMessage("CeilingFan::off");
  _level = 0;
  std::cout << _location.c_str() << " ceiling fan is off" << std::endl;
}

int CeilingFan::getSpeed() const
{
  PrintMessage("CeilingFan::getSpeed");
  return _level;
}


