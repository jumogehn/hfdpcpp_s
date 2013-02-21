#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_CHICAGO_INGREDIENT_FACTORY_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_CHICAGO_INGREDIENT_FACTORY_HPP_

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
  namespace Factory {
    namespace Abstract {

      class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory {

      public:
        Dough* createDough() const
        {
          return new ThickCrustDough();
        }
        Sauce* createSauce() const
        {
          return new PlumTomatoSauce();
        }
        Cheese* createCheese() const
        {
          return new MozzarellaCheese();
        }
        std::vector< Veggies* > createVeggies() const
        {
          std::vector< Veggies* > value;
          value.push_back( new BlackOlives() );
          value.push_back( new Spinach() );
          value.push_back( new Eggplant() );
          return value;
        }
        Pepperoni* createPepperoni() const
        {
          return new SlicedPepperoni();
        }
        Clams* createClam() const
        {
          return new FrozenClams();
        }
      };

    } // namespace Abstract
  } // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif
