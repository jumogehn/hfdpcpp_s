//===--- CeilingFanOffCommand.cpp - -----------------------------*- C++ -*-===//
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


#include "CeilingFanOffCommand.hpp"
#include "Utilities.hpp"
#include <cassert>

using namespace HFDP::Command::Undo;

CeilingFanOffCommand::CeilingFanOffCommand( const CeilingFan* ceilingFan ) :
  _ceilingFan( ceilingFan )
{
  assert( ceilingFan );
  PrintMessage("CeilingFanOffCommand::CeilingFanOffCommand");
  _prevSpeed = _ceilingFan->getSpeed();
}
void CeilingFanOffCommand::execute() const
{
  PrintMessage("CeilingFanOffCommand::execute");
  _prevSpeed = _ceilingFan->getSpeed();
  _ceilingFan->off();
}
void CeilingFanOffCommand::undo() const
{
  PrintMessage("CeilingFanOffCommand::undo");
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

