#ifndef	_HFDP_CPP_STRATEGY_FAKE_QUACK_HPP_
#define _HFDP_CPP_STRATEGY_FAKE_QUACK_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
  namespace Strategy {

    class FakeQuack : public QuackBehavior {

    public:
      void quack () const
      {
        HUM_TRACE(ACE_TEXT("FakeQuack::quack"));
        std::cout << "Qwak" << std::endl;
      }
    };

  } // namespace Strategy
} // namespace HeadFirstDesignPatterns

#endif
