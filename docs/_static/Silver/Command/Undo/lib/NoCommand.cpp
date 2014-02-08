//===--- NoCommand.cpp - ----------------------------------------*- C++ -*-===//
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


#include "NoCommand.hpp"
#include "Utilities.hpp"

using namespace HFDP::Command::Undo;

void NoCommand::execute() const
{
  PrintMessage("NoCommand::execute");
}
void NoCommand::undo() const
{
  PrintMessage("NoCommand::undo");
}

