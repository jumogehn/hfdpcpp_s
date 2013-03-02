#ifndef	_HFDP_CPP_OBSERVER_SUBJECT_HPP_
#define _HFDP_CPP_OBSERVER_SUBJECT_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "WeatherStation.hpp"

namespace HeadFirstDesignPatterns {
  namespace Observer {

    class Subject {

    protected:
      virtual ~Subject()
      {
        HUM_TRACE(ACE_TEXT("Subject::~Subject"));
      }
    public:
      virtual void registerObserver( Observer* o ) = 0;
      virtual void removeObserver( Observer* o ) = 0;
      virtual void notifyObservers() const = 0;
    };

  } // namespace Observer
} // namespace HeadFirstDesignPatterns

#endif
