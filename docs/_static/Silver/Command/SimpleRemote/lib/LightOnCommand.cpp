//===--- LightOnCommand.cpp - -----------------------------------*- C++ -*-===//
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

#include "LightOnCommand.hpp"
#include "Utilities.hpp"
#include <iostream>
#include <cassert>

using namespace HFDP::Command::SimpleRemote;


LightOnCommand::LightOnCommand( const Light* light ) :
  _light( light )
{
  assert( light );
  PrintMessage("LightOnCommand::LightOnCommand");
}
void LightOnCommand::execute() const
{
  PrintMessage("LightOnCommand::execute");
  _light->on();
}

