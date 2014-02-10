//===--- FakeQuack.cpp - ----------------------------------------*- C++ -*-===//
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

#include "FakeQuack.hpp"
#include "Utilities.hpp"
#include <iostream>

using namespace HFDP::Strategy;

void FakeQuack::quack () const
{
  PrintMessage("FakeQuack::quack");
  std::cout << "Qwak" << std::endl;
}

