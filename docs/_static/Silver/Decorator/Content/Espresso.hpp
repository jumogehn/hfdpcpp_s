#ifndef	_HFDP_CPP_DECORATOR_ESPRESSO_HPP_
#define _HFDP_CPP_DECORATOR_ESPRESSO_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Starbuzz.hpp"

namespace HeadFirstDesignPatterns {
  namespace Decorator {

    class Espresso : public Beverage {

    public:
      Espresso()
      {
        HUM_TRACE(ACE_TEXT("Espresso::Espresso"));
        _description = "Espresso";
      }
      double cost() const
      {
        HUM_TRACE(ACE_TEXT("Espresso::cost"));
        return 1.99;
      }
    };

  } // namespace Observer
} // namespace HeadFirstDesignPatterns

#endif
