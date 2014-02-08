//===--- Waitress.cpp - -----------------------------------------*- C++ -*-===//
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


#include "Waitress.hpp"
#include "Utilities.hpp"
#include <cassert>

using namespace HFDP::Composite::Menus;

Waitress::Waitress( const MenuComponent* allMenus ) :
  _allMenus( allMenus )
{
  assert( allMenus );
  PrintMessage("Waitress::Waitress");
}
void Waitress::printMenu() const
{
  PrintMessage("Waitress::printMenu");
  _allMenus->print();
}


