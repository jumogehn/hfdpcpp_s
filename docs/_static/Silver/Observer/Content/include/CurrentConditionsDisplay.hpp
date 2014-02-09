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


#ifndef	_HFDP_CPP_OBSERVER_CURRENT_CONDITIONS_DISPLAY_HPP_
#define _HFDP_CPP_OBSERVER_CURRENT_CONDITIONS_DISPLAY_HPP_

#include "Observer.hpp"
#include "DisplayElement.hpp"
#include "Subject.hpp"

namespace HFDP {
  namespace Observer {

    class CurrentConditionsDisplay : private Observer, private DisplayElement {

      Subject* _weatherData;
      float _temperature;
      float _humidity;

      CurrentConditionsDisplay( const CurrentConditionsDisplay& );
      void operator=( const CurrentConditionsDisplay& );

    public:
      explicit CurrentConditionsDisplay( Subject* weatherData );
      ~CurrentConditionsDisplay();
      void update( float temperature, float humidity, float pressure );
      void display() const;
    };

  } // namespace Observer
} // namespace HFDP

#endif
