//===--- Duck.hpp - ---------------------------------------------*- C++ -*-===//
//
//                     Head First Design Patterns
//
//
//===----------------------------------------------------------------------===//
///
/// \file
/// \brief
///
//===----------------------------------------------------------------------===//

#ifndef	_HFDP_CPP_ADAPTER_DUCK_HPP_
#define _HFDP_CPP_ADAPTER_DUCK_HPP_

#include "Ducks.hpp"
#include <stdio.h>

namespace HeadFirstDesignPatterns {
  namespace Adapter {
    namespace Ducks {

      class Duck {

      public:
        virtual ~Duck()
        {
          fprintf(stdout, "Duck::~Duck()\n");
        }
        virtual void fly() const = 0;
        virtual void quack() const = 0;
      };

    } // namespace Ducks
  } // namespace Adapter
} // namespace HeadFirstDesignPatterns

#endif
