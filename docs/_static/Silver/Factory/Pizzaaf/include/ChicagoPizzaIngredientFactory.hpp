//===--- ChicagoPizzaIngredientFactory.hpp - --------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_CHICAGO_INGREDIENT_FACTORY_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_CHICAGO_INGREDIENT_FACTORY_HPP_

#include "PizzaIngredientFactory.hpp"
#include "Dough.hpp"
#include "Sauce.hpp"
#include "Cheese.hpp"
#include "Pepperoni.hpp"
#include "Clams.hpp"
#include "Veggies.hpp"
#include <vector>

namespace HFDP {
  namespace Factory {
    namespace Abstract {

      class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory {

      public:
        Dough* createDough() const;
        Sauce* createSauce() const;
        Cheese* createCheese() const;
        std::vector< Veggies* > createVeggies() const;
        Pepperoni* createPepperoni() const;
        Clams* createClam() const;
      };

    } // namespace Abstract
  } // namespace Factory
} // namespace HFDP

#endif
