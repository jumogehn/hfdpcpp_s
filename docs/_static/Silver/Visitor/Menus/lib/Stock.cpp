//===--- Stock.cpp - --------------------------------------------*- C++ -*-===//
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

#include "Stock.hpp"
#include "Ingredient.hpp"
#include "Visitor.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <sstream>
#include <string>

using namespace HFDP::Visitor::Menus;

Stock::Stock( Ingredient* ingredient, float factor ) :
  _factor( factor ), _ingredient( ingredient )
{
  assert( ingredient ); assert( factor > 0.0f );
  PrintMessage("Stock::Stock");
}
void Stock::accept( Visitor* visitor )
{
  assert( visitor );
  PrintMessage("Stock::accept");
  return visitor->visit( this );
}
float Stock::getCalories() const
{
  PrintMessage("Stock::getCalories");
  return _factor * _ingredient->getCalories();
}
float Stock::getCarbs() const
{
  PrintMessage("Stock::getCarbs");
  return _factor * _ingredient->getCarbs();
}
float Stock::getProtien() const
{
  PrintMessage("Stock::getProtien");
  return _factor * _ingredient->getProtien();
}
float Stock::getFat() const
{
  PrintMessage("Stock::getFat");
  return _factor * _ingredient->getFat();
}
float Stock::getCholesterol() const
{
  PrintMessage("Stock::getCholesterol");
  return _factor * _ingredient->getCholesterol();
}
float Stock::getSodium() const
{
  PrintMessage("Stock::getSodium");
  return _factor * _ingredient->getSodium();
}
bool Stock::isVegetarian() const
{
  PrintMessage("Stock::isVegetarian");
  return _ingredient->isVegetarian();
}
std::string Stock::toString() const
{
  PrintMessage("Stock::toString");
  std::string result( "Stock" );

  result.append( "(" );
  result.append( _ingredient->toString() );
  result.append( ")" );

  return result;
}
