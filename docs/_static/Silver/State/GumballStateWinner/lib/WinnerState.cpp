//===--- WinnerState.hpp - --------------------------------------*- C++ -*-===//
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

#include "WinnerState.hpp"
#include "GumballMachine.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <iostream>
#include <string>


using namespace HFDP::State::GumballStateWinner;

WinnerState::WinnerState( GumballMachine* gumballMachine ) :
  _gumballMachine( gumballMachine )
{
  assert( gumballMachine );
  PrintMessage("WinnerState::WinnerState");
}
void WinnerState::insertQuarter() const
{
  PrintMessage("WinnerState::insertQuarter");
  std::cout << "Please wait, we're already giving you a Gumball"
    << std::endl;
}
void WinnerState::ejectQuarter() const
{
  PrintMessage("WinnerState::ejectQuarter");
  std::cout << "Please wait, we're already giving you a Gumball"
    << std::endl;
}
void WinnerState::turnCrank() const
{
  PrintMessage("WinnerState::turnCrank");
  std::cout << "Turning again doesn't get you another gumball!"
    << std::endl;
}
void WinnerState::dispense()
{
  PrintMessage("WinnerState::dispense");
  std::cout << "YOU'RE A WINNER! You get two gumballs for your quarter"
    << std::endl;
  _gumballMachine->releaseBall();
  if( _gumballMachine->getCount() == 0 ) {
    _gumballMachine->setState( _gumballMachine->getSoldOutState() );
  } else {
    _gumballMachine->releaseBall();
    if( _gumballMachine->getCount() > 0 ) {
      _gumballMachine->setState( _gumballMachine->getNoQuarterState() );
    } else {
      std::cout << "Oops, out of gumballs!" << std::endl;
      _gumballMachine->setState( _gumballMachine->getSoldOutState() );
    }
  }
}
std::string WinnerState::toString() const
{
  PrintMessage("WinnerState::toString");
  return "despensing two gumballs for your quarter,"
    " because YOU'RE A WINNER!";
}
