//===--- LivingroomLightOnCommand.cpp - -------------------------*- C++ -*-===//
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

#include "LivingroomLightOnCommand.hpp"
#include "Utilities.hpp"
#include <cassert>

using namespace HFDP::Command::Remote;

LivingroomLightOnCommand::LivingroomLightOnCommand( const Light* light ) :
  _light( light )
{
  assert( light );
  PrintMessage("LivingroomLightOnCommand::"
                     "LivingroomLightOnCommand");
}

void LivingroomLightOnCommand::execute() const
{
  PrintMessage("LivingroomLightOnCommand::execute");
  _light->on();
}

