//===--- Cheese.cpp - -------------------------------------------*- C++ -*-===//
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

#include "Cheese.hpp"
#include "Utilities.hpp"

using namespace HFDP::Factory::Abstract;

Cheese::~Cheese()
{
  PrintMessage("Cheese::~Cheese");
}

