#ifndef	_HFDP_CPP_TEMPLATE_BARISTA_CAFFEINE_BEVERAGE_WITH_HOOK_HPP_
#define _HFDP_CPP_TEMPLATE_BARISTA_CAFFEINE_BEVERAGE_WITH_HOOK_HPP_

#include "Barista.hpp"

namespace HeadFirstDesignPatterns {
  namespace Template {
    namespace Barista {

      class CaffeineBeverageWithHook {
      protected:
        virtual void boilWater() const
        {
          std::cout << "Boiling water" << std::endl;
        }
        virtual void pourInCup() const
        {
          std::cout << "Pouring into cup" << std::endl;
        }
        virtual bool customerWantsCondiments()
        {
          return true;
        }
      public:
        virtual ~CaffeineBeverageWithHook()
        {}
        virtual void prepareRecipe()
        {
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
