//===--- PepperoniPizza.cpp - -----------------------------------*- C++ -*-===//
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

#include "PepperoniPizza.hpp"
#include "Utilities.hpp"
#include <memory>
#include <cassert>
#include <iostream>

using namespace HFDP::Factory::Abstract;

PepperoniPizza::PepperoniPizza( PizzaIngredientFactory* ingredientFactory ) :
  _ingredientFactory( ingredientFactory )
{
  assert( ingredientFactory );
  PrintMessage("PepperoniPizza::PepperoniPizza");
}
void PepperoniPizza::prepare() const
{
  PrintMessage("PepperoniPizza::prepare");
  std::cout << "Preparing " << getName().c_str() << std::endl;
  _dough = std::unique_ptr< Dough>( _ingredientFactory->createDough() );
  _sauce = std::unique_ptr< Sauce>( _ingredientFactory->createSauce() );
  _cheese = std::unique_ptr< Cheese>(
    _ingredientFactory->createCheese() );
  _pepperoni= std::unique_ptr< Pepperoni>(
    _ingredientFactory->createPepperoni() );
  if( _veggies.empty() )
    _veggies = _ingredientFactory->createVeggies();
}
