//===--- ChicagoStyleVeggiePizza.cpp - --------------------------*- C++ -*-===//
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

#include "ChicagoStyleVeggiePizza.hpp"
#include "Utilities.hpp"
#include <iostream>

using namespace HFDP::Factory::Method;

ChicagoStyleVeggiePizza::ChicagoStyleVeggiePizza()
{
  PrintMessage("ChicagoStyleVeggiePizza"
                     "::ChicagoStyleVeggiePizza");
  _name = "Chicago Deep Dish Veggie Pizza";
  _dough = "Extra Thick Crust Dough";
  _sauce = "Plum Tomato Sauce";
  _toppings.push_back( "Shredded Mozzarella Cheese" );
  _toppings.push_back( "Black Olives" );
  _toppings.push_back( "Spinach" );
  _toppings.push_back( "Eggplant" );
}
void ChicagoStyleVeggiePizza::cut() const
{
  PrintMessage("ChicagoStyleVeggiePizza::cut");
  std::cout << "Cutting the pizza into square slices" << std::endl;
}
