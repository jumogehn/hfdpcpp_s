//===--- ChicagoPizzaIngredientFactory.cpp - --------------------*- C++ -*-===//
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

#include "ChicagoPizzaIngredientFactory.hpp"
#include "ThickCrustDough.hpp"
#include "PlumTomatoSauce.hpp"
#include "MozzarellaCheese.hpp"
#include "SlicedPepperoni.hpp"
#include "FrozenClams.hpp"
#include "Veggies.hpp"
#include "BlackOlives.hpp"
#include "Spinach.hpp"
#include "EggPlant.hpp"
#include "Utilities.hpp"
#include <vector>

using namespace HFDP::Factory::Abstract;

Dough* ChicagoPizzaIngredientFactory::createDough() const
{
  PrintMessage("ChicagoPizzaIngredientFactory::createDough");
  return new ThickCrustDough();
}
Sauce* ChicagoPizzaIngredientFactory::createSauce() const
{
  PrintMessage("ChicagoPizzaIngredientFactory::createSauce");
  return new PlumTomatoSauce();
}
Cheese* ChicagoPizzaIngredientFactory::createCheese() const
{
  PrintMessage("ChicagoPizzaIngredientFactory::createCheese");
  return new MozzarellaCheese();
}
std::vector< Veggies* > ChicagoPizzaIngredientFactory::createVeggies() const
{
  PrintMessage("ChicagoPizzaIngredientFactory::createVeggies");
  std::vector< Veggies* > value;
  value.push_back( new BlackOlives() );
  value.push_back( new Spinach() );
  value.push_back( new Eggplant() );
  return value;
}
Pepperoni* ChicagoPizzaIngredientFactory::createPepperoni() const
{
  PrintMessage("ChicagoPizzaIngredientFactory::createPepperoni");
  return new SlicedPepperoni();
}
Clams* ChicagoPizzaIngredientFactory::createClam() const
{
  PrintMessage("ChicagoPizzaIngredientFactory::createClam");
  return new FrozenClams();
}
