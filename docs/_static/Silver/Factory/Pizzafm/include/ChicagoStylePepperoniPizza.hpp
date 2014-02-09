//===--- ChicagoStylePepperoniPizza.hpp - -----------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_FACTORY_CHICAGO_PEPPERONI_PIZZA_HPP_
#define _HFDP_CPP_FACTORY_CHICAGO_PEPPERONI_PIZZA_HPP_

#include "Pizza.hpp"

namespace HFDP {
  namespace Factory {
    namespace Method {

      class ChicagoStylePepperoniPizza : public Pizza {

      public:
        ChicagoStylePepperoniPizza();
        void cut() const;
      };

    } // namespace Method
  } // namespace Factory
} // namespace HFDP

#endif
