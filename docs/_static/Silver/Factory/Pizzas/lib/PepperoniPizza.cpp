//===--- PepperoniPizza.cpp - -----------------------------------*- C++ -*-===//
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


#include "PepperoniPizza.hpp"
#include "Utilities.hpp"

using namespace HeadFirstDesignPatterns::Factory::Simple;

PepperoniPizza::PepperoniPizza()
{
  PrintMessage("PepperoniPizza::PepperoniPizza");
  _name = "Pepperoni Pizza";
  _dough = "Crust";
  _sauce = "Marinara sauce";
  _toppings.push_back( "Sliced Pepperoni" );
  _toppings.push_back( "Sliced Onion" );
  _toppings.push_back( "Grated parmesan cheese" );
}

