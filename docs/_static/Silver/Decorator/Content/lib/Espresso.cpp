//===--- Espresso.hpp - -----------------------------------------*- C++ -*-===//
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

#include "Espresso.hpp"
#include "Utilities.hpp"

using namespace HFDP::Decorator;

Espresso::Espresso()
{
  PrintMessage("Espresso::Espresso");
  _description = "Espresso";
}

double Espresso::cost() const
{
  PrintMessage("Espresso::cost");
  return 1.99;
}
