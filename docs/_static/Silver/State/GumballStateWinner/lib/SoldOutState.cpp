//===--- SoldOutState.hpp - -------------------------------------*- C++ -*-===//
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

#include "SoldOutState.hpp"
#include "GumballMachine.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <iostream>


using namespace HFDP::State::GumballStateWinner;

SoldOutState::SoldOutState(GumballMachine* gumballMachine ) :
  _gumballMachine( gumballMachine )
{
  assert(gumballMachine );
  PrintMessage("SoldOutState::SoldOutState");
}
void SoldOutState::insertQuarter() const
{
  PrintMessage("SoldOutState::insertQuarter");
  std::cout << "You can't insert a quarter, the machine is sold out"
    << std::endl;
}
void SoldOutState::ejectQuarter() const
{
  PrintMessage("SoldOutState::ejectQuarter");
  std::cout << "You can't eject, you haven't inserted a quarter yet"
    << std::endl;
}
void SoldOutState::turnCrank() const
{
  PrintMessage("SoldOutState::turnCrank");
  std::cout << "You turned, but there are no gumballs" << std::endl;
}
void SoldOutState::dispense()
{
  PrintMessage("SoldOutState::dispense");
  std::cout << "No gumball dispensed" << std::endl;
}
std::string SoldOutState::toString() const
{
  PrintMessage("SoldOutState::toString");
  return "sold out";
}
