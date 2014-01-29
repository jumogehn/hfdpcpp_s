#ifndef	_HFDP_CPP_ADAPTER_WILD_TURKEY_HPP_
#define _HFDP_CPP_ADAPTER_WILD_TURKEY_HPP_

#include "Ducks.hpp"
#include <stdio.h>

namespace HeadFirstDesignPatterns {
  namespace Adapter {
    namespace Ducks {

      class WildTurkey : public Turkey {

      public:
        void fly() const
        {
          fprintf(stdout, "WildTurkey::fly\n");
          std::cout << "I'm flying a short distance" << std::endl;
        }
        void gobble() const
        {
          fprintf(stdout, "WildTurkey::gobble\n");
          std::cout << "Gobble gobble" << std::endl;
        }
      };

    } // namespace Ducks
  } // namespace Adapter
} // namespace HeadFirstDesignPatterns

#endif
