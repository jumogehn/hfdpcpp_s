#ifndef	_HFDP_CPP_SIMPLE_FACTORY_CLAM_PIZZA_HPP_
#define _HFDP_CPP_SIMPLE_FACTORY_CLAM_PIZZA_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Pizzas.hpp"

namespace HeadFirstDesignPatterns {
  namespace Factory {
    namespace Simple {

      class ClamPizza : public Pizza {

      public:
        ClamPizza()
        {
          HUM_TRACE(ACE_TEXT("ClamPizza::ClamPizza"));
          _name = "Clam Pizza";
          _dough = "Thin Crust";
          _sauce = "White garlic Sauce";
          _toppings.push_back( "Grated parmesan cheese" );
          _toppings.push_back( "Clams" );
        }
      };

    } // namespace Simple
  } // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif
