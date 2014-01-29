//===--- WildTurkey.cpp - ---------------------------------------*- C++ -*-===//
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

#include "WildTurkey.hpp"
#include "Utilities.hpp"

using namespace HFDP::Adapter::Ducks;

void WildTurkey::fly() const
{
  PrintMessage("WildTurkey::fly");
  PrintMessage("I'm flying a short distance");
}

void WildTurkey::gobble() const
{
  PrintMessage("WildTurkey::gobble");
  PrintMessage("Gobble gobble");
}

