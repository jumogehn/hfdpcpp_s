//===--- Steamed.cpp - ------------------------------------------*- C++ -*-===//
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

#include "Steamed.hpp"
#include "Ingredient.hpp"
#include "Visitor.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <sstream>
#include <string>

using namespace HFDP::Visitor::Menus;

Steamed::Steamed( Ingredient* ingredient)
: IngredientDecorator( ingredient )
{
  PrintMessage("Steamed::Steamed");
}
void Steamed::accept( Visitor* visitor )
{
  assert( visitor );
  PrintMessage("Steamed::accept");
  return _ingredient->accept( visitor );;
}
float Steamed::getCalories() const
{
  PrintMessage("Steamed::getCalories");
  return _ingredient->getCalories(); // no change
}
float Steamed::getCarbs() const
{
  PrintMessage("Steamed::getCarbs");
  return _ingredient->getCarbs(); // no change
}
float Steamed::getProtien() const
{
  PrintMessage("Steamed::getProtien");
  return _ingredient->getProtien(); // no change
}
float Steamed::getFat() const
{
  PrintMessage("Steamed::getFat");
  return _ingredient->getFat(); // no change
}
float Steamed::getCholesterol() const
{
  PrintMessage("Steamed::getCholesterol");
  return _ingredient->getCholesterol(); // no change
}
float Steamed::getSodium() const
{
  PrintMessage("Steamed::getSodium");
  return _ingredient->getSodium(); // no change
}
bool Steamed::isVegetarian() const
{
  PrintMessage("Steamed::isVegetarian");
  return _ingredient->isVegetarian(); // no change
}
std::string Steamed::toString() const
{
  PrintMessage("Steamed::toString");
  std::string result( "Steamed" );
  result.append( "(" );
  result.append( _ingredient->toString() );
  result.append( ")" );
  return result;
}
