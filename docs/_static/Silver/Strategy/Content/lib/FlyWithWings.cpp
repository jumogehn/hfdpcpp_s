//===--- FlyWithWings.cpp - -------------------------------------*- C++ -*-===//
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

#include "FlyWithWings.hpp"
#include "Utilities.hpp"
#include <iostream>

using namespace HFDP::Strategy;

void FlyWithWings::fly () const
{
  PrintMessage("FlyWithWings::fly");
  std::cout << "I'm flying!!" << std::endl;
}

