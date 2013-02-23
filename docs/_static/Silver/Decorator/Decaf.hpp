#ifndef	_HFDP_CPP_DECORATOR_DECAF_HPP_
#define _HFDP_CPP_DECORATOR_DECAF_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Starbuzz.hpp"

namespace HeadFirstDesignPatterns {
  namespace Decorator {

    class Decaf : public Beverage {

    public:
      Decaf()
      {
        HUM_TRACE(ACE_TEXT("Decaf::Decaf"));
        _description = "Decaf Coffee";
      }
      double cost() const
      {
        HUM_TRACE(ACE_TEXT("Decaf::cost"));
        return 1.05;
      }
    };

  } // namespace Observer
} // namespace HeadFirstDesignPatterns

#endif
