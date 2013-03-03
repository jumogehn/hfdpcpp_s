#ifndef	_HFDP_CPP_STRATEGY_RUBBER_DUCK_HPP_
#define _HFDP_CPP_STRATEGY_RUBBER_DUCK_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
  namespace Strategy {

    class RubberDuck : public Duck {

    public:
      RubberDuck() : Duck( new FlyNoWay(), new Squeak() )
      {
        HUM_TRACE(ACE_TEXT("RubberDuck::RubberDuck"));
      }
      void display() const
      {
        HUM_TRACE(ACE_TEXT("RubberDuck::display"));
        std::cout << "I'm a rubber duck" << std::endl;
      }
    };

  } // namespace Strategy
} // namespace HeadFirstDesignPatterns

#endif
