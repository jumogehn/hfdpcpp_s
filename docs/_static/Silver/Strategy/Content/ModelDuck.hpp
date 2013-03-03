#ifndef	_HFDP_CPP_STRATEGY_MODEL_DUCK_HPP_
#define _HFDP_CPP_STRATEGY_MODEL_DUCK_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
  namespace Strategy {

    class ModelDuck : public Duck {

    public:
      ModelDuck() : Duck( new FlyNoWay(), new FakeQuack() )
      {
        HUM_TRACE(ACE_TEXT("ModelDuck::ModelDuck"));
      }
      void display() const
      {
        HUM_TRACE(ACE_TEXT("ModelDuck::display"));
        std::cout << "I'm a model duck" << std::endl;
      }
    };

  } // namespace Strategy
} // namespace HeadFirstDesignPatterns

#endif
