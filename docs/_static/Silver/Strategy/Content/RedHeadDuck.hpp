#ifndef	_HFDP_CPP_STRATEGY_REDHEAD_DUCK_HPP_
#define _HFDP_CPP_STRATEGY_REDHEAD_DUCK_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
  namespace Strategy {

    class RedHead : public Duck {

    public:
      RedHead() : Duck( new FlyWithWings(), new Quack() )
      {
        HUM_TRACE(ACE_TEXT("RedHead::RedHead"));
      }
      void display() const
      {
        HUM_TRACE(ACE_TEXT("RedHead::display"));
        std::cout << "I'm a real Red Headed duck" << std::endl;
      }
    };

  } // namespace Strategy
} // namespace HeadFirstDesignPatterns

#endif
