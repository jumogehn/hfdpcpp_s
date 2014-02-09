//===--- VegiePizza.cpp - ---------------------------------------*- C++ -*-===//
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

#include "VeggiePizza.hpp"
#include "Cheese.hpp"
#include "Dough.hpp"
#include "Sauce.hpp"
#include "Utilities.hpp"
#include <memory>
#include <iostream>
#include <cassert>

using namespace HFDP::Factory::Abstract;

VeggiePizza::VeggiePizza( PizzaIngredientFactory* ingredientFactory ) :
  _ingredientFactory( ingredientFactory )
{
  assert( ingredientFactory );
  PrintMessage("VeggiePizza::VeggiePizza");
}
void VeggiePizza::prepare() const
{
  PrintMessage("VeggiePizza::prepare");
  std::cout << "Preparing " << getName().c_str() << std::endl;
  _dough = std::unique_ptr< Dough>( _ingredientFactory->createDough() );
  _sauce = std::unique_ptr< Sauce>( _ingredientFactory->createSauce() );
  _cheese = std::unique_ptr< Cheese>( _ingredientFactory->createCheese() );
  if( _veggies.empty() )
    _veggies = _ingredientFactory->createVeggies();
}
