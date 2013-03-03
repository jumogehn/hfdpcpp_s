#ifndef	_HFDP_CPP_STRATEGY_QUACK_HPP_
#define _HFDP_CPP_STRATEGY_QUACK_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
  namespace Strategy {

    class Quack : public QuackBehavior {

    public:
      void quack () const
      {
        HUM_TRACE(ACE_TEXT("Quack::quack"));
        std::cout << "Quack" << std::endl;
      }
    };

  } // namespace Strategy
} // namespace HeadFirstDesignPatterns

#endif
