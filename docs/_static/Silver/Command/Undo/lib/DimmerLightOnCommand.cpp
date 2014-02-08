//===--- DimmerLightOnCommand.cpp - -----------------------------*- C++ -*-===//
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


#include "DimmerLightOnCommand.hpp"
#include "Utilities.hpp"
#include <cassert>

using namespace HFDP::Command::Undo;

DimmerLightOnCommand::DimmerLightOnCommand( const Light* light ) :
  _light( light )
{
  assert( light );
  PrintMessage("DimmerLightOnCommand::DimmerLightOnCommand");
  _prevLevel = _light->getLevel();
}
void DimmerLightOnCommand::execute() const
{
  PrintMessage("DimmerLightOnCommand::execute");
  _prevLevel = _light->getLevel();
  _light->dim( 75 );
}
void DimmerLightOnCommand::undo() const
{
  PrintMessage("DimmerLightOnCommand::undo");
  _light->dim( _prevLevel );
}

