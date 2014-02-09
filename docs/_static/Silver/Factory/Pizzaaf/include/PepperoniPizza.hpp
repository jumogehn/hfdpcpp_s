//===--- PepperoniPizza.hpp - -----------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_PEPPERONI_PIZZA_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_PEPPERONI_PIZZA_HPP_

#include "Pizza.hpp"
#include "PizzaIngredientFactory.hpp"
#include <memory>

namespace HFDP {
  namespace Factory {
    namespace Abstract {

      class PepperoniPizza : public Pizza {

        mutable std::unique_ptr< PizzaIngredientFactory > _ingredientFactory;

      public:
        explicit PepperoniPizza( PizzaIngredientFactory* ingredientFactory );
        void prepare() const;
      };

    } // namespace Abstract
  } // namespace Factory
} // namespace HFDP

#endif
