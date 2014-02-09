//===--- HeatIndexDisplay.hpp - ---------------------------------*- C++ -*-===//
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

#include "HeatIndexDisplay.hpp"
#include "Utilities.hpp"
#include "Subject.hpp"
#include <cassert>
#include <iostream>

using namespace HFDP::Observer;

float HeatIndexDisplay::computeHeatIndex( float t, float rh ) const
{
  PrintMessage("HeatIndexDisplay::computeHeatIndex");
  float index = (float)((16.923 + (0.185212 * t) + (5.37941 * rh)
                         - (0.100254 * t * rh) + (0.00941695 * (t * t) )
                         + (0.00728898 * (rh * rh) )
                         + (0.000345372 * (t * t * rh) )
                         - (0.000814971 * (t * rh * rh) )
                         + (0.0000102102 * (t * t * rh * rh) )
                         - (0.000038646 * (t * t * t) )
                         + (0.0000291583 * (rh * rh * rh) )
                         + (0.00000142721 * (t * t * t * rh) )
                         + (0.000000197483 * (t * rh * rh * rh) )
                         - (0.0000000218429 * (t * t * t * rh * rh) )
                         + 0.000000000843296 * (t * t * rh * rh * rh) )
                        - (0.0000000000481975 * (t * t * t * rh * rh * rh)
                          ) );
  return index;
}

HeatIndexDisplay::HeatIndexDisplay( Subject* weatherData ) :
  _weatherData( weatherData ), _heatIndex( 0.0 )
{
  assert( weatherData );
  PrintMessage("HeatIndexDisplay::HeatIndexDisplay");
  _weatherData->registerObserver( this );
}
HeatIndexDisplay::~HeatIndexDisplay()
{
  PrintMessage("HeatIndexDisplay::~HeatIndexDisplay");
  _weatherData->removeObserver( this );
}
void HeatIndexDisplay::update( float t, float rh, float pressure )
{
  PrintMessage("HeatIndexDisplay::update");
  _heatIndex = computeHeatIndex( t, rh );
  display();
}

void HeatIndexDisplay::display() const
{
  PrintMessage("HeatIndexDisplay::display");
  std::cout.setf( std::ios::showpoint);
  std::cout.precision(7);
  std::cout << "Heat index is " << _heatIndex << std::endl;
}
