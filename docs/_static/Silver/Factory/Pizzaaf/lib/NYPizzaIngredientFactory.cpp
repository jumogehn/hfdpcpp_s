//===--- NYPizzaIngredientFactory.cpp - -------------------------*- C++ -*-===//
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

#include "Veggies.hpp"
#include "Garlic.hpp"
#include "Onion.hpp"
#include "RedPepper.hpp"
#include "Mushroom.hpp"
#include "Dough.hpp"
#include "ThinCrustDough.hpp"
#include "Sauce.hpp"
#include "Cheese.hpp"
#include "Clams.hpp"
#include "FreshClams.hpp"
#include "Pepperoni.hpp"
#include "SlicedPepperoni.hpp"
#include "MarinaraSauce.hpp"
#include "ReggianoCheese.hpp"
#include "NYPizzaIngredientFactory.hpp"
#include "Utilities.hpp"
#include <vector>

using namespace HFDP::Factory::Abstract;

Dough* NYPizzaIngredientFactory::createDough() const
{
  PrintMessage("NYPizzaIngredientFactory::createDough");
  return new ThinCrustDough();
}
Sauce* NYPizzaIngredientFactory::createSauce() const
{
  PrintMessage("NYPizzaIngredientFactory::createSauce");
  return new MarinaraSauce();
}
Cheese* NYPizzaIngredientFactory::createCheese() const
{
  PrintMessage("NYPizzaIngredientFactory::createCheese");
  return new ReggianoCheese();
}
std::vector< Veggies* > NYPizzaIngredientFactory::createVeggies() const
{
  PrintMessage("NYPizzaIngredientFactory::createVeggies");
  std::vector< Veggies* > veggies;
  veggies.push_back( new Garlic() );
  veggies.push_back( new Onion() );
  veggies.push_back( new Mushroom() );
  veggies.push_back( new RedPepper() );
  return veggies;
}
Pepperoni* NYPizzaIngredientFactory::createPepperoni() const
{
  PrintMessage("NYPizzaIngredientFactory::createPepperoni");
  return new SlicedPepperoni();
}
Clams* NYPizzaIngredientFactory::createClam() const
{
  PrintMessage("NYPizzaIngredientFactory::createClam");
  return new FreshClams();
}
