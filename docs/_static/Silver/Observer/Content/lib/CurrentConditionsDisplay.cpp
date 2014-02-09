//===--- CurrentConditionsDisplay.hpp - -------------------------*- C++ -*-===//
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

#include "CurrentConditionsDisplay.hpp"
#include "Subject.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <iostream>

using namespace HFDP::Observer;

CurrentConditionsDisplay::CurrentConditionsDisplay( Subject* weatherData ) :
  _weatherData( weatherData ), _temperature( 0.0 ), _humidity( 0.0 )
{
  assert( weatherData );
  PrintMessage("CurrentConditionsDisplay"
                     "::CurrentConditionsDisplay");
  _weatherData->registerObserver( this );
}
CurrentConditionsDisplay::~CurrentConditionsDisplay()
{
  PrintMessage("CurrentConditionsDisplay"
                     "::~CurrentConditionsDisplay");
  _weatherData->removeObserver( this );
}
void CurrentConditionsDisplay::update( float temperature, float humidity, float pressure )
{
  PrintMessage("CurrentConditionsDisplay::update");
  _temperature = temperature;
  _humidity = humidity;
  display();
}
void CurrentConditionsDisplay::display() const
{
  PrintMessage("CurrentConditionsDisplay::display");
  std::cout.setf( std::ios::showpoint );
  std::cout.precision(3);
  std::cout << "Current conditions: "	<< _temperature;
  std::cout << " F degrees and " << _humidity;
  std::cout << "% humidity" << std::endl;
}
