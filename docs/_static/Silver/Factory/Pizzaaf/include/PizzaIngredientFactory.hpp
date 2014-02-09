//===--- PizzaIngredientFactory.hpp - ---------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_PIZZA_INGREDIENT_FACTORY_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_PIZZA_INGREDIENT_FACTORY_HPP_

#include "Dough.hpp"
#include "Sauce.hpp"
#include "Veggies.hpp"
#include "Cheese.hpp"
#include "Pepperoni.hpp"
#include "Clams.hpp"
#include <vector>

namespace HFDP {
  namespace Factory {
    namespace Abstract {

      class PizzaIngredientFactory {
      public:
        virtual Dough* createDough() const = 0;
        virtual Sauce* createSauce() const = 0;
        virtual Cheese* createCheese() const = 0;
        virtual std::vector< Veggies* > createVeggies() const = 0;
        virtual Pepperoni* createPepperoni() const = 0;
        virtual Clams* createClam() const = 0;
        virtual ~PizzaIngredientFactory();
      };

    } // namespace Abstract
  } // namespace Factory
} // namespace HFDP

#endif
