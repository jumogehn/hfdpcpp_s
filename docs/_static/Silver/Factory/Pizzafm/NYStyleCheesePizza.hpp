#ifndef	_HFDP_CPP_FACTORY_NY_CHEESE_PIZZA_HPP_
#define _HFDP_CPP_FACTORY_NY_CHEESE_PIZZA_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Pizzafm.hpp"

namespace HeadFirstDesignPatterns {
  namespace Factory {
    namespace Method {

      class NYStyleCheesePizza : public Pizza {

      public:
        NYStyleCheesePizza()
        {
          HUM_TRACE(ACE_TEXT("NYStyleCheesePizza::NYStyleCheesePizza"));
          _name = "NY Style Sauce and Cheese Pizza";
          _dough = "Thin Crust Dough";
          _sauce = "Marinara Sauce";
          _toppings.push_back( "Grated Reggiano Cheese" );
        }
      };

    } // namespace Method
  } // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif
