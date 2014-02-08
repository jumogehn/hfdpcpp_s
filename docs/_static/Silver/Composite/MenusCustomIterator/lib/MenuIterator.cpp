//===--- MenuIterator.cpp - -------------------------------------*- C++ -*-===//
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


#include "MenuIterator.hpp"
#include "Utilities.hpp"

using namespace HFDP::Composite::Menus;

MenuIterator::MenuIterator( std::vector< MenuComponent* > items ) :
  _items( items )
{
  PrintMessage("MenuIterator::"
                     "MenuIterator");
  _iterator = _items.begin();
}
MenuComponent* MenuIterator::next() const
{
  PrintMessage("MenuIterator::next");
  MenuComponent* result = *_iterator++;
  return result;
}
bool MenuIterator::hasNext() const
{
  PrintMessage("MenuIterator::hasNext");

  if( _iterator != _items.end() ) {
    return true;
  }
  return false;
}
