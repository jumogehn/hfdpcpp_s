#ifndef	_HFDP_CPP_TEMPLATE_BARISTA_TEA_HPP_
#define _HFDP_CPP_TEMPLATE_BARISTA_TEA_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Barista.hpp"

namespace HeadFirstDesignPatterns {
  namespace Template {
    namespace Barista {

      class Tea : public CaffeineBeverage {

      public:
        void brew() const
        {
          HUM_TRACE(ACE_TEXT("Tea::brew"));
          std::cout << "Steeping the tea" << std::endl;
        }
        void addCondiments() const
        {
          HUM_TRACE(ACE_TEXT("Tea::addCondiments"));
          std::cout << "Adding Lemon" << std::endl;
        }
      };

    } // namespace Barista
  } // namespace Template
} // namespace HeadFirstDesignPatterns

#endif
