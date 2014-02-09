//===--- ChicagoPizzaStore.cpp - --------------------------------*- C++ -*-===//
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

#include "Pizza.hpp"
#include "ChicagoStyleCheesePizza.hpp"
#include "ChicagoStyleVeggiePizza.hpp"
#include "ChicagoStyleClamPizza.hpp"
#include "ChicagoStylePepperoniPizza.hpp"
#include "ChicagoPizzaStore.hpp"
#include "Utilities.hpp"
#include <memory>
#include <string>

using namespace HFDP::Factory::Method;

std::unique_ptr< Pizza > ChicagoPizzaStore::createPizza( std::string type ) const
{
  PrintMessage("ChicagoPizzaStore::createPizza");

  if( type.compare( "cheese" ) == 0 ) {
    return std::unique_ptr< Pizza>( new ChicagoStyleCheesePizza() );
  } else if( type.compare( "veggie" ) == 0 ) {
    return std::unique_ptr< Pizza>( new ChicagoStyleVeggiePizza() );
  } else if( type.compare( "clam" ) == 0 ) {
    return std::unique_ptr< Pizza>( new ChicagoStyleClamPizza() );
  } else if( type.compare( "pepperoni" ) == 0 ) {
    return std::unique_ptr< Pizza>( new ChicagoStylePepperoniPizza() );
  //} else return std::unique_ptr< Pizza>( 0 );
  } else return 0;
}
