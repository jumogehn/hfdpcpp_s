#ifndef	_HFDP_CPP_TEMPLATE_BARISTA_CAFFEINE_BEVERAGE_HPP_
#define _HFDP_CPP_TEMPLATE_BARISTA_CAFFEINE_BEVERAGE_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Barista.hpp"

namespace HeadFirstDesignPatterns {
  namespace Template {
    namespace Barista {

      class CaffeineBeverage {
        void boilWater() const
        {
          HUM_TRACE(ACE_TEXT("CaffeineBeverage::boilWater"));
          std::cout << "Boiling water" << std::endl;
        }
        void pourInCup() const
        {
          HUM_TRACE(ACE_TEXT("CaffeineBeverage::pourInCup"));
          std::cout << "Pouring into cup" << std::endl;
        }
      protected:
        virtual void brew() const = 0;
        virtual void addCondiments() const = 0;

      public:
        virtual ~CaffeineBeverage()
        {
          HUM_TRACE(ACE_TEXT("CaffeineBeverage::~CaffeineBeverage"));
        }
        virtual void prepareRecipe() {
          HUM_TRACE(ACE_TEXT("CaffeineBeverage::prepareRecipe"));
          boilWater();
          brew();
          pourInCup();
          addCondiments();
        }
      };

    } // namespace Barista
  } // namespace Template
} // namespace HeadFirstDesignPatterns

#endif
