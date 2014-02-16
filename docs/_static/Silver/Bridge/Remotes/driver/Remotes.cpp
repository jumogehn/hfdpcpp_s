//===--- Remotes.cpp - ------------------------------------------*- C++ -*-===//
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

#include "RemotesConfig.h"
#include "RemoteControl.hpp"
#include "SonyControl.hpp"
#include "RCAControl.hpp"
#include <vector>
#include <memory>
#include <iostream>

using namespace HFDP::Bridge::Remotes;

int main( int argc, char* argv[] ) {

  std::cout << argv[0] << " Version " << Remotes_VERSION_MAJOR << "."
  << Remotes_VERSION_MINOR << std::endl << std::endl;

  std::vector< RemoteControl* > remotes;

  std::unique_ptr< SonyControl >
    sonyControl( new SonyControl( "XBR in living room" ) );
  remotes.push_back( sonyControl.get() );

  std::unique_ptr< RCAControl >
    rcaControl( new RCAControl( "19 inch in kitchen" ) );
  remotes.push_back( rcaControl.get() );

  // turn on all tv's
  std::vector< RemoteControl* >::iterator iterator;
  for( iterator = remotes.begin(); iterator != remotes.end(); iterator++ ) {
    ( *iterator )->on();
  }

  sonyControl->nextChannel();
  rcaControl->setStation( 35 );

  // turn off all tv's
  for( iterator = remotes.begin(); iterator != remotes.end(); iterator++ ) {
    ( *iterator )->off();
  }

  return 0;
}

