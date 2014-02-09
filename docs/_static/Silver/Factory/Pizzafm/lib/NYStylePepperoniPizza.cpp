//===--- NYStylePepperoniPizza.cpp - ----------------------------*- C++ -*-===//
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

#include "NYStylePepperoniPizza.hpp"
#include "Utilities.hpp"

using namespace HFDP::Factory::Method;

NYStylePepperoniPizza::NYStylePepperoniPizza()
{
  PrintMessage("NYStylePepperoniPizza::NYStylePepperoniPizza");
  _name = "NY Style Pepperoni Pizza";
  _dough = "Thin Crust Dough";
  _sauce = "Marinara Sauce";
  _toppings.push_back( "Grated Reggiano Cheese" );
  _toppings.push_back( "Sliced Pepperoni" );
  _toppings.push_back( "Garlic" );
  _toppings.push_back( "Onion" );
  _toppings.push_back( "Mushrooms" );
  _toppings.push_back( "Red Pepper" );
}
