//===--- TeaWithHook.cpp - --------------------------------------*- C++ -*-===//
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

#include "TeaWithHook.hpp"
#include "Utilities.hpp"
#include <iostream>
#include <string>

using namespace HFDP::Template::Barista;

std::string TeaWithHook::getUserInput() const
{
  PrintMessage("TeaWithHook::getUserInput");
  std::string value;
  std::cout << "Would you like lemon with your tea (y/n)? " << std::endl;
  std::cin >> value;
  return value;
}
void TeaWithHook::brew() const
{
  PrintMessage("TeaWithHook::brew");
  std::cout << "Steeping the tea" << std::endl;
}
void TeaWithHook::addCondiments() const
{
  PrintMessage("TeaWithHook::addCondiments");
  std::cout << "Adding Lemon" << std::endl;
}
bool TeaWithHook::customerWantsCondiments()
{
  PrintMessage("TeaWithHook::customerWantsCondiments");
  bool value = false;
  std::string answer = getUserInput();
  if( answer.find('y') != -1 ) {
    value = true;
  }
  return value;
}
