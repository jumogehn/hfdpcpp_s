#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_DOUGH_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_DOUGH_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
  namespace Factory {
    namespace Abstract {

      class Dough {

      public:
        virtual ~Dough()
        {
          HUM_TRACE(ACE_TEXT("Dough::~Dough"));
        }
        virtual std::string toString() const = 0;
      };

    } // namespace Abstract
  } // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif
