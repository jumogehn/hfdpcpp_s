//===--- LivingroomLightOffCommand.cpp - ------------------------*- C++ -*-===//
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

#include "LivingroomLightOffCommand.hpp"
#include "Utilities.hpp"
#include <cassert>

using namespace HFDP::Command::Remote;

LivingroomLightOffCommand::LivingroomLightOffCommand( const Light* light ) :
  _light( light )
{
  assert( light );
  PrintMessage("LivingroomLightOffCommand::"
                     "LivingroomLightOffCommand");
}

void LivingroomLightOffCommand::execute() const
{
  PrintMessage("LivingroomLightOffCommand::execute");
  _light->off();
}


