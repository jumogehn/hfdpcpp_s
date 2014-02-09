//===--- ChicagoStyleVeggiePizza.hpp - --------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_FACTORY_CHICAGO_VEGGIE_PIZZA_HPP_
#define _HFDP_CPP_FACTORY_CHICAGO_VEGGIE_PIZZA_HPP_

#include "Pizza.hpp"

namespace HFDP {
  namespace Factory {
    namespace Method {

      class ChicagoStyleVeggiePizza : public Pizza {

      public:
        ChicagoStyleVeggiePizza();
        void cut() const;
      };

    } // namespace Method
  } // namespace Factory
} // namespace HFDP

#endif
