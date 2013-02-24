#ifndef	_HFDP_CPP_DECORATOR_HOUSE_BLEND_HPP_
#define _HFDP_CPP_DECORATOR_HOUSE_BLEND_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Starbuzz.hpp"

namespace HeadFirstDesignPatterns {
  namespace Decorator {

    class HouseBlend : public Beverage {

    public:
      HouseBlend()
      {
        HUM_TRACE(ACE_TEXT("HouseBlend::HouseBlend"));
        _description = "House Blend Coffee";
      }
      double cost() const
      {
        HUM_TRACE(ACE_TEXT("HouseBlend::cost"));
        return 0.89;
      }
    };

  } // namespace Observer
} // namespace HeadFirstDesignPatterns

#endif
