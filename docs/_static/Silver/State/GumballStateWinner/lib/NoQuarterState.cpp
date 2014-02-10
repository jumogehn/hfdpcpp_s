//===--- NoQuarterState.hpp - -----------------------------------*- C++ -*-===//
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

#include "NoQuarterState.hpp"
#include "GumballMachine.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <iostream>

using namespace HFDP::State::GumballStateWinner;

NoQuarterState::NoQuarterState( GumballMachine* gumballMachine ) :
  _gumballMachine( gumballMachine )
{
  assert( gumballMachine );
  PrintMessage("NoQuarterState::NoQuarterState");
}
void NoQuarterState::insertQuarter() const
{
  PrintMessage("NoQuarterState::insertQuarter");
  std::cout << "You inserted a quarter" << std::endl;
  _gumballMachine->setState( _gumballMachine->getHasQuarterState() );
}
void NoQuarterState::ejectQuarter() const
{
  PrintMessage("NoQuarterState::ejectQuarter");
  std::cout << "You haven't inserted a quarter" << std::endl;
}
void NoQuarterState::turnCrank() const
{
  PrintMessage("NoQuarterState::turnCrank");
  std::cout << "You turned, but there's no quarter" << std::endl;
}
void NoQuarterState::dispense()
{
  PrintMessage("NoQuarterState::dispense");
  std::cout << "You need to pay first" << std::endl;
}
std::string NoQuarterState::toString() const
{
  PrintMessage("NoQuarterState::toString");
  return "waiting for quarter";
}
