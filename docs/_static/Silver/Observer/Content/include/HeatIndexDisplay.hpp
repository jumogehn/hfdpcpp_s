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


#ifndef	_HFDP_CPP_OBSERVER_HEAT_INDEX_DISPLAY_HPP_
#define _HFDP_CPP_OBSERVER_HEAT_INDEX_DISPLAY_HPP_

#include "Observer.hpp"
#include "DisplayElement.hpp"
#include "Subject.hpp"

namespace HFDP {
  namespace Observer {

    class HeatIndexDisplay : private Observer, private DisplayElement {

      Subject* _weatherData;
      float _heatIndex;

      HeatIndexDisplay( const HeatIndexDisplay& ); // Disable copy constructor
      void operator=( const HeatIndexDisplay& ); // Disable assignment operator

      float computeHeatIndex( float t, float rh ) const;

    public:
      explicit HeatIndexDisplay( Subject* weatherData );
      ~HeatIndexDisplay();
      void update( float t, float rh, float pressure );
      void display() const;
    };

  } // namespace Observer
} // namespace HFDP

#endif
