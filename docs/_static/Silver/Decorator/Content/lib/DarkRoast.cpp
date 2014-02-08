//===--- DarkRoast.hpp - ----------------------------------------*- C++ -*-===//
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

#include "DarkRoast.hpp"
#include "Utilities.hpp"

using namespace HFDP::Decorator;

DarkRoast::DarkRoast()
{
  PrintMessage("DarkRoast::DarkRoast");
  _description = "Dark Roast Coffee";
}

double DarkRoast::cost() const
{
  PrintMessage("DarkRoast::cost");
  return 0.99;
}
