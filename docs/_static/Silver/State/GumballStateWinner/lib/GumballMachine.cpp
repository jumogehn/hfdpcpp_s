//===--- GumballMachine.hpp - -----------------------------------*- C++ -*-===//
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

#include "GumballMachine.hpp"
#include "Utilities.hpp"
#include "State.hpp"
#include <cassert>
#include <string>
#include <iostream>
#include <sstream>

using namespace HFDP::State::GumballStateWinner;

GumballMachine::~GumballMachine()
{
  PrintMessage("GumballMachine::~GumballMachine");

  delete _soldOutState;
  delete _noQuarterState;
  delete _hasQuarterState;
  delete _soldState;
  delete _winnerState;
}
void GumballMachine::insertQuarter() const
{
  PrintMessage("GumballMachine::insertQuarter");
  _state->insertQuarter();
}
void GumballMachine::ejectQuarter() const
{
  PrintMessage("GumballMachine::ejectQuarter");
  _state->ejectQuarter();
}
void GumballMachine::turnCrank() const
{
  PrintMessage("GumballMachine::turnCrank");
  _state->turnCrank();
  _state->dispense();
}
void GumballMachine::setState( State* state )
{
  assert( state );
  PrintMessage("GumballMachine::setState");
  _state = state;
}
void GumballMachine::releaseBall()
{
  PrintMessage("GumballMachine::releaseBall");
  std::cout << "A gumball comes rolling out the slot..." << std::endl;
  if( _count != 0) {
    _count--;
  }
}
int GumballMachine::getCount() const
{
  PrintMessage("GumballMachine::getCount");
  return _count;
}
void GumballMachine::refill( int count )
{
  assert( count > 0 );
  PrintMessage("GumballMachine::refill");
  _count = count;
  _state = _noQuarterState;
}
State* GumballMachine::getState() const
{
  PrintMessage("GumballMachine::getState");
  return _state;
}
State* GumballMachine::getSoldOutState() const
{
  PrintMessage("GumballMachine::getSoldOutState");
  return _soldOutState;
}
State* GumballMachine::getNoQuarterState() const
{
  PrintMessage("GumballMachine::getNoQuarterState");
  return _noQuarterState;
}
State* GumballMachine::getHasQuarterState() const
{
  PrintMessage("GumballMachine::getHasQuarterState");
  return _hasQuarterState;
}
State* GumballMachine::getSoldState() const
{
  PrintMessage("GumballMachine::getSoldState");
  return _soldState;
}
State* GumballMachine::getWinnerState() const
{
  PrintMessage("GumballMachine::getWinnerState");
  return _winnerState;
}
std::string GumballMachine::toString() const
{
  PrintMessage("GumballMachine::toString");
  std::stringstream value;
  value << std::endl << "Mighty Gumball, Inc.";
  value << std::endl << "C++-enabled Standing Gumball Model #2004";
  value << std::endl << "Inventory: " << _count << " gumball";
  if( _count > 1 ) {
    value << "s";
  }
  value << std::endl;
  value << "Machine is " << _state->toString() << std::endl;
  return value.str();
}
