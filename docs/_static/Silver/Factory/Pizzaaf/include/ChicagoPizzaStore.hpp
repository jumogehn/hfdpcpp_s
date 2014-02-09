//===--- ChicagoPizzaStore.hpp - --------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_CHICAGO_STORE_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_CHICAGO_STORE_HPP_

#include "PizzaStore.hpp"
#include "Pizza.hpp"
#include <memory>
#include <string>

namespace HFDP {
  namespace Factory {
    namespace Abstract {

      class ChicagoPizzaStore : public PizzaStore {

      public:
        std::unique_ptr< Pizza > createPizza( std::string item ) const;
      };

    } // namespace Abstract
  } // namespace Factory
} // namespace HFDP

#endif
