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
#include <memory>
#include <cassert>
#include <iostream>

using namespace HFDP::Factory::Abstract;

CheesePizza::CheesePizza( PizzaIngredientFactory* ingredientFactory ) :
  _ingredientFactory( ingredientFactory )
{
  assert( ingredientFactory );
  PrintMessage("CheesePizza::CheesePizza");
}
void CheesePizza::prepare() const
{
  PrintMessage("CheesePizza::prepare");
  std::cout << "Preparing " << getName().c_str() << std::endl;
  _dough = std::unique_ptr< Dough>( _ingredientFactory->createDough() );
  _sauce = std::unique_ptr< Sauce>( _ingredientFactory->createSauce() );
  _cheese = std::unique_ptr< Cheese>( _ingredientFactory->createCheese() );
}
