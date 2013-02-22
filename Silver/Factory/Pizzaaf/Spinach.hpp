#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_SPINACH_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_SPINACH_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
  namespace Factory {
    namespace Abstract {

      class Spinach : public Veggies {

      public:
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("Spinach::toString"));
          return ( "Spinach" );
        }
      };

    } // namespace Abstract
  } // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif
