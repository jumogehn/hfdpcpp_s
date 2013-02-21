#ifndef	_HFDP_CPP_ADAPTER_TURKEY_HPP_
#define _HFDP_CPP_ADAPTER_TURKEY_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Ducks.hpp"

namespace HeadFirstDesignPatterns {
  namespace Adapter {
    namespace Ducks {

      class Turkey {

      public:
        virtual ~Turkey()
        {
          HUM_TRACE(ACE_TEXT("Turkey::~Turkey"));
        }
        virtual void gobble() const = 0;
        virtual void fly() const = 0;
      };

    } // namespace Ducks
  } // namespace Adapter
} // namespace HeadFirstDesignPatterns

#endif
