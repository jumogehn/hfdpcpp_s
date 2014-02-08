//===--- VeggiePizza.cpp - --------------------------------------*- C++ -*-===//
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


#include "VeggiePizza.hpp"
#include "Utilities.hpp"

using namespace HeadFirstDesignPatterns::Factory::Simple;

VeggiePizza::VeggiePizza()
{
  PrintMessage("VeggiePizza::VeggiePizza");

  _name = "Veggie Pizza";
  _dough = "Crust";
  _sauce = "Marinara Sauce";
  _toppings.push_back( "Fresh Mozzarella" );
  _toppings.push_back( "Grated Parmesan" );
  _toppings.push_back( "Diced onion" );
  _toppings.push_back( "Sliced mushrooms" );
  _toppings.push_back( "Sliced red pepper" );
  _toppings.push_back( "Sliced black olives" );
}

