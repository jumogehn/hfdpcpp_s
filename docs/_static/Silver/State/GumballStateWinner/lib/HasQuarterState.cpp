//===--- HasQuarterState.hpp - ----------------------------------*- C++ -*-===//
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

#include "HasQuarterState.hpp"
#include "GumballMachine.hpp"
#include "Utilities.hpp"
#include <iostream>
#include <cassert>

#ifdef WIN32
#include <process.h>
#else
#include <sys/types.h>
#include <unistd.h>
#endif

using namespace HFDP::State::GumballStateWinner;

HasQuarterState::HasQuarterState( GumballMachine* gumballMachine ) :
  _gumballMachine( gumballMachine ), _random( 0 )
{
  assert( gumballMachine );
  PrintMessage("HasQuarterState::HasQuarterState");
#ifdef WIN32
  srand( _getpid() );
#else
  srand( getpid() );
#endif
}
void HasQuarterState::insertQuarter() const
{
  PrintMessage("HasQuarterState::insertQuarter");
  std::cout << "You can't insert another quarter" << std::endl;
}
void HasQuarterState::ejectQuarter() const
{
  PrintMessage("HasQuarterState::ejectQuarter");
  std::cout << "Quarter returned" << std::endl;
  _gumballMachine->setState( _gumballMachine->getNoQuarterState() );
}
void HasQuarterState::turnCrank() const
{
  PrintMessage("HasQuarterState::turnCrank");
  std::cout << "You turned..." << std::endl;
  int winner = rand() % 5;
  if( ( winner == 0 ) && ( _gumballMachine->getCount() > 0 ) ) {
    _gumballMachine->setState( _gumballMachine->getWinnerState() );
  } else {
    _gumballMachine->setState( _gumballMachine->getSoldState() );
  }
}
void HasQuarterState::dispense()
{
  PrintMessage("HasQuarterState::dispense");
  std::cout << "No gumball dispensed" << std::endl;
}
std::string HasQuarterState::toString() const
{
  PrintMessage("HasQuarterState::toString");
  return "waiting for turn of crank";
}
