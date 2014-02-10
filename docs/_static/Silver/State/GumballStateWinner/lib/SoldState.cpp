//===--- SoldState.hpp - ----------------------------------------*- C++ -*-===//
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

#include "SoldState.hpp"
#include "GumballMachine.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <iostream>
#include <string>


using namespace HFDP::State::GumballStateWinner;

SoldState::SoldState( GumballMachine* gumballMachine ) :
  _gumballMachine( gumballMachine )
{
  assert( gumballMachine );
  PrintMessage("SoldState::SoldState");
}
void SoldState::insertQuarter() const
{
  PrintMessage("SoldState::insertQuarter");
  std::cout << "Please wait, we're already giving you a gumball"
    << std::endl;
}
void SoldState::ejectQuarter() const
{
  PrintMessage("SoldState::ejectQuarter");
  std::cout << "Sorry, you already turned the crank" << std::endl;
}
void SoldState::turnCrank() const
{
  PrintMessage("SoldState::turnCrank");
  std::cout << "Turning twice doesn't get you another gumball!"
    << std::endl;
}
void SoldState::dispense()
{
  PrintMessage("SoldState::dispense");
  _gumballMachine->releaseBall();
  if( _gumballMachine->getCount() > 0) {
    _gumballMachine->setState( _gumballMachine->getNoQuarterState() );
  } else {
    std::cout << "Oops, out of gumballs!" << std::endl;
    _gumballMachine->setState( _gumballMachine->getSoldOutState() );
  }
}
std::string SoldState::toString() const
{
  PrintMessage("SoldState::toString");
  return "dispensing a gumball";
}
