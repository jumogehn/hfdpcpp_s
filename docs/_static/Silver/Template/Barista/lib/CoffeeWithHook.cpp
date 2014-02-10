//===--- CoffeeWithHook.cpp - -----------------------------------*- C++ -*-===//
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

#include "CoffeeWithHook.hpp"
#include "Utilities.hpp"
#include <iostream>
#include <string>

using namespace HFDP::Template::Barista;

std::string CoffeeWithHook::getUserInput() const
{
  PrintMessage("CoffeeWithHook::getUserInput");
  std::string value;
  std::cout << "Would you like milk and sugar with your coffee (y/n)? "
    << std::endl;
  std::cin >> value;
  return value;
}

void CoffeeWithHook::brew() const
{
  PrintMessage("CoffeeWithHook::brew");
  std::cout << "Dripping Coffee through filter" << std::endl;
}
void CoffeeWithHook::addCondiments() const
{
  PrintMessage("CoffeeWithHook::addCondiments");
  std::cout << "Adding Sugar and Milk" << std::endl;
}

bool CoffeeWithHook::customerWantsCondiments()
{
  PrintMessage("CoffeeWithHook::customerWantsCondiments");
  bool value = false;
  std::string answer = getUserInput();
  if( answer.find('y') != -1 ) {
    value = true;
  }
  return value;
}
