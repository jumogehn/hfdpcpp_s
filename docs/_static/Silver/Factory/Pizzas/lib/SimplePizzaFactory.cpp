//===--- SimplePizzaFactory.cpp - -------------------------------*- C++ -*-===//
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

#include "Pizza.hpp"
#include "CheesePizza.hpp"
#include "PepperoniPizza.hpp"
#include "ClamPizza.hpp"
#include "VeggiePizza.hpp"
#include "SimplePizzaFactory.hpp"
#include "Utilities.hpp"
#include <string>

using namespace HeadFirstDesignPatterns::Factory::Simple;

Pizza* SimplePizzaFactory::createPizza( std::string type ) const
{
  PrintMessage("SimplePizzaFactory::createPizza");
  Pizza* pizza = 0;
  if( type.compare( "cheese" ) == 0 ) {
    pizza = new CheesePizza();
  } else if( type.compare( "pepperoni" ) == 0 ) {
    pizza = new PepperoniPizza();
  } else if( type.compare( "clam" ) == 0 ) {
    pizza = new ClamPizza();
  } else if( type.compare( "veggie" ) == 0 ) {
    pizza = new VeggiePizza();
  }
  return pizza;
}

