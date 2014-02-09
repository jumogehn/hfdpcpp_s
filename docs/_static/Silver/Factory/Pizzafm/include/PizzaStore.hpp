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


#ifndef	_HFDP_CPP_FACTORY_METHOD_PIZZA_STORE_HPP_
#define _HFDP_CPP_FACTORY_METHOD_PIZZA_STORE_HPP_

#include "Pizza.hpp"
#include <string>
#include <memory>

namespace HFDP {
  namespace Factory {
    namespace Method {

      class PizzaStore {
      protected:
        PizzaStore();
      public:
        virtual ~PizzaStore();
        virtual std::unique_ptr< Pizza > createPizza( std::string type) const = 0;
        std::unique_ptr< Pizza > orderPizza( std::string type) const;
      };

    } // namespace Method
  } // namespace Factory
} // namespace HFDP

#endif
