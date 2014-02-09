//===--- ChicagoPizzaStore.cpp - --------------------------------*- C++ -*-===//
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

#include "ChicagoPizzaStore.hpp"
#include "Pizza.hpp"
#include "PizzaIngredientFactory.hpp"
#include "NYPizzaIngredientFactory.hpp"
#include "CheesePizza.hpp"
#include "VeggiePizza.hpp"
#include "ClamPizza.hpp"
#include "PepperoniPizza.hpp"
#include "Utilities.hpp"
#include <memory>
#include <string>

using namespace HFDP::Factory::Abstract;

std::unique_ptr< Pizza > ChicagoPizzaStore::createPizza( std::string item ) const
{
  PrintMessage("ChicagoPizzaStore::createPizza");

  //std::unique_ptr< Pizza > pizza( 0 );
  std::unique_ptr< Pizza > pizza;
  PizzaIngredientFactory* ingredientFactory =
    new NYPizzaIngredientFactory();

  if( item.compare( "cheese" ) == 0 ) {
    pizza = std::unique_ptr< Pizza >(
      new CheesePizza( ingredientFactory ) );
    pizza->setName( "Chicago Style Cheese Pizza" );
  } else if( item.compare( "veggie" ) == 0 ) {
    pizza = std::unique_ptr< Pizza >(
      new VeggiePizza( ingredientFactory ) );
    pizza->setName( "Chicago Style Veggie Pizza" );
  } else if( item.compare( "clam" ) == 0 ) {
    pizza = std::unique_ptr< Pizza >(
      new ClamPizza( ingredientFactory ) );
    pizza->setName( "Chicago Style Clam Pizza" );
  } else if( item.compare( "pepperoni" ) == 0 ) {
    pizza = std::unique_ptr< Pizza >(
      new PepperoniPizza( ingredientFactory ) );
    pizza->setName( "Chicago Style Pepperoni Pizza" );
  }
  return pizza;
}
