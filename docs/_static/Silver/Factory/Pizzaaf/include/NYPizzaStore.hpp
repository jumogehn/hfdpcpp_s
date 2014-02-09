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


#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_NYPIZZA_STORE_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_NYPIZZA_STORE_HPP_

#include "PizzaStore.hpp"
#include "Pizza.hpp"
#include <string>
#include <memory>

namespace HFDP {
  namespace Factory {
    namespace Abstract {

      class NYPizzaStore : public PizzaStore {

      public:
        std::unique_ptr< Pizza > createPizza( std::string item ) const;
      };

    } // namespace Abstract
  } // namespace Factory
} // namespace HFDP

#endif
