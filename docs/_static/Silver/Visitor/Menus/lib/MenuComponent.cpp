//===--- MenuComponent.cpp - ------------------------------------*- C++ -*-===//
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

//#include "MenuComponent.hpp"

#include "Ingredient.hpp"
#include "Utilities.hpp"

using namespace HFDP::Visitor::Menus;

MenuComponent::MenuComponent()
{
  PrintMessage("MenuComponent::MenuComponent");
}
MenuComponent::~MenuComponent()
{
  PrintMessage("MenuComponent::~MenuComponent");
}
void MenuComponent::add( MenuComponent* menuComponent )
{
  PrintMessage("MenuComponent::add");
}
