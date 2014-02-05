//===--- LightOffCommand.cpp - ----------------------------------*- C++ -*-===//
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

#include "LightOffCommand.hpp"
#include "Utilities.hpp"
#include <cassert>

using namespace HFDP::Command::Remote;

LightOffCommand::LightOffCommand( const Light* light  ) :
  _light( light )
{
  assert( light );
  PrintMessage("LightOffCommand::LightOffCommand");
}

void LightOffCommand::execute() const
{
  PrintMessage("LightOffCommand::execute");
  _light->off();
}


