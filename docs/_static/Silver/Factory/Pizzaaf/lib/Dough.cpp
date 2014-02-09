//===--- Dough.cpp - --------------------------------------------*- C++ -*-===//
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

#include "Dough.hpp"
#include "Utilities.hpp"
#include <string>

using namespace HFDP::Factory::Abstract;

Dough::~Dough()
{
  PrintMessage("Dough::~Dough");
}
