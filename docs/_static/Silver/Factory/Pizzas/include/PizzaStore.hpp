//===--- PizzaStore.hpp - ---------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_SIMPLE_FACTORY_PIZZA_STORE_HPP_
#define _HFDP_CPP_SIMPLE_FACTORY_PIZZA_STORE_HPP_

#include "Pizza.hpp"
#include "SimplePizzaFactory.hpp"
#include <string>

namespace HeadFirstDesignPatterns {
  namespace Factory {
    namespace Simple {

      class PizzaStore {

        SimplePizzaFactory* _factory;

      public:
        explicit PizzaStore( SimplePizzaFactory* factory );

        Pizza* orderPizza( std::string type );
      };

    } // namespace Simple
  } // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif
