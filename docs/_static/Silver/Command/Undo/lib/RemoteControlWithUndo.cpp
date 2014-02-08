//===--- RemoteControlWithUndo.cpp - ----------------------------*- C++ -*-===//
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


#include "RemoteControlWithUndo.hpp"
#include "NoCommand.hpp"
#include "Utilities.hpp"
#include <sstream>
#include <cassert>
#include <typeinfo>

using namespace HFDP::Command::Undo;

RemoteControlWithUndo::RemoteControlWithUndo()
{
  PrintMessage("RemoteControlWithUndo::RemoteControlWithUndo");
  _noCommand = new NoCommand();
  for( int i = 0; i < SLOTS; i++ ) {
    _onCommands[i] = _noCommand;
    _offCommands[i] = _noCommand;
  }
  _undoCommand = _noCommand;
}
RemoteControlWithUndo::~RemoteControlWithUndo()
{
  PrintMessage("RemoteControlWithUndo::~RemoteControlWithUndo");
  delete _noCommand;
}
void RemoteControlWithUndo::setCommand( int slot, Command* onCommand, Command* offCommand )
{
  assert( slot <= SLOTS ); assert( onCommand ); assert( offCommand );
  PrintMessage("RemoteControlWithUndo::setCommand");
  _onCommands[slot]  = onCommand;
  _offCommands[slot] = offCommand;
}
void RemoteControlWithUndo::onButtonWasPushed( int slot ) const
{
  assert( slot <= SLOTS );
  PrintMessage("RemoteControlWithUndo::onButtonWasPushed");
  _onCommands[slot]->execute();
  _undoCommand = _onCommands[slot];
}
void RemoteControlWithUndo::offButtonWasPushed( int slot ) const
{
  assert( slot <= SLOTS );
  PrintMessage("RemoteControlWithUndo::offButtonWasPushed");
  _offCommands[slot]->execute();
  _undoCommand = _offCommands[slot];
}
void RemoteControlWithUndo::undoButtonWasPushed() const
{
  PrintMessage("RemoteControlWithUndo::undoButtonWasPushed");
  _undoCommand->undo();
}
std::string RemoteControlWithUndo::toString() const
{
  PrintMessage("RemoteControlWithUndo::toString");
  std::stringstream value;
  value << std::endl << "------ Remote Control -------" << std::endl;
  for( int i = 0; i < SLOTS; i++ ) {
    value << "[slot " << i << "] ";
    value << typeid( *_onCommands[i] ).name();
    value << "    ";
    value << typeid( *_offCommands[i] ).name();
    value << std::endl;
  }
  value << "[undo] " << typeid( *_undoCommand ).name() << std::endl;

  return value.str();
}


