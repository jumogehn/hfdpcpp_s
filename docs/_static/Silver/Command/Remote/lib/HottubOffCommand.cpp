//===--- HottubOffCommand.cpp - ---------------------------------*- C++ -*-===//
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

#include "HottubOffCommand.hpp"
#include "Utilities.hpp"
#include <cassert>

using namespace HFDP::Command::Remote;

HottubOffCommand::HottubOffCommand( const Hottub* hottub ) :
  _hottub( hottub )
{
  PrintMessage("HottubOffCommand::HottubOffCommand");
  assert( hottub );
}

void HottubOffCommand::execute() const
{
  PrintMessage("HottubOffCommand::execute");
  _hottub->cool();
  _hottub->off();
}


