//===--- FlyBehavior.cpp - --------------------------------------*- C++ -*-===//
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

#include "FlyBehavior.hpp"
#include "Utilities.hpp"

using namespace HFDP::Strategy;

FlyBehavior::~FlyBehavior()
{
  PrintMessage("FlyBehavior::~FlyBehavior");
}

