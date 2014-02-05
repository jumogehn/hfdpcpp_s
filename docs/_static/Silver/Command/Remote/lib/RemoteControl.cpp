#//===--- RemoteControl.cpp - -----------------------------------*- C++ -*-===//
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

#include "RemoteControl.hpp"
#include "NoCommand.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <sstream>
#include <typeinfo>

using namespace HFDP::Command::Remote;


RemoteControl::RemoteControl()
{
  PrintMessage("RemoteControl::RemoteControl");
  _noCommand = new NoCommand();
  for( int i = 0; i < SLOTS; i++ ) {
    _onCommands[i]  = _noCommand;
    _offCommands[i] = _noCommand;
  }
}

RemoteControl::~RemoteControl()
{
  PrintMessage("RemoteControl::~RemoteControl");
  delete _noCommand;
}

void RemoteControl::setCommand( int slot, Command* onCommand, Command* offCommand )
{
  PrintMessage("RemoteControl::setCommand");
  assert( slot <= SLOTS ); assert( onCommand ); assert ( offCommand );
  _onCommands[slot] = onCommand;
  _offCommands[slot] = offCommand;
}

void RemoteControl::onButtonWasPushed( int slot ) const
{
  PrintMessage("RemoteControl::onButtonWasPushed");
  assert( slot <= SLOTS );
  _onCommands[slot]->execute();
}

void RemoteControl::offButtonWasPushed( int slot ) const
{
  PrintMessage("RemoteControl::offButtonWasPushed");
  assert( slot <= SLOTS );
  _offCommands[slot]->execute();
}

std::string RemoteControl::toString() const
{
  PrintMessage("RemoteControl::toString");
  std::stringstream value;
  value << "\n------ Remote Control -------\n" << std::endl;
  for( int i = 0; i < SLOTS; i++ ) {
    value << "[slot " << i << "] ";
    value << typeid( *_onCommands[i] ).name();
    value << "    ";
    value << typeid( *_offCommands[i] ).name();
    value << std::endl;
  }
  return value.str();
}


