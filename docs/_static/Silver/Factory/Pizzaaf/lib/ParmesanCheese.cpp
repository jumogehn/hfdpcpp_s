//===--- ParmesanCheese.cpp - -----------------------------------*- C++ -*-===//
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

#include "ParmesanCheese.hpp"
#include "Utilities.hpp"
#include <string>

using namespace HFDP::Factory::Abstract;

std::string ParmesanCheese::toString() const
{
  PrintMessage("ParmesanCheese::toString");
  return "Shredded Parmesan";
}
