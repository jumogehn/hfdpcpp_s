#ifndef	_HFDP_CPP_STRATEGY_QUACK_BEHAVIOR_HPP_
#define _HFDP_CPP_STRATEGY_QUACK_BEHAVIOR_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
  namespace Strategy {

    class QuackBehavior {

    public:
      virtual ~QuackBehavior()
      {
        HUM_TRACE(ACE_TEXT("QuackBehavior::~QuackBehavior"));
      }
      virtual void quack() const = 0;
    };

  } // namespace Strategy
} // namespace HeadFirstDesignPatterns

#endif
