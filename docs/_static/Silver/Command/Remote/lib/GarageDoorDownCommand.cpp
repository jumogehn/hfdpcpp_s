//===--- GarageDoorDownCommand.cpp - ----------------------------*- C++ -*-===//
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

#include "GarageDoorDownCommand.hpp"
#include "GarageDoor.hpp"
#include "Utilities.hpp"
#include <cassert>

using namespace HFDP::Command::Remote;

GarageDoorDownCommand::GarageDoorDownCommand( const GarageDoor* garageDoor ) :
  _garageDoor( garageDoor )
{
  assert( garageDoor );
  PrintMessage("GarageDoorDownCommand::GarageDoorDownCommand");
}

void GarageDoorDownCommand::execute() const
{
  PrintMessage("GarageDoorDownCommand::execute");
  _garageDoor->down();
}

