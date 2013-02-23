#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_REGGINANO_CHEESE_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_REGGINANO_CHEESE_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
  namespace Factory {
    namespace Abstract {

      class ReggianoCheese : public Cheese {

      public:
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("ReggianoCheese::toString"));
          return "Reggiano Cheese";
        }
      };

    } // namespace Abstract
  } // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif
