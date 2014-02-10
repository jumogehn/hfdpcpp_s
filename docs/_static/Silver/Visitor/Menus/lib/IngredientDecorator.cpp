//===--- IngredientDecorator.cpp - ------------------------------*- C++ -*-===//
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

#include "Ingredient.hpp"
#include "IngredientDecorator.hpp"
#include "Utilities.hpp"
#include <cassert>

using namespace HFDP::Visitor::Menus;

IngredientDecorator::IngredientDecorator( Ingredient* ingredient ) :
  _ingredient( ingredient )
{
  assert( ingredient );
  PrintMessage("IngredientDecorator::IngredientDecorator");
}
IngredientDecorator::~IngredientDecorator()
{
  PrintMessage("IngredientDecorator::~IngredientDecorator");
}
