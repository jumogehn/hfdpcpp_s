//===--- TV.cpp - -----------------------------------------------*- C++ -*-===//
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

#include "TV.hpp"
#include "Utilities.hpp"
#include <iostream>

using namespace HFDP::Command::Remote;

TV::TV( const std::string location ) :
  _channel( 0 ), _location( location )
{
  PrintMessage("TV::TV");
}
void TV::on() const
{
  PrintMessage("TV::on");
  std::cout << _location.c_str() << " TV is on" << std::endl;
}
void TV::off() const
{
  PrintMessage("TV::off");
  std::cout << _location.c_str() << " TV is off" << std::endl;
}
void TV::setInputChannel()
{
  PrintMessage("TV::setInputChannel");
  _channel = 3;
  std::cout << _location.c_str() << " Channel is set for VCR"
    << std::endl;
}


