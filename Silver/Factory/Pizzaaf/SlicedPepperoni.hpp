#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_SLICED_PEPPERONI_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_SLICED_PEPPERONI_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
  namespace Factory {
    namespace Abstract {

      class SlicedPepperoni : public Pepperoni {

      public:
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("SlicedPepperoni::toString"));
          return "Sliced Pepperoni";
        }
      };

    } // namespace Abstract
  } // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif
