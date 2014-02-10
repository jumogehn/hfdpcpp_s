//===--- QuackBehavior.cpp - ------------------------------------*- C++ -*-===//
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

#include "QuackBehavior.hpp"
#include "Utilities.hpp"

using namespace HFDP::Strategy;

QuackBehavior::~QuackBehavior()
{
  PrintMessage("QuackBehavior::~QuackBehavior");
}

