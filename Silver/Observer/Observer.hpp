#ifndef	_HFDP_CPP_OBSERVER_OBSERVER_HPP_
#define _HFDP_CPP_OBSERVER_OBSERVER_HPP_

#include "WeatherStation.hpp"

namespace HeadFirstDesignPatterns {
  namespace Observer {

    class Observer {

    protected:
      virtual ~Observer()
      {}
    public:
      virtual void update(float temp, float humidity, float pressure) = 0;
    };

  } // namespace Observer
} // namespace HeadFirstDesignPatterns

#endif
