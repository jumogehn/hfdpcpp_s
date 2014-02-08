//===--- Milk.hpp - ---------------------------------------------*- C++ -*-===//
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

#include "Milk.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <string>

using namespace HFDP::Decorator;

Milk::Milk( const Beverage* beverage ) :
  _beverage( beverage )
{
  assert( beverage );
  PrintMessage("Milk::Milk");
}
Milk::~Milk()
{
  PrintMessage("Milk::~Milk");
  delete _beverage;
}
std::string Milk::getDescription() const
{
  PrintMessage("Milk::getDescription");
  return _beverage->getDescription() + ", Milk";
}
double Milk::cost() const
{
  PrintMessage("Milk::cost");
  return 0.10 + _beverage->cost();
}
