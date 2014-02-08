//===--- PizzaStore.cpp - ---------------------------------------*- C++ -*-===//
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
#include "PizzaStore.hpp"
#include "SimplePizzaFactory.hpp"
#include "Utilities.hpp"
#include <string>
#include <cassert>

using namespace HeadFirstDesignPatterns::Factory::Simple;

PizzaStore::PizzaStore( SimplePizzaFactory* factory ) :
  _factory( factory )
{
  assert( factory );
  PrintMessage("PizzaStore::PizzaStore");
}

Pizza* PizzaStore::orderPizza( std::string type )
{
  PrintMessage("PizzaStore::orderPizza");
  Pizza* pizza;
  pizza = _factory->createPizza( type );
  pizza->prepare();
  pizza->bake();
  pizza->cut();
  pizza->box();
  return pizza;
}

