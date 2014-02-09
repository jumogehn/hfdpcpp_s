//===--- ChicagoStyleCheesePizza.hpp - --------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_FACTORY_CHICAGO_CHEESE_PIZZA_HPP_
#define _HFDP_CPP_FACTORY_CHICAGO_CHEESE_PIZZA_HPP_

#include "Pizza.hpp"

namespace HFDP {
  namespace Factory {
    namespace Method {

      class ChicagoStyleCheesePizza : public Pizza {

      public:
        ChicagoStyleCheesePizza();
        void cut() const;
      };

    } // namespace Method
  } // namespace Factory
} // namespace HFDP

#endif
