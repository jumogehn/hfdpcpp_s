#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_CHEESE_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_CHEESE_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
  namespace Factory {
    namespace Abstract {

      class Cheese {

      public: virtual ~Cheese()
              {
                HUM_TRACE(ACE_TEXT("Cheese::~Cheese"));
              }
              virtual std::string toString() const = 0;
      };

    } // namespace Abstract
  } // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif
