//===--- Hottub.cpp - -------------------------------------------*- C++ -*-===//
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

#include "Hottub.hpp"
#include "Utilities.hpp"
#include <iostream>
#include <cassert>

using namespace HFDP::Command::Remote;

Hottub::Hottub() :
  _on( false ), _temperature( 0 )
{
  PrintMessage("Hottub::Hottub");
}
void Hottub::on() const
{
  PrintMessage("Hottub::on");
  _on = true;
}
void Hottub::off() const
{
  PrintMessage("Hottub::off");
  _on = false;
}
void Hottub::bubblesOn() const
{
  PrintMessage("Hottub::bubblesOn");
  if( _on ) {
    std::cout << "Hottub is bubbling!" << std::endl;
  }
}
void Hottub::bubblesOff() const
{
  PrintMessage("Hottub::bubblesOff");
  if( _on ) {
    std::cout << "Hottub is not bubbling" << std::endl;
  }
}
void Hottub::jetsOn() const
{
  PrintMessage("Hottub::jetsOn");
  if( _on ) {
    std::cout << "Hottub jets are on" << std::endl;
  }
}
void Hottub::jetsOff() const
{
  PrintMessage("Hottub::jetsOff");
  if( _on ) {
    std::cout << "Hottub jets are off" << std::endl;
  }
}
void Hottub::setTemperature( int temperature )
{
  PrintMessage("Hottub::setTemperature");
  assert( temperature >= 0 );
  _temperature = temperature;
}
void Hottub::heat() const
{
  PrintMessage("Hottub::heat");
  _temperature = 105;
  std::cout << "Hottub is heating to a steaming 105 degrees"
    << std::endl;
}
void Hottub::cool() const
{
  PrintMessage("Hottub::cool");
  _temperature = 98;
  std::cout << "Hottub is cooling to 98 degrees" << std::endl;
}


