//===--- Utilities.cpp - ----------------------------------------*- C++ -*-===//
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

//http://chadaustin.me/cppinterface.html

#include "Utilities.hpp"
#include <iostream>
#include <cassert>

void CALL PrintMessage(const char * pMessage, bool newline)
{
  assert(pMessage);
  if (newline)
    std::cout << pMessage << std::endl;
  else
    std::cout << pMessage;
}

void CALL PrintNumber(unsigned int num, bool newline)
{
  if (newline)
    std::cout << num << std::endl;
  else
    std::cout << num;
}

