#ifndef	_HFDP_CPP_STRATEGY_DECOY_DUCK_HPP_
#define _HFDP_CPP_STRATEGY_DECOY_DUCK_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
  namespace Strategy {

    class DecoyDuck : public Duck {

    public:
      DecoyDuck() : Duck( new FlyNoWay(), new MuteQuack() )
      {
        HUM_TRACE(ACE_TEXT("DecoyDuck::DecoyDuck"));
      }
      void display() const
      {
        HUM_TRACE(ACE_TEXT("DecoyDuck::display"));
        std::cout << "I'm a duck Decoy" << std::endl;
      }
    };

  } // namespace Strategy
} // namespace HeadFirstDesignPatterns

#endif
