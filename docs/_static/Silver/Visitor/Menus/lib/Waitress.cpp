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
#include <iostream>
#include <sstream>
#include <string>

using namespace HFDP::Visitor::Menus;

Waitress::Waitress( MenuComponent* allMenus ) :
  _allMenus( allMenus )
{
  assert( allMenus );
  PrintMessage("Waitress::Waitress");
}
void Waitress::printMenu()
{
  PrintMessage("Waitress::printMenu");
  _allMenus->accept( this );
}
void Waitress::visit( Menu* component )
{
  assert( component );
  PrintMessage("Waitress::visit of Menu");
  std::stringstream tokens( component->toString() );
  std::string token;
  std::cout << std::endl;
  while( std::getline( tokens, token, '\t' ) ) {
    std::cout << token;
    std::cout << std::endl << "\t";
  }
}
void Waitress::visit( MenuItem* component )
{
  assert( component );
  PrintMessage("Waitress::visit of MenuItem");
  std::stringstream tokens( component->toString() );
  std::string token;
  while( std::getline( tokens, token, '\t' ) ) {
    std::cout << std::endl << "\t\t";	// indent
    std::cout << token;
  }
  std::cout << " | ";
  std::cout << component->getHealthRating();
}
void Waitress::visit( Ingredient* component )
{
  assert( component );
  PrintMessage("Waitress::visit of Ingredient");
  std::stringstream tokens( component->toString() );
  std::string token;
  while( std::getline( tokens, token, '\t' ) ) {
    std::cout << std::endl << "\t\t\t";	// indent
    std::cout << token;
  }
  std::cout << " | ";
  std::cout << component->getHealthRating();
}

