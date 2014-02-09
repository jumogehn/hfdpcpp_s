//===--- SlicedPepperoni.cpp - ----------------------------------*- C++ -*-===//
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

#include "SlicedPepperoni.hpp"
#include "Utilities.hpp"
#include <string>

using namespace HFDP::Factory::Abstract;

std::string SlicedPepperoni::toString() const
{
  PrintMessage("SlicedPepperoni::toString");
  return "Sliced Pepperoni";
}
