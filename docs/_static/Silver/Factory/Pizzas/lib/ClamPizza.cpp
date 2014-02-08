//===--- ClamPizza.cpp - ----------------------------------------*- C++ -*-===//
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


#include "ClamPizza.hpp"
#include "Utilities.hpp"

using namespace HeadFirstDesignPatterns::Factory::Simple;

ClamPizza::ClamPizza()
{
  PrintMessage("ClamPizza::ClamPizza");
  _name = "Clam Pizza";
  _dough = "Thin Crust";
  _sauce = "White garlic Sauce";
  _toppings.push_back( "Grated parmesan cheese" );
  _toppings.push_back( "Clams" );
}
