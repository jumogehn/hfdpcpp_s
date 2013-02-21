#ifndef	_HFDP_CPP_ADAPTER_DUCK_HPP_
#define _HFDP_CPP_ADAPTER_DUCK_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Ducks.hpp"

namespace HeadFirstDesignPatterns {
  namespace Adapter {
    namespace Ducks {

      class Duck {

      public:
        virtual ~Duck()
        {
          HUM_TRACE(ACE_TEXT("Duck::~Duck()"));
        }
        virtual void fly() const = 0;
        virtual void quack() const = 0;
      };

    } // namespace Ducks
  } // namespace Adapter
} // namespace HeadFirstDesignPatterns

#endif
