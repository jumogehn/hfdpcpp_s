#ifndef	_HFDP_CPP_FACTORY_NY_PEPPERONI_PIZZA_HPP_
#define _HFDP_CPP_FACTORY_NY_PEPPERONI_PIZZA_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Pizzafm.hpp"

namespace HeadFirstDesignPatterns {
  namespace Factory {
    namespace Method {

      class NYStylePepperoniPizza : public Pizza {
      public:
        NYStylePepperoniPizza()
        {
          HUM_TRACE(ACE_TEXT("NYStylePepperoniPizza::NYStylePepperoniPizza"));
          _name = "NY Style Pepperoni Pizza";
          _dough = "Thin Crust Dough";
          _sauce = "Marinara Sauce";
          _toppings.push_back( "Grated Reggiano Cheese" );
          _toppings.push_back( "Sliced Pepperoni" );
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
