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

using namespace HFDP::Adapter::Ducks;

Duck::~Duck()
{
  PrintMessage("Duck::~Duck()");
}

