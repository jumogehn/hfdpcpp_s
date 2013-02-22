#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_VEGGIES_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_VEGGIES_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
  namespace Factory {
    namespace Abstract {

      class Veggies {

      public:
        virtual ~Veggies()
        {
          HUM_TRACE(ACE_TEXT("Veggies::~Veggies"));
        }
        virtual std::string toString() const = 0;
      };

    } // namespace Abstract
  } // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif
