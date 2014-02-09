//===--- NYPizzaStore.cpp - -------------------------------------*- C++ -*-===//
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

#include "NYStyleCheesePizza.hpp"
#include "NYStyleVeggiePizza.hpp"
#include "NYStyleClamPizza.hpp"
#include "NYStylePepperoniPizza.hpp"
#include "NYPizzaStore.hpp"
#include "Utilities.hpp"
#include <memory>
#include <string>

using namespace HFDP::Factory::Method;

std::unique_ptr< Pizza > NYPizzaStore::createPizza( std::string type ) const
{
  PrintMessage("NYPizzaStore::createPizza");
  if( type.compare( "cheese" ) == 0 ) {
    return std::unique_ptr< Pizza>( new NYStyleCheesePizza() );
  } else if( type.compare( "veggie" ) == 0 ) {
    return std::unique_ptr< Pizza>( new NYStyleVeggiePizza() );
  } else if( type.compare( "clam" ) == 0 ) {
    return std::unique_ptr< Pizza>( new NYStyleClamPizza() );
  } else if( type.compare( "pepperoni" ) == 0 ) {
    return std::unique_ptr< Pizza>( new NYStylePepperoniPizza() );
  //} else return std::unique_ptr< Pizza>( 0 );
  } else return 0;
}
