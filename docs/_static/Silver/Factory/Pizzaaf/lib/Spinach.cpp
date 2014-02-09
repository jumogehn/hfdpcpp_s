//===--- Spinach.cpp - ------------------------------------------*- C++ -*-===//
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

#include "Spinach.hpp"
#include "Utilities.hpp"
#include <string>

using namespace HFDP::Factory::Abstract;

std::string Spinach::toString() const
{
  PrintMessage("Spinach::toString");
  return ( "Spinach" );
}
