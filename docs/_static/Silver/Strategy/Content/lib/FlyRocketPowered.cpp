//===--- FlyRocketPowered.cpp - ---------------------------------*- C++ -*-===//
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

#include "FlyRocketPowered.hpp"
#include "Utilities.hpp"
#include <iostream>

using namespace HFDP::Strategy;

void FlyRocketPowered::fly () const
{
  PrintMessage("FlyRocketPowered::fly");
  std::cout << "I'm flying with a rocket" << std::endl;
}

