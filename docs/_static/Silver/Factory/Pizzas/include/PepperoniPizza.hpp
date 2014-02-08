//===--- PepperoniPizza.hpp - -----------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_SIMPLE_FACTORY_PEPPERONI_PIZZA_HPP_
#define _HFDP_CPP_SIMPLE_FACTORY_PEPPERONI_PIZZA_HPP_

#include "Pizza.hpp"

namespace HeadFirstDesignPatterns {
  namespace Factory {
    namespace Simple {

      class PepperoniPizza : public Pizza {

      public:
        PepperoniPizza();
      };

    } // namespace Simple
  } // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif
