//===--- GarageDoorOpenCommand.cpp - ----------------------------*- C++ -*-===//
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


#include "GarageDoorOpenCommand.hpp"
#include "Utilities.hpp"
#include <cassert>

using namespace HFDP::Command::SimpleRemote;

GarageDoorOpenCommand::GarageDoorOpenCommand( const GarageDoor* garageDoor) :
  _garageDoor( garageDoor )
{
  assert( garageDoor );
  PrintMessage("GarageDoorOpenCommand::GarageDoorOpenCommand");
}
void GarageDoorOpenCommand::execute() const
{
  PrintMessage("GarageDoorOpenCommand::execute");
  _garageDoor->up();
}

