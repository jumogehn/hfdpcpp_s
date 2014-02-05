//===--- Remote.cpp - -------------------------------------------*- C++ -*-===//
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



#include "RemoteControl.hpp"
#include "Light.hpp"
#include "CeilingFan.hpp"
#include "GarageDoor.hpp"
#include "Stereo.hpp"
#include "LightOnCommand.hpp"
#include "LightOffCommand.hpp"
#include "CeilingFanOnCommand.hpp"
#include "CeilingFanOffCommand.hpp"
#include "GarageDoorUpCommand.hpp"
#include "GarageDoorDownCommand.hpp"
#include "StereoOnWithCDCommand.hpp"
#include "StereoOffCommand.hpp"
#include <memory>
#include <iostream>



using namespace HFDP::Command::Remote;

int main( int argc, char* argv[] ) {

  std::unique_ptr< RemoteControl > remoteControl(
    new RemoteControl() );

  std::unique_ptr< Light > livingRoomLight(
    new Light( "Living Room" ) );
  std::unique_ptr< Light > kitchenLight(
    new Light( "Kitchen" ) );
  std::unique_ptr< CeilingFan > ceilingFan(
    new CeilingFan( "Living Room" ) );
  std::unique_ptr< GarageDoor > garageDoor(
    new GarageDoor( "Garage" ) );
  std::unique_ptr< Stereo > stereo(
    new Stereo( "Living Room" ) );

  std::unique_ptr< LightOnCommand > livingRoomLightOn(
    new LightOnCommand( livingRoomLight.get() ) );
  std::unique_ptr< LightOffCommand > livingRoomLightOff(
    new LightOffCommand( livingRoomLight.get() ) );
  std::unique_ptr< LightOnCommand > kitchenLightOn(
    new LightOnCommand( kitchenLight.get() ) );
  std::unique_ptr< LightOffCommand > kitchenLightOff(
    new LightOffCommand( kitchenLight.get() ) );

  std::unique_ptr< CeilingFanOnCommand > ceilingFanOn(
    new CeilingFanOnCommand( ceilingFan.get() ) );
  std::unique_ptr< CeilingFanOffCommand > ceilingFanOff(
    new CeilingFanOffCommand( ceilingFan.get() ) );

  std::unique_ptr< GarageDoorUpCommand > garageDoorUp(
    new GarageDoorUpCommand( garageDoor.get() ) );
  std::unique_ptr< GarageDoorDownCommand > garageDoorDown(
    new GarageDoorDownCommand( garageDoor.get() ) );

  std::unique_ptr< StereoOnWithCDCommand > stereoOnWithCD(
    new StereoOnWithCDCommand( stereo.get() ) );
  std::unique_ptr< StereoOffCommand > stereoOff(
    new StereoOffCommand( stereo.get() ) );

  remoteControl->setCommand( 0, livingRoomLightOn.get(),
                             livingRoomLightOff.get() );
  remoteControl->setCommand( 1, kitchenLightOn.get(), kitchenLightOff.get() );
  remoteControl->setCommand( 2, ceilingFanOn.get(), ceilingFanOff.get() );
  remoteControl->setCommand( 3, stereoOnWithCD.get(), stereoOff.get() );
  remoteControl->setCommand( 4, garageDoorUp.get(), garageDoorDown.get() );

  std::cout << remoteControl->toString() << std::endl;

  remoteControl->onButtonWasPushed( 0 );
  remoteControl->offButtonWasPushed( 0 );
  remoteControl->onButtonWasPushed( 1 );
  remoteControl->offButtonWasPushed( 1 );
  remoteControl->onButtonWasPushed( 2 );
  remoteControl->offButtonWasPushed( 2 );
  remoteControl->onButtonWasPushed( 3 );
  remoteControl->offButtonWasPushed( 3 );
  remoteControl->onButtonWasPushed( 4 );
  remoteControl->offButtonWasPushed( 4 );

  return 0;
}

