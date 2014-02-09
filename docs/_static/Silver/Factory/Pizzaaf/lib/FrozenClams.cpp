//===--- FrozenClams.cpp - --------------------------------------*- C++ -*-===//
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

#include "FrozenClams.hpp"
#include "Utilities.hpp"
#include <string>

using namespace HFDP::Factory::Abstract;

std::string FrozenClams::toString() const
{
  PrintMessage("FrozenClams::toString");
  return "Frozen Clams from Chesapeake Bay";
}
