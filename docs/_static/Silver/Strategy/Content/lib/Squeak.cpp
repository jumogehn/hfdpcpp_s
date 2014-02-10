//===--- Squeak.cpp - -------------------------------------------*- C++ -*-===//
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

#include "Squeak.hpp"
#include "Utilities.hpp"
#include <iostream>

using namespace HFDP::Strategy;

void Squeak::quack () const
{
  PrintMessage("Squeak::quack");
  std::cout << "Squeak" << std::endl;
}

