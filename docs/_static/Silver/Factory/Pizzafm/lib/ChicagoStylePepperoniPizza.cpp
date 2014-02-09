//===--- ChicagoStylePepperoniPizza.cpp - -----------------------*- C++ -*-===//
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

#include "ChicagoStylePepperoniPizza.hpp"
#include "Utilities.hpp"
#include <iostream>

using namespace HFDP::Factory::Method;

ChicagoStylePepperoniPizza::ChicagoStylePepperoniPizza()
{
  PrintMessage("ChicagoStylePepperoniPizza"
                     "::ChicagoStylePepperoniPizza");
  _name = "Chicago Style Pepperoni Pizza";
  _dough = "Extra Thick Crust Dough";
  _sauce = "Plum Tomato Sauce";
  _toppings.push_back( "Shredded Mozzarella Cheese" );
  _toppings.push_back( "Black Olives" );
  _toppings.push_back( "Spinach" );
  _toppings.push_back( "Eggplant" );
  _toppings.push_back( "Sliced Pepperoni" );
}
void ChicagoStylePepperoniPizza::cut() const
{
  PrintMessage("ChicagoStylePepperoniPizza::cut");
  std::cout << "Cutting the pizza into square slices" << std::endl;
}
