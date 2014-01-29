//===--- Duck.cpp - ---------------------------------------------*- C++ -*-===//
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

#include "Duck.hpp"
#include "Utilities.hpp"

using namespace HeadFirstDesignPatterns::Adapter::Ducks;

Duck::~Duck()
{
  PrintMessage("Duck::~Duck()");
}

