#ifndef	_HFDP_CPP_ADAPTER_MALLARD_DUCK_HPP_
#define _HFDP_CPP_ADAPTER_MALLARD_DUCK_HPP_

#include "Ducks.hpp"
#include <stdio.h>

namespace HeadFirstDesignPatterns {
  namespace Adapter {
    namespace Ducks {

      class MallardDuck : public Duck {

      public:
        void fly() const
        {
          fprintf(stdout, "MallardDuck::fly\n");
          std::cout << "I'm flying" << std::endl;
        }
        void quack() const
        {

          fprintf(stdout, "MallardDuck::quack\n");
          std::cout << "Quack" << std::endl;
        }
      };

    } // namespace Ducks
  } // namespace Adapter
} // namespace HeadFirstDesignPatterns

#endif
