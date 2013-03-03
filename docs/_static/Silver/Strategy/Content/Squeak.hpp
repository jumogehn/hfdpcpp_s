#ifndef	_HFDP_CPP_STRATEGY_SQUEAK_HPP_
#define _HFDP_CPP_STRATEGY_SQUEAK_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
  namespace Strategy {

    class Squeak : public QuackBehavior {

    public:
      void quack () const
      {
        HUM_TRACE(ACE_TEXT("Squeak::quack"));
        std::cout << "Squeak" << std::endl;
      }
    };

  } // namespace Strategy
} // namespace HeadFirstDesignPatterns

#endif
