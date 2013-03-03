#ifndef	_HFDP_CPP_STRATEGY_FLY_WITH_WINGS_HPP_
#define _HFDP_CPP_STRATEGY_FLY_WITH_WINGS_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
  namespace Strategy {

    class FlyWithWings : public FlyBehavior {

    public:
      void fly () const
      {
        HUM_TRACE(ACE_TEXT("FlyWithWings::fly"));
        std::cout << "I'm flying!!" << std::endl;
      }
    };

  } // namespace Strategy
} // namespace HeadFirstDesignPatterns

#endif
