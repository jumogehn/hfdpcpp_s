//===--- NYStyleCheesePizza.cpp - -------------------------------*- C++ -*-===//
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

#include "NYStyleCheesePizza.hpp"
#include "Utilities.hpp"

using namespace HFDP::Factory::Method;

NYStyleCheesePizza::NYStyleCheesePizza()
{
  PrintMessage("NYStyleCheesePizza::NYStyleCheesePizza");
  _name = "NY Style Sauce and Cheese Pizza";
  _dough = "Thin Crust Dough";
  _sauce = "Marinara Sauce";
  _toppings.push_back( "Grated Reggiano Cheese" );
}
