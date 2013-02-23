#ifndef	_HFDP_CPP_FACTORY_NY_VEGGIE_PIZZA_HPP_
#define _HFDP_CPP_FACTORY_NY_VEGGIE_PIZZA_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Pizzafm.hpp"

namespace HeadFirstDesignPatterns {
  namespace Factory {
    namespace Method {

      class NYStyleVeggiePizza : public Pizza {

      public:
        NYStyleVeggiePizza()
        {
          HUM_TRACE(ACE_TEXT("NYStyleVeggiePizza::NYStyleVeggiePizza"));
          _name = "NY Style Veggie Pizza";
          _dough = "Thin Crust Dough";
          _sauce = "Marinara Sauce";
          _toppings.push_back( "Grated Reggiano Cheese" );
          _toppings.push_back( "Garlic" );
          _toppings.push_back( "Onion" );
          _toppings.push_back( "Mushrooms" );
          _toppings.push_back( "Red Pepper" );
        }
      };

    } // namespace Method
  } // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif
