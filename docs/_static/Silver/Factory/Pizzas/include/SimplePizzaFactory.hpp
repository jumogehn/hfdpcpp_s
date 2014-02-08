//===--- SimplePizzaFactory.hpp - -------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_SIMPLE_PIZZA_FACTORY_HPP_
#define _HFDP_CPP_SIMPLE_PIZZA_FACTORY_HPP_

#include "Pizza.hpp"
#include <string>

namespace HeadFirstDesignPatterns {
  namespace Factory {
    namespace Simple {

      class SimplePizzaFactory {

      public:
        Pizza* createPizza( std::string type ) const;
      };

    } // namespace Simple
  } // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif
