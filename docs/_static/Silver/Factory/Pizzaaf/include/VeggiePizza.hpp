//===--- VegiePizza.hpp - ---------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_VEGGIE_PIZZA_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_VEGGIE_PIZZA_HPP_

#include "Pizza.hpp"
#include "PizzaIngredientFactory.hpp"
#include <string>

namespace HFDP {
  namespace Factory {
    namespace Abstract {

      class VeggiePizza : public Pizza {

        mutable std::unique_ptr< PizzaIngredientFactory > _ingredientFactory;

      public:
        explicit VeggiePizza( PizzaIngredientFactory* ingredientFactory );
      public:
        void prepare() const;
      };

    } // namespace Abstract
  } // namespace Factory
} // namespace HFDP

#endif
