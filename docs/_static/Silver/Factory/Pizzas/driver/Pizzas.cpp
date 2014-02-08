//===--- Pizzas.cpp - -------------------------------------------*- C++ -*-===//
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
#include "SimplePizzaFactory.hpp"
#include "PizzaStore.hpp"
#include <memory>
#include <iostream>

using namespace HeadFirstDesignPatterns::Factory::Simple;

int main( int argc, char* argv[] )
{
  SimplePizzaFactory factory;
  PizzaStore store( &factory );

  std::unique_ptr< Pizza>pizza(store.orderPizza( "cheese" ) );
  std::cout << "We ordered a " << pizza->getName() << std::endl;

  pizza = std::unique_ptr< Pizza>(store.orderPizza( "veggie" ) );
  std::cout << "We ordered a " << pizza->getName() << std::endl;

  return 0;
}

