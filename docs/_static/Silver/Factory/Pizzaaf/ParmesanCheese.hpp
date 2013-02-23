#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_PARMESAN_CHEESE_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_PARMESAN_CHEESE_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
  namespace Factory {
    namespace Abstract {

      class ParmesanCheese : public Cheese {

      public:
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("ParmesanCheese::toString"));
          return "Shredded Parmesan";
        }
      };

    } // namespace Abstract
  } // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif
