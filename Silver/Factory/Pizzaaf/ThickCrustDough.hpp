#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_THICK_CRUST_DOUGH_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_THICK_CRUST_DOUGH_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
  namespace Factory {
    namespace Abstract {

      class ThickCrustDough : public Dough {

      public:
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("ThickCrustDough::toString"));
          return "Thick Crust Dough";
        }
      };

    } // namespace Abstract
  } // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif
