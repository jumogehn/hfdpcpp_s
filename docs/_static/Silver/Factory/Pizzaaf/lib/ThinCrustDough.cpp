//===--- ThinCrustDough.cpp - -----------------------------------*- C++ -*-===//
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

#include "ThinCrustDough.hpp"
#include "Utilities.hpp"
#include <string>

using namespace HFDP::Factory::Abstract;

std::string ThinCrustDough::toString() const
{
  PrintMessage("ThinCrustDough::toString");
  return "Thin Crust Dough";
}
