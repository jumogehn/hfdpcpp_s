//===--- CeilingFanLowCommand.cpp - -----------------------------*- C++ -*-===//
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


#include "CeilingFanLowCommand.hpp"
#include "Utilities.hpp"
#include <cassert>

using namespace HFDP::Command::Undo;

CeilingFanLowCommand::CeilingFanLowCommand( const CeilingFan* ceilingFan ) :
  _ceilingFan( ceilingFan )
{
  PrintMessage("CeilingFanLowCommand::CeilingFanLowCommand");
  assert( ceilingFan );
  _prevSpeed = _ceilingFan->getSpeed();
}
void CeilingFanLowCommand::execute() const
{
  PrintMessage("CeilingFanLowCommand::execute");
  _prevSpeed = _ceilingFan->getSpeed();
  _ceilingFan->low();
}
void CeilingFanLowCommand::undo() const
{
  PrintMessage("CeilingFanLowCommand::undo");
  if( _prevSpeed == CeilingFan::HIGH ) {
    _ceilingFan->high();
  } else if( _prevSpeed == CeilingFan::MEDIUM ) {
    _ceilingFan->medium();
  } else if( _prevSpeed == CeilingFan::LOW ) {
    _ceilingFan->low();
  } else if( _prevSpeed == CeilingFan::OFF ) {
    _ceilingFan->off();
  }
}

