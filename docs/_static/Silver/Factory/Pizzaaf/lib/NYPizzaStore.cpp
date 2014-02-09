//===--- NYPizzaStore.cpp - -------------------------------------*- C++ -*-===//
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
#include "NYPizzaStore.hpp"
#include "NYPizzaIngredientFactory.hpp"
#include "CheesePizza.hpp"
#include "VeggiePizza.hpp"
#include "ClamPizza.hpp"
#include "PepperoniPizza.hpp"
#include "Utilities.hpp"
#include <memory>
#include <string>

using namespace HFDP::Factory::Abstract;

std::unique_ptr< Pizza > NYPizzaStore::createPizza( std::string item ) const
{
  PrintMessage("NYPizzaStore::createPizza");

  //std::unique_ptr< Pizza > pizza( 0 );   ???
  std::unique_ptr< Pizza > pizza;
  PizzaIngredientFactory* ingredientFactory
    = new NYPizzaIngredientFactory();

  if( item.compare( "cheese" ) == 0 ) {
    pizza = std::unique_ptr< Pizza >(
      new CheesePizza( ingredientFactory ) );
    pizza->setName( "New York Style Cheese Pizza" );
  } else if( item.compare( "veggie" ) == 0 ) {
    pizza = std::unique_ptr< Pizza >(
      new VeggiePizza( ingredientFactory ) );
    pizza->setName( "New York Style Veggie Pizza" );
  } else if( item.compare( "clam" ) == 0 ) {
    pizza = std::unique_ptr< Pizza >(
      new ClamPizza( ingredientFactory ) );
    pizza->setName( "New York Style Clam Pizza" );
  } else if( item.compare( "pepperoni" ) == 0 ) {
    pizza = std::unique_ptr< Pizza >(
      new PepperoniPizza( ingredientFactory ) );
    pizza->setName( "New York Style Pepperoni Pizza" );
  }
  return pizza;
}
