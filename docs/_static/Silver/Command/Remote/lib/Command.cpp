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

#include "Command.hpp"
#include "Utilities.hpp"

using namespace HFDP::Command::Remote;

Command::Command()
{
  PrintMessage("Command::Command");
}

Command::~Command()
{
  PrintMessage("Command::~Command");
}

