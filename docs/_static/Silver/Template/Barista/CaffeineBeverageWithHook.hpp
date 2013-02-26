#ifndef	_HFDP_CPP_TEMPLATE_BARISTA_CAFFEINE_BEVERAGE_WITH_HOOK_HPP_
#define _HFDP_CPP_TEMPLATE_BARISTA_CAFFEINE_BEVERAGE_WITH_HOOK_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Barista.hpp"

namespace HeadFirstDesignPatterns {
  namespace Template {
    namespace Barista {

      class CaffeineBeverageWithHook {
      protected:
        virtual void boilWater() const
        {
          HUM_TRACE(ACE_TEXT("CaffeineBeverageWithHook::boilWater"));
          std::cout << "Boiling water" << std::endl;
        }
        virtual void pourInCup() const
        {
          HUM_TRACE(ACE_TEXT("CaffeineBeverageWithHook::pourInCup"));
          std::cout << "Pouring into cup" << std::endl;
        }
        virtual bool customerWantsCondiments()
        {
          HUM_TRACE(ACE_TEXT("CaffeineBeverageWithHook::"
                             "customerWantsCondiments"));
          return true;
        }
      public:
        virtual ~CaffeineBeverageWithHook()
        {
          HUM_TRACE(ACE_TEXT("CaffeineBeverageWithHook::"
                             "~CaffeineBeverageWithHook"));
        }
        virtual void prepareRecipe()
        {
          HUM_TRACE(ACE_TEXT("CaffeineBeverageWithHook::prepareRecipe"));
          boilWater();
          brew();
          pourInCup();
          if( customerWantsCondiments() ) {
            addCondiments();
          }
        }
        virtual void brew() const = 0;
        virtual void addCondiments() const = 0;
      };

    } // namespace Barista
  } // namespace Template
} // namespace HeadFirstDesignPatterns

#endif
