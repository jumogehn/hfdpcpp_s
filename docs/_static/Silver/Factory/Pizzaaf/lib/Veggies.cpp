//===--- Veggies.cpp - ------------------------------------------*- C++ -*-===//
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

#include "Veggies.hpp"
#include "Utilities.hpp"

using namespace HFDP::Factory::Abstract;

Veggies::~Veggies()
{
  PrintMessage("Veggies::~Veggies");
}
