#ifndef	_HFDP_CPP_ADAPTER_MALLARD_DUCK_HPP_
#define _HFDP_CPP_ADAPTER_MALLARD_DUCK_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Ducks.hpp"

namespace HeadFirstDesignPatterns {
  namespace Adapter {
    namespace Ducks {

      class MallardDuck : public Duck {

      public:
        void fly() const
        {
          HUM_TRACE(ACE_TEXT("MallardDuck::fly"));
          std::cout << "I'm flying" << std::endl;
        }
        void quack() const
        {
          HUM_TRACE(ACE_TEXT("MallardDuck::quack"));
          std::cout << "Quack" << std::endl;
        }
      };

    } // namespace Ducks
  } // namespace Adapter
} // namespace HeadFirstDesignPatterns

#endif
