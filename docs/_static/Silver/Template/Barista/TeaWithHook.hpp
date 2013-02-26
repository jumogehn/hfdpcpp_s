#ifndef	_HFDP_CPP_TEMPLATE_BARISTA_TEA_WITH_HOOK_HPP_
#define _HFDP_CPP_TEMPLATE_BARISTA_TEA_WITH_HOOK_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Barista.hpp"

namespace HeadFirstDesignPatterns {
  namespace Template {
    namespace Barista {

      class TeaWithHook : public CaffeineBeverageWithHook {
        std::string getUserInput() const
        {
          HUM_TRACE(ACE_TEXT("TeaWithHook::getUserInput"));
          std::string value;
          std::cout << "Would you like lemon with your tea (y/n)? " << std::endl;
          std::cin >> value;
          return value;
        }
      public:
        void brew() const
        {
          HUM_TRACE(ACE_TEXT("TeaWithHook::brew"));
          std::cout << "Steeping the tea" << std::endl;
        }
        void addCondiments() const
        {
          HUM_TRACE(ACE_TEXT("TeaWithHook::addCondiments"));
          std::cout << "Adding Lemon" << std::endl;
        }
        bool customerWantsCondiments()
        {
          HUM_TRACE(ACE_TEXT("TeaWithHook::customerWantsCondiments"));
          bool value = false;
          std::string answer = getUserInput();
          if( answer.find('y') != -1 ) {
            value = true;
          }
          return value;
        }
      };

    } // namespace Barista
  } // namespace Template
} // namespace HeadFirstDesignPatterns

#endif
