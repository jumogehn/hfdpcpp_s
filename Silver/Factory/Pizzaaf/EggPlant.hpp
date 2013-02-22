#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_EGGPLANT_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_EGGPLANT_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
  namespace Factory {
    namespace Abstract {

      class Eggplant : public Veggies {

      public:
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("Eggplant::toString"));
          return "Eggplant";
        }
      };

    } // namespace Abstract
  } // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif
