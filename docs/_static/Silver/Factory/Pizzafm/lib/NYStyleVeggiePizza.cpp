//===--- NYStyleVeggiePizza.cpp - -------------------------------*- C++ -*-===//
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

#include "NYStyleVeggiePizza.hpp"
#include "Utilities.hpp"

using namespace HFDP::Factory::Method;

NYStyleVeggiePizza::NYStyleVeggiePizza()
{
  PrintMessage("NYStyleVeggiePizza::NYStyleVeggiePizza");
  _name = "NY Style Veggie Pizza";
  _dough = "Thin Crust Dough";
  _sauce = "Marinara Sauce";
  _toppings.push_back( "Grated Reggiano Cheese" );
  _toppings.push_back( "Garlic" );
  _toppings.push_back( "Onion" );
  _toppings.push_back( "Mushrooms" );
  _toppings.push_back( "Red Pepper" );
}
