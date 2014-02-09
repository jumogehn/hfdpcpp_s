//===--- FreshClams.cpp - ---------------------------------------*- C++ -*-===//
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

#include "FreshClams.hpp"
#include "Utilities.hpp"
#include <string>

using namespace HFDP::Factory::Abstract;

std::string FreshClams::toString() const
{
  PrintMessage("FreshClams::toString");
  return "Fresh Clams from Long Island Sound";
}
