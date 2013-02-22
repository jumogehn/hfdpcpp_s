#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_CHICAGO_INGREDIENT_FACTORY_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_CHICAGO_INGREDIENT_FACTORY_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
  namespace Factory {
    namespace Abstract {

      class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory {

      public:
        Dough* createDough() const
        {
          HUM_TRACE(ACE_TEXT("ChicagoPizzaIngredientFactory::createDough"));
          return new ThickCrustDough();
        }
        Sauce* createSauce() const
        {
          HUM_TRACE(ACE_TEXT("ChicagoPizzaIngredientFactory::createSauce"));
          return new PlumTomatoSauce();
        }
        Cheese* createCheese() const
        {
          HUM_TRACE(ACE_TEXT("ChicagoPizzaIngredientFactory::createCheese"));
          return new MozzarellaCheese();
        }
        std::vector< Veggies* > createVeggies() const
        {
          HUM_TRACE(ACE_TEXT("ChicagoPizzaIngredientFactory::createVeggies"));
          std::vector< Veggies* > value;
          value.push_back( new BlackOlives() );
          value.push_back( new Spinach() );
          value.push_back( new Eggplant() );
          return value;
        }
        Pepperoni* createPepperoni() const
        {
          HUM_TRACE(ACE_TEXT("ChicagoPizzaIngredientFactory::createPepperoni"));
          return new SlicedPepperoni();
        }
        Clams* createClam() const
        {
          HUM_TRACE(ACE_TEXT("ChicagoPizzaIngredientFactory::createClam"));
          return new FrozenClams();
        }
      };

    } // namespace Abstract
  } // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif
