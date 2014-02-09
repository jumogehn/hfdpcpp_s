//===--- PizzaIngredientFactory.cpp - ---------------------------*- C++ -*-===//
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

#include "PizzaIngredientFactory.hpp"
#include "Utilities.hpp"

using namespace HFDP::Factory::Abstract;

PizzaIngredientFactory::~PizzaIngredientFactory()
{
  PrintMessage("PizzaIngredientFactory"
                     "::~PizzaIngredientFactory");
}
