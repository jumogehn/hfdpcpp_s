#ifndef	_HFDP_CPP_DECORATOR_DARK_ROAST_HPP_
#define _HFDP_CPP_DECORATOR_DARK_ROAST_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Starbuzz.hpp"

namespace HeadFirstDesignPatterns {
  namespace Decorator {

    class DarkRoast : public Beverage {

    public:
      DarkRoast()
      {
        HUM_TRACE(ACE_TEXT("DarkRoast::DarkRoast"));
        _description = "Dark Roast Coffee";
      }
      double cost() const
      {
        HUM_TRACE(ACE_TEXT("DarkRoast::cost"));
        return 0.99;
      }
    };

  } // namespace Observer
} // namespace HeadFirstDesignPatterns

#endif
