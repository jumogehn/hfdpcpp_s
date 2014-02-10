//===--- CaffeineBeverage.cpp - ---------------------------------*- C++ -*-===//
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

#include "CaffeineBeverage.hpp"
#include "Utilities.hpp"
#include <iostream>

using namespace HFDP::Template::Barista;

void CaffeineBeverage::boilWater() const
{
  PrintMessage("CaffeineBeverage::boilWater");
  std::cout << "Boiling water" << std::endl;
}
void CaffeineBeverage::pourInCup() const
{
  PrintMessage("CaffeineBeverage::pourInCup");
  std::cout << "Pouring into cup" << std::endl;
}
CaffeineBeverage::~CaffeineBeverage()
{
  PrintMessage("CaffeineBeverage::~CaffeineBeverage");
}
void CaffeineBeverage::prepareRecipe() {
  PrintMessage("CaffeineBeverage::prepareRecipe");
  boilWater();
  brew();
  pourInCup();
  addCondiments();
}


