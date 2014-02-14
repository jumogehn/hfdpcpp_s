//===--- Ingredient.cpp - ---------------------------------------*- C++ -*-===//
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
//#include "MenuComponent.hpp"
#include "Utilities.hpp"
#include <cassert>

using namespace HFDP::Visitor::Menus;

// recommended daily values
static const float dailyCalories = 2000.0f;
static const float dailyCarbs = 300.f;
static const float dailyCholesterol = 0.300f;
static const float dailyFat = 65.0f;
static const float dailyProtien = 50.0f;
static const float dailySodium = 2.400f;

Ingredient::Ingredient( float amount ) :
  _amount( amount )
{
  assert( amount > 0.0f );
  PrintMessage("Ingredient::Ingredient");
}
Ingredient::~Ingredient()
{
  PrintMessage("Ingredient::~Ingredient");
}
void Ingredient::add( MenuComponent* menuComponent )
{
  PrintMessage("Ingredient::add");
}
float Ingredient::getHealthRating() const
{
  PrintMessage("Ingredient::getHealthRating");

  float result = 0.0f;

  result += getCalories() / dailyCalories;
  result += getCarbs() / dailyCarbs;
  result += getCholesterol() / dailyCholesterol;
  result += getProtien() / dailyProtien;
  result += getSodium() / dailySodium;

  return _amount * ( result * 100.0f );
}
