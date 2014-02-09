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
#include "Dough.hpp"
#include "Sauce.hpp"
#include "Cheese.hpp"
#include "Clams.hpp"
#include "Utilities.hpp"
#include <memory>
#include <iostream>
#include <cassert>

using namespace HFDP::Factory::Abstract;

ClamPizza::ClamPizza( PizzaIngredientFactory* ingredientFactory ) :
  _ingredientFactory( ingredientFactory )
{
  assert( ingredientFactory );
  PrintMessage("ClamPizza::ClamPizza");
}
void ClamPizza::prepare() const
{
  PrintMessage("ClamPizza::prepare");

  std::cout << "Preparing " << getName().c_str() << std::endl;
  _dough = std::unique_ptr< Dough>( _ingredientFactory->createDough() );
  _sauce = std::unique_ptr< Sauce>( _ingredientFactory->createSauce() );
  _cheese = std::unique_ptr< Cheese>( _ingredientFactory->createCheese() );
  _clam = std::unique_ptr< Clams>( _ingredientFactory->createClam() );
}
