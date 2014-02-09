//===--- Pepperoni.cpp - ----------------------------------------*- C++ -*-===//
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

#include "Pepperoni.hpp"
#include "Utilities.hpp"

using namespace HFDP::Factory::Abstract;

Pepperoni::~Pepperoni()
{
  PrintMessage("Pepperoni::~Pepperoni");
}
