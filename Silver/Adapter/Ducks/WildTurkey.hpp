#ifndef	_HFDP_CPP_ADAPTER_WILD_TURKEY_HPP_
#define _HFDP_CPP_ADAPTER_WILD_TURKEY_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Ducks.hpp"

namespace HeadFirstDesignPatterns {
  namespace Adapter {
    namespace Ducks {

      class WildTurkey : public Turkey {

      public:
        void fly() const
        {
          HUM_TRACE(ACE_TEXT("WildTurkey::fly"));
          std::cout << "I'm flying a short distance" << std::endl;
        }
        void gobble() const
        {
          HUM_TRACE(ACE_TEXT("WildTurkey::gobble"));
          std::cout << "Gobble gobble" << std::endl;
        }
      };

    } // namespace Ducks
  } // namespace Adapter
} // namespace HeadFirstDesignPatterns

#endif
