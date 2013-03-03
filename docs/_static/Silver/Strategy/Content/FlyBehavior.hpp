#ifndef	_HFDP_CPP_STRATEGY_FLY_BEHAVIOR_HPP_
#define _HFDP_CPP_STRATEGY_FLY_BEHAVIOR_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
  namespace Strategy {

    class FlyBehavior {

    public:
      virtual ~FlyBehavior()
      {
        HUM_TRACE(ACE_TEXT("FlyBehavior::~FlyBehavior"));
      }
      virtual void fly () const = 0;
    };

  } // namespace Strategy
} // namespace HeadFirstDesignPatterns

#endif
