#ifndef	_HFDP_CPP_ADAPTER_TURKEY_HPP_
#define _HFDP_CPP_ADAPTER_TURKEY_HPP_

#include "Ducks.hpp"
#include <stdio.h>

namespace HeadFirstDesignPatterns {
  namespace Adapter {
    namespace Ducks {

      class Turkey {

      public:
        virtual ~Turkey()
        {
          fprintf(stdout, "Turkey::~Turkey\n");
        }
        virtual void gobble() const = 0;
        virtual void fly() const = 0;
      };

    } // namespace Ducks
  } // namespace Adapter
} // namespace HeadFirstDesignPatterns

#endif
