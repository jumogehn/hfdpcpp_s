//===--- BlackOlives.cpp - --------------------------------------*- C++ -*-===//
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

#include "BlackOlives.hpp"
#include "Utilities.hpp"
#include <string>

using namespace HFDP::Factory::Abstract;

std::string BlackOlives::toString() const
{
  PrintMessage("BlackOlives::toString");
  return ( "Black Olives" );
}
