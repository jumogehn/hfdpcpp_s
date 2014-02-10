//===--- FlyNoWay.cpp - -----------------------------------------*- C++ -*-===//
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

#include "FlyNoWay.hpp"
#include "Utilities.hpp"
#include <iostream>

using namespace HFDP::Strategy;

void FlyNoWay::fly () const
{
  PrintMessage("FlyNoWay::fly");
  std::cout << "I can't fly" << std::endl;
}

