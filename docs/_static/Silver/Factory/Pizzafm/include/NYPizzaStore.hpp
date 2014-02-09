//===--- NYPizzaStore.hpp - -------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_FACTORY_NY_PIZZA_STORE_HPP_
#define _HFDP_CPP_FACTORY_NY_PIZZA_STORE_HPP_

#include "Pizza.hpp"
#include "PizzaStore.hpp"
#include <memory>
#include <string>

namespace HFDP {
  namespace Factory {
    namespace Method {

      class NYPizzaStore : public PizzaStore {

      public:
        std::unique_ptr< Pizza > createPizza( std::string type ) const;
      };

    } // namespace Method
  } // namespace Factory
} // namespace HFDP

#endif
