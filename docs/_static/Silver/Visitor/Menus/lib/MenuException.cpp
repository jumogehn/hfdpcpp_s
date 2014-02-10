//===--- MenuException.cpp - ------------------------------------*- C++ -*-===//
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

#include "UnsupportedOperationException.hpp"
#include "Utilities.hpp"
#include <exception>
#include <string>

using namespace HFDP::Visitor::Menus;

UnsupportedOperationException::UnsupportedOperationException() :
  std::exception()
{
  PrintMessage("UnsupportedOperationException"
               "::UnsupportedOperationException");
}
UnsupportedOperationException::UnsupportedOperationException( const std::string message ) :
  std::exception( message.c_str() ), _message( message )
{
  PrintMessage("UnsupportedOperationException"
               "::UnsupportedOperationException");
}
std::string UnsupportedOperationException::getMessage() const
{
  PrintMessage("UnsupportedOperationException::getMessage");
  return _message;
}
