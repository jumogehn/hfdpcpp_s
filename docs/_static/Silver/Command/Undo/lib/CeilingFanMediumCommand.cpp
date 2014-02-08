//===--- CeilingFanMediumCommand.cpp - --------------------------*- C++ -*-===//
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

#include "CeilingFanMediumCommand.hpp"
#include "Utilities.hpp"
#include <cassert>

using namespace HFDP::Command::Undo;

CeilingFanMediumCommand::CeilingFanMediumCommand( const CeilingFan* ceilingFan ) :
  _ceilingFan( ceilingFan )
{
  assert( ceilingFan );
  PrintMessage("CeilingFanMediumCommand"
                     "::CeilingFanMediumCommand");
  _prevSpeed = _ceilingFan->getSpeed();
}
void CeilingFanMediumCommand::execute() const
{
  PrintMessage("CeilingFanMediumCommand::execute");
  _prevSpeed = _ceilingFan->getSpeed();
  _ceilingFan->medium();
}
void CeilingFanMediumCommand::undo() const
{
  PrintMessage("CeilingFanMediumCommand::undo");
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

