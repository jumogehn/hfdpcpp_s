//===--- ThickCrustDough.cpp - ----------------------------------*- C++ -*-===//
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

#include "ThickCrustDough.hpp"
#include "Utilities.hpp"
#include <string>

using namespace HFDP::Factory::Abstract;

std::string ThickCrustDough::toString() const
{
  PrintMessage("ThickCrustDough::toString");
  return "Thick Crust Dough";
}
