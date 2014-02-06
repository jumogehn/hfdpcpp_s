//===--- SimpleRemoteControl.cpp - ------------------------------*- C++ -*-===//
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

#include "SimpleRemoteControl.hpp"
#include "Utilities.hpp"
#include <cassert>

using namespace HFDP::Command::SimpleRemote;


SimpleRemoteControl::SimpleRemoteControl() :
  _slot( 0 )
{
  PrintMessage("SimpleRemoteControl::SimpleRemoteControl");
}
void SimpleRemoteControl::setCommand( const Command* command )
{
  assert( command );
  PrintMessage("SimpleRemoteControl::setCommand");
  _slot = command;
}
void SimpleRemoteControl::buttonWasPressed() const
{
  assert( _slot );
  PrintMessage("SimpleRemoteControl::buttonWasPressed");
  _slot->execute();
}


