#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_FRESH_CLAMS_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_FRESH_CLAMS_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
  namespace Factory {
    namespace Abstract {

      class FreshClams : public Clams {

      public:
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("FreshClams::toString"));
          return "Fresh Clams from Long Island Sound";
        }
      };

    } // namespace Abstract
  } // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif
