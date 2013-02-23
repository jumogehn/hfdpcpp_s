#ifndef	_HFDP_CPP_TEMPLATE_BARISTA_COFFEE_WITH_HOOK_HPP_
#define _HFDP_CPP_TEMPLATE_BARISTA_COFFEE_WITH_HOOK_HPP_

#include "Barista.hpp"

namespace HeadFirstDesignPatterns {
  namespace Template {
    namespace Barista {

      class CoffeeWithHook : public CaffeineBeverageWithHook {
      private:
        std::string getUserInput() const
        {
          std::string value;
          std::cout << "Would you like milk and sugar with your coffee (y/n)? "
            << std::endl;
          std::cin >> value;
          return value;
        }

      public:
        void brew() const
        {
          std::cout << "Dripping Coffee through filter" << std::endl;
        }
        void addCondiments() const
        {
          std::cout << "Adding Sugar and Milk" << std::endl;
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
