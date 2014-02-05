//===--- HottubOnCommand.cpp - ----------------------------------*- C++ -*-===//
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

#include "HottubOnCommand.hpp"
#include "Hottub.hpp"
#include "Utilities.hpp"
#include <cassert>

using namespace HFDP::Command::Remote;

HottubOnCommand::HottubOnCommand( const Hottub* hottub ) :
  _hottub( hottub )
{
  PrintMessage("HottubOnCommand::HottubOnCommand");
  assert( hottub );
}

void HottubOnCommand::execute() const
{
  PrintMessage("HottubOnCommand::execute");
  _hottub->on();
  _hottub->heat();
  _hottub->bubblesOn();
}

