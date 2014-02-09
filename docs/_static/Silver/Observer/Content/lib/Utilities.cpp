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


#include <iostream>
#include <cassert>

void PrintMessage(const char * pMessage, bool newline = true)
{
  assert(pMessage);
  if (newline)
    std::cout << pMessage << std::endl;
  else
    std::cout << pMessage;
}

void PrintMessage(unsigned int num, bool newline = true)
{
  if (newline)
    std::cout << num << std::endl;
  else
    std::cout << num;
}

