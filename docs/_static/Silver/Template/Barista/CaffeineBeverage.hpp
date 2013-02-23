#ifndef	_HFDP_CPP_TEMPLATE_BARISTA_CAFFEINE_BEVERAGE_HPP_
#define _HFDP_CPP_TEMPLATE_BARISTA_CAFFEINE_BEVERAGE_HPP_

#include "Barista.hpp"

namespace HeadFirstDesignPatterns {
  namespace Template {
    namespace Barista {

      class CaffeineBeverage {
        void boilWater() const
        {
          std::cout << "Boiling water" << std::endl;
        }
        void pourInCup() const
        {
          std::cout << "Pouring into cup" << std::endl;
        }
      protected:
        virtual void brew() const = 0;
        virtual void addCondiments() const = 0;

      public:
        virtual ~CaffeineBeverage()
        {}
        virtual void prepareRecipe() {
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
