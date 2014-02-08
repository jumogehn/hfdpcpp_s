//===--- Whip.hpp - ---------------------------------------------*- C++ -*-===//
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

#include "Whip.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <string>

using namespace HFDP::Decorator;

Whip::Whip( const Beverage* beverage ) :
  _beverage( beverage )
{
  assert( beverage );
  PrintMessage("Whip::Whip");
}
Whip::~Whip() {
  PrintMessage("Whip::~Whip");
  delete _beverage;
}
std::string Whip::getDescription() const
{
  PrintMessage("Whip::getDescription");
  return _beverage->getDescription() + ", Whip";
}
double Whip::cost() const
{
  PrintMessage("Whip::cost");
  return 0.10 + _beverage->cost();
}

