#ifndef	_HFDP_CPP_TEMPLATE_BARISTA_TEA_WITH_HOOK_HPP_
#define _HFDP_CPP_TEMPLATE_BARISTA_TEA_WITH_HOOK_HPP_

#include "Barista.hpp"

namespace HeadFirstDesignPatterns {
  namespace Template {
    namespace Barista {

      class TeaWithHook : public CaffeineBeverageWithHook {
        std::string getUserInput() const
        {
          std::string value;
          std::cout << "Would you like lemon with your tea (y/n)? " << std::endl;
          std::cin >> value;
          return value;
        }
      public:
        void brew() const
        {
          std::cout << "Steeping the tea" << std::endl;
        }
        void addCondiments() const
        {
          std::cout << "Adding Lemon" << std::endl;
        }
        bool customerWantsCondiments() const
        {
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
