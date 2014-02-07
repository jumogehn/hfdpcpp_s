//===--- Command.cpp - ------------------------------------------*- C++ -*-===//
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


#include "Utilities.hpp"
#include <iostream>

using namespace HFDP::Command::Undo;

Command::~Command()
{
  PrintMessage("Command::~Command");
}

