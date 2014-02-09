//===--- NYStyleClamPizza.cpp - ---------------------------------*- C++ -*-===//
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

#include "NYStyleClamPizza.hpp"
#include "Utilities.hpp"

using namespace HFDP::Factory::Method;

NYStyleClamPizza::NYStyleClamPizza()
{
  PrintMessage("NYStyleClamPizza::NYStyleClamPizza");
  _name = "NY Style Clam Pizza";
  _dough = "Thin Crust Dough";
  _sauce = "Marinara Sauce";
  _toppings.push_back( "Grated Reggiano Cheese" );
  _toppings.push_back( "Fresh Clams from Long Island Sound" );
}
