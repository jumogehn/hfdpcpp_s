//===--- Decaf.hpp - --------------------------------------------*- C++ -*-===//
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

#include "Decaf.hpp"
#include "Utilities.hpp"

using namespace HFDP::Decorator;

Decaf::Decaf()
{
  PrintMessage("Decaf::Decaf");
  _description = "Decaf Coffee";
}

double Decaf::cost() const
{
  PrintMessage("Decaf::cost");
  return 1.05;
}
