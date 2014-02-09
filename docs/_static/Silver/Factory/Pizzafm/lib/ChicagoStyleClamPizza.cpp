//===--- ChicagoStyleClamPizza.cpp - ----------------------------*- C++ -*-===//
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

#include "ChicagoStyleClamPizza.hpp"
#include "Utilities.hpp"
#include <iostream>

using namespace HFDP::Factory::Method;

ChicagoStyleClamPizza::ChicagoStyleClamPizza()
{
  PrintMessage("ChicagoStyleClamPizza::ChicagoStyleClamPizza");
  _name = "Chicago Style Clam Pizza";
  _dough = "Extra Thick Crust Dough";
  _sauce = "Plum Tomato Sauce";
  _toppings.push_back( "Shredded Mozzarella Cheese" );
  _toppings.push_back( "Frozen Clams from Chesapeake Bay" );
}
void ChicagoStyleClamPizza::cut() const
{
  PrintMessage("ChicagoStyleClamPizza::cut");
  std::cout << "Cutting the pizza into square slices" << std::endl;
}
