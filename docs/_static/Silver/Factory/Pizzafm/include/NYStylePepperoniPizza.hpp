//===--- NYStylePepperoniPizza.hpp - ----------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_FACTORY_NY_PEPPERONI_PIZZA_HPP_
#define _HFDP_CPP_FACTORY_NY_PEPPERONI_PIZZA_HPP_

#include "Pizza.hpp"

namespace HFDP {
  namespace Factory {
    namespace Method {

      class NYStylePepperoniPizza : public Pizza {
      public:
        NYStylePepperoniPizza();
      };

    } // namespace Method
  } // namespace Factory
} // namespace HFDP

#endif
