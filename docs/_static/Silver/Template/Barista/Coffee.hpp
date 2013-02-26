#ifndef	_HFDP_CPP_TEMPLATE_BARISTA_COFFEE_HPP_
#define _HFDP_CPP_TEMPLATE_BARISTA_COFFEE_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Barista.hpp"

namespace HeadFirstDesignPatterns {
  namespace Template {
    namespace Barista {

      class Coffee : public CaffeineBeverage {

      public:
        void brew() const
        {
          HUM_TRACE(ACE_TEXT("Coffee::brew"));
          std::cout << "Dripping Coffee through filter" << std::endl;
        }
        void addCondiments() const
        {
          HUM_TRACE(ACE_TEXT("Coffee::addCondiments"));
          std::cout << "Adding Sugar and Milk" << std::endl;
        }
      };

    } // namespace Barista
  } // namespace Template
} // namespace HeadFirstDesignPatterns

#endif
