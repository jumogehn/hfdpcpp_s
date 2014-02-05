//===--- GarageDoorUpCommand.cpp - ------------------------------*- C++ -*-===//
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

#include "GarageDoorUpCommand.hpp"
#include "GarageDoor.hpp"
#include "Utilities.hpp"
#include <cassert>

using namespace HFDP::Command::Remote;

GarageDoorUpCommand::GarageDoorUpCommand( const GarageDoor* garageDoor ) :
  _garageDoor( garageDoor )
{
  assert( garageDoor );
  PrintMessage("GarageDoorUpCommand::GarageDoorUpCommand");
}

void GarageDoorUpCommand::execute() const
{
  PrintMessage("GarageDoorUpCommand::execute");
  _garageDoor->up();
}

