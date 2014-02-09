//===--- Mushroom.cpp - -----------------------------------------*- C++ -*-===//
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

#include "Mushroom.hpp"
#include "Utilities.hpp"
#include <string>

using namespace HFDP::Factory::Abstract;

std::string Mushroom::toString() const
{
  PrintMessage("Mushroom::toString");
  return ( "Mushrooms" );
}
