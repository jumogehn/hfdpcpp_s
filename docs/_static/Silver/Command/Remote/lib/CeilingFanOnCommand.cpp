//===--- CeilingFanOnCommand.cpp - ------------------------------*- C++ -*-===//
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

#include "CeilingFanOnCommand.hpp"
#include "CeilingFan.hpp"
#include "Utilities.hpp"
#include <cassert>

using namespace HFDP::Command::Remote;

CeilingFanOnCommand::CeilingFanOnCommand( const CeilingFan* ceilingFan ) :
  _ceilingFan( ceilingFan )
{
  assert( ceilingFan );
  PrintMessage("CeilingFanOnCommand::CeilingFanOnCommand");
}

void CeilingFanOnCommand::execute() const
{
  PrintMessage("CeilingFanOnCommand::execute");
  _ceilingFan->high();
}

