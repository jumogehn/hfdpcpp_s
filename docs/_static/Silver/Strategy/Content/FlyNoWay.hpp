#ifndef	_HFDP_CPP_STRATEGY_FLY_NO_WAY_WINGS_HPP_
#define _HFDP_CPP_STRATEGY_FLY_NO_WAY_WINGS_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
  namespace Strategy {

    class FlyNoWay : public FlyBehavior {

    public:
      void fly () const
      {
        HUM_TRACE(ACE_TEXT("FlyNoWay::fly"));
        std::cout << "I can't fly" << std::endl;
      }
    };

  } // namespace Strategy
} // namespace HeadFirstDesignPatterns

#endif
