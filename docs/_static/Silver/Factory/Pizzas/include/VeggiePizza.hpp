//===--- VeggiePizza.hpp - --------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_SIMPLE_FACTORY_VEGGIE_PIZZA_HPP_
#define _HFDP_CPP_SIMPLE_FACTORY_VEGGIE_PIZZA_HPP_

#include "Pizza.hpp"

namespace HeadFirstDesignPatterns {
  namespace Factory {
    namespace Simple {

      class VeggiePizza : public Pizza {
      public:
        VeggiePizza();
      };

    } // namespace Simple
  } // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif
