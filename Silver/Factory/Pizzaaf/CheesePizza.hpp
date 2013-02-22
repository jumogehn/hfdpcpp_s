#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_CHEESE_PIZZA_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_CHEESE_PIZZA_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
  namespace Factory {
    namespace Abstract {

      class CheesePizza : public Pizza {

        mutable std::auto_ptr< PizzaIngredientFactory > _ingredientFactory;

      public:
        explicit CheesePizza( PizzaIngredientFactory* ingredientFactory ) :
          _ingredientFactory( ingredientFactory )
        {
          assert( ingredientFactory );
          HUM_TRACE(ACE_TEXT("CheesePizza::CheesePizza"));
        }
        void prepare() const
        {
          HUM_TRACE(ACE_TEXT("CheesePizza::prepare"));
          std::cout << "Preparing " << getName().c_str() << std::endl;
          _dough = std::auto_ptr< Dough>( _ingredientFactory->createDough() );
          _sauce = std::auto_ptr< Sauce>( _ingredientFactory->createSauce() );
          _cheese = std::auto_ptr< Cheese>( _ingredientFactory->createCheese());
        }
      };

    } // namespace Abstract
  } // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif
