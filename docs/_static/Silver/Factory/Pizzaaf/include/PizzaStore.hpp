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


#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_PIZZA_STORE_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_PIZZA_STORE_HPP_

#include "Pizza.hpp"
#include <memory>
#include <string>



namespace HFDP {
  namespace Factory {
    namespace Abstract {

      class PizzaStore {

      protected:
        PizzaStore();
      public:
        virtual ~PizzaStore();
        std::unique_ptr< Pizza > orderPizza( std::string type ) const;
        virtual std::unique_ptr< Pizza > createPizza(std::string type) const = 0;
      };

    } // namespace Method
  } // namespace Factory
} // namespace HFDP

#endif
