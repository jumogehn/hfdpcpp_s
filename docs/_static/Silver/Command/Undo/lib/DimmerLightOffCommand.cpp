//===--- DimmerLightOffCommand.cpp - ----------------------------*- C++ -*-===//
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


#include "DimmerLightOffCommand.hpp"
#include "Utilities.hpp"
#include <cassert>

using namespace HFDP::Command::Undo;

DimmerLightOffCommand::DimmerLightOffCommand( const Light* light ) :
  _light( light )
{
  assert( light );
  PrintMessage("DimmerLightOffCommand::DimmerLightOffCommand");
  _prevLevel = _light->getLevel();
}
void DimmerLightOffCommand::execute() const
{
  PrintMessage("DimmerLightOffCommand::execute");
  _prevLevel = _light->getLevel();
  _light->off();
}
void DimmerLightOffCommand::undo() const
{
  PrintMessage("DimmerLightOffCommand::undo");
  _light->dim( _prevLevel );
}

