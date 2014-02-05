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
#include "CeilingFan.hpp"
#include "Utilities.hpp"
#include <cassert>

using namespace HFDP::Command::Remote;

CeilingFanOffCommand::CeilingFanOffCommand( const CeilingFan* ceilingFan ) :
  _ceilingFan( ceilingFan )
{
  assert( ceilingFan );
  PrintMessage("CeilingFanOffCommand::CeilingFanOffCommand");
}
void CeilingFanOffCommand::execute() const
{
  PrintMessage("CeilingFanOffCommand::execute");
  _ceilingFan->off();
}

