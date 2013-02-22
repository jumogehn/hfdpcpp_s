#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_MARINARA_SAUCE_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_MARINARA_SAUCE_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
  namespace Factory {
    namespace Abstract {

      class MarinaraSauce : public Sauce {

      public:
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("MarinaraSauce::toString"));
          return "Marinara Sauce";
        }
      };

    } // namespace Abstract
  } // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif
