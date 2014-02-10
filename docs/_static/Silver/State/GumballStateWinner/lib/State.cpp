//===--- State.hpp - --------------------------------------------*- C++ -*-===//
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

#include "State.hpp"
#include "Utilities.hpp"

using namespace HFDP::State::GumballStateWinner;

State::~State()
{
  PrintMessage("State::~State");
}

