//===--- Sauce.cpp - --------------------------------------------*- C++ -*-===//
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

#include "Sauce.hpp"
#include "Utilities.hpp"

using namespace HFDP::Factory::Abstract;

Sauce::~Sauce()
{
  PrintMessage("Sauce::~Sauce");
}
