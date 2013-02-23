#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_NYPIZZA_INGREDIENT_FACTORY_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_NYPIZZA_INGREDIENT_FACTORY_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
  namespace Factory {
    namespace Abstract {

      class NYPizzaIngredientFactory : public PizzaIngredientFactory {

      public:
        Dough* createDough() const
        {
          HUM_TRACE(ACE_TEXT("NYPizzaIngredientFactory::createDough"));
          return new ThinCrustDough();
        }
        Sauce* createSauce() const
        {
          HUM_TRACE(ACE_TEXT("NYPizzaIngredientFactory::createSauce"));
          return new MarinaraSauce();
        }
        Cheese* createCheese() const
        {
          HUM_TRACE(ACE_TEXT("NYPizzaIngredientFactory::createCheese"));
          return new ReggianoCheese();
        }
        std::vector< Veggies* > createVeggies() const
        {
          HUM_TRACE(ACE_TEXT("NYPizzaIngredientFactory::createVeggies"));
          std::vector< Veggies* > veggies;
          veggies.push_back( new Garlic() );
          veggies.push_back( new Onion() );
          veggies.push_back( new Mushroom() );
          veggies.push_back( new RedPepper() );
          return veggies;
        }
        Pepperoni* createPepperoni() const
        {
          HUM_TRACE(ACE_TEXT("NYPizzaIngredientFactory::createPepperoni"));
          return new SlicedPepperoni();
        }
        Clams* createClam() const
        {
          HUM_TRACE(ACE_TEXT("NYPizzaIngredientFactory::createClam"));
          return new FreshClams();
        }
      };

    } // namespace Abstract
  } // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif
