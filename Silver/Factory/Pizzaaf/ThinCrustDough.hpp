#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_THIN_CRUST_DOUGH_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_THIN_CRUST_DOUGH_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
  namespace Factory {
    namespace Abstract {

      class ThinCrustDough : public Dough {
      public:
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("ThinCrustDough::toString"));
          return "Thin Crust Dough";
        }
      };

    } // namespace Abstract
  } // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif
