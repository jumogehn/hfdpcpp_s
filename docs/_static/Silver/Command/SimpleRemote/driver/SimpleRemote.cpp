//===--- SimpleRemote.cpp - -------------------------------------*- C++ -*-===//
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


#include "SimpleRemoteControl.hpp"
#include "Light.hpp"
#include "GarageDoor.hpp"
#include "LightOnCommand.hpp"
#include "GarageDoorOpenCommand.hpp"
#include <memory>

using namespace HFDP::Command::SimpleRemote;

int main( int argc, char* argv[] ) {

  std::unique_ptr< SimpleRemoteControl > remote( new SimpleRemoteControl() );
  std::unique_ptr< Light > light( new Light() );
  std::unique_ptr< GarageDoor > garageDoor( new GarageDoor() );
  std::unique_ptr< LightOnCommand > lightOn( new LightOnCommand( light.get() ) );
  std::unique_ptr< GarageDoorOpenCommand >
    garageOpen( new GarageDoorOpenCommand(garageDoor.get() ) );

  remote->setCommand( lightOn.get() );
  remote->buttonWasPressed();
  remote->setCommand( garageOpen.get() );
  remote->buttonWasPressed();

  return 0;
}
