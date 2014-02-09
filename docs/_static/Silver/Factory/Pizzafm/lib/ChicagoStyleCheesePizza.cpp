//===--- ChicagoStyleCheesePizza.cpp - --------------------------*- C++ -*-===//
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

#include "ChicagoStyleCheesePizza.hpp"
#include "Utilities.hpp"
#include <iostream>

using namespace HFDP::Factory::Method;

ChicagoStyleCheesePizza::ChicagoStyleCheesePizza()
{
  PrintMessage("ChicagoStyleCheesePizza"
                     "::ChicagoStyleCheesePizza");
  _name = "Chicago Style Deep Dish Cheese Pizza";
  _dough = "Extra Thick Crust Dough";
  _sauce = "Plum Tomato Sauce";
  _toppings.push_back( "Shredded Mozzarella Cheese" );
}
void ChicagoStyleCheesePizza::cut() const
{
  PrintMessage("ChicagoStyleCheesePizza::cut");
  std::cout << "Cutting the pizza into square slices" << std::endl;
}
