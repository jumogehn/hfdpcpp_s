//===--- CheesePizza.cpp - --------------------------------------*- C++ -*-===//
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


#include "CheesePizza.hpp"
#include "Utilities.hpp"

using namespace HeadFirstDesignPatterns::Factory::Simple;

CheesePizza::CheesePizza()
{
  PrintMessage("CheesePizza::CheesePizza");

  _name = "Cheese Pizza";
  _dough = "Regular Crust";
  _sauce = "Marinara Pizza Sauce";
  _toppings.push_back( "Shredded Mozzarella" );
  _toppings.push_back( "Parmesan" );
}


