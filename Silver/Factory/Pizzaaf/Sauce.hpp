#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_SAUCE_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_SAUCE_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
  namespace Factory {
    namespace Abstract {

      class Sauce {

      public:
        virtual ~Sauce()
        {
          HUM_TRACE(ACE_TEXT("Sauce::~Sauce"));
        }
        virtual std::string toString() const = 0;
      };

    } // namespace Abstract
  } // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif
