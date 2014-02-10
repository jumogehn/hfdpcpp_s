//===--- Substitute.cpp - ---------------------------------------*- C++ -*-===//
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

#include "Substitute.hpp"
#include "Ingredient.hpp"
#include "Visitor.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <sstream>
#include <string>

using namespace HFDP::Visitor::Menus;

Substitute::Substitute( Ingredient* ingredient) : IngredientDecorator( ingredient )
{
  PrintMessage("Substitute::Substitute");
}
void Substitute::accept( Visitor* visitor )
{
  PrintMessage("Substitute::accept");
  return _ingredient->accept( visitor );;
}
float Substitute::getCalories() const
{
  PrintMessage("Substitute::getCalories");
  return _ingredient->getCalories() / 2.0f;
}
float Substitute::getCarbs() const
{
  PrintMessage("Substitute::getCarbs");
  return _ingredient->getCarbs() / 2.0f;
}
float Substitute::getProtien() const
{
  PrintMessage("Substitute::getProtien");
  return _ingredient->getProtien() / 2.0f;
}
float Substitute::getFat() const
{
  PrintMessage("Substitute::getFat");
  return  _ingredient->getFat() / 2.0f;
}
float Substitute::getCholesterol() const
{
  PrintMessage("Substitute::getCholesterol");
  return _ingredient->getCholesterol() / 2.0f;
}
float Substitute::getSodium() const
{
  PrintMessage("Substitute::getSodium");
  return _ingredient->getSodium() / 2.0f;
}
bool Substitute::isVegetarian() const
{
  PrintMessage("Substitute::isVegetarian");
  return true;
}
std::string Substitute::toString() const
{
  PrintMessage("Substitute::toString");
  std::string result( "Substitute" );
  result.append( "(" );
  result.append( _ingredient->toString() );
  result.append( ")" );
  return result;
}
