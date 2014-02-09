//===--- ReggianoCheese.cpp - -----------------------------------*- C++ -*-===//
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

#include "ReggianoCheese.hpp"
#include "Utilities.hpp"
#include <string>

using namespace HFDP::Factory::Abstract;

std::string ReggianoCheese::toString() const
{
  PrintMessage("ReggianoCheese::toString");
  return "Reggiano Cheese";
}
