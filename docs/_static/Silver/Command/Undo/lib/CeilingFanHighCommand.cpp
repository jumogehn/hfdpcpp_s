//===--- CeilingFanHighCommand.cpp - ----------------------------*- C++ -*-===//
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


#include "CeilingFanHighCommand.hpp"
#include "Utilities.hpp"
#include <cassert>

using namespace HFDP::Command::Undo;

CeilingFanHighCommand::CeilingFanHighCommand( const CeilingFan* ceilingFan ) :
  _ceilingFan( ceilingFan )
{
  assert( ceilingFan );
  PrintMessage("CeilingFanHighCommand::CeilingFanHighCommand");
  _prevSpeed = _ceilingFan->getSpeed();
}
void CeilingFanHighCommand::execute() const
{
  PrintMessage("CeilingFanHighCommand::execute");
  _prevSpeed = _ceilingFan->getSpeed();
  _ceilingFan->high();
}
void CeilingFanHighCommand::undo() const
{
  PrintMessage("CeilingFanHighCommand::undo");
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
