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
#include "Utilities.hpp"
#include <memory>
#include <iostream>
#include <string>

using namespace HFDP::Factory::Method;

PizzaStore::PizzaStore()
{
  PrintMessage("PizzaStore::PizzaStore");
}
PizzaStore::~PizzaStore()
{
  PrintMessage("PizzaStore::~PizzaStore");
}
std::unique_ptr< Pizza > PizzaStore::orderPizza( std::string type) const
{
  PrintMessage("PizzaStore::orderPizza");
  std::unique_ptr< Pizza > pizza(createPizza(type) );
  std::cout << "--- Making a " << pizza->getName() << " ---"
    << std::endl;
  pizza->prepare();
  pizza->bake();
  pizza->cut();
  pizza->box();
  return pizza;
}
