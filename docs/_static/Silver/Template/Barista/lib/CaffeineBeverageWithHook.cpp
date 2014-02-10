//===--- CaffeineBeverageWithHook.cpp - -------------------------*- C++ -*-===//
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

#include "CaffeineBeverageWithHook.hpp"
#include "Utilities.hpp"
#include <iostream>

using namespace HFDP::Template::Barista;

void CaffeineBeverageWithHook::boilWater() const
{
  PrintMessage("CaffeineBeverageWithHook::boilWater");
  std::cout << "Boiling water" << std::endl;
}
void CaffeineBeverageWithHook::pourInCup() const
{
  PrintMessage("CaffeineBeverageWithHook::pourInCup");
  std::cout << "Pouring into cup" << std::endl;
}
bool CaffeineBeverageWithHook::customerWantsCondiments()
{
  PrintMessage("CaffeineBeverageWithHook::"
                     "customerWantsCondiments");
  return true;
}
CaffeineBeverageWithHook::~CaffeineBeverageWithHook()
{
  PrintMessage("CaffeineBeverageWithHook::"
                     "~CaffeineBeverageWithHook");
}
void CaffeineBeverageWithHook::prepareRecipe()
{
  PrintMessage("CaffeineBeverageWithHook::prepareRecipe");
  boilWater();
  brew();
  pourInCup();
  if( customerWantsCondiments() ) {
    addCondiments();
  }
}
