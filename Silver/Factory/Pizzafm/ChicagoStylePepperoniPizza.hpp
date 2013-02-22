#ifndef	_HFDP_CPP_FACTORY_CHICAGO_PEPPERONI_PIZZA_HPP_
#define _HFDP_CPP_FACTORY_CHICAGO_PEPPERONI_PIZZA_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Pizzafm.hpp"

namespace HeadFirstDesignPatterns {
  namespace Factory {
    namespace Method {

      class ChicagoStylePepperoniPizza : public Pizza {

      public:
        ChicagoStylePepperoniPizza()
        {
          HUM_TRACE(ACE_TEXT("ChicagoStylePepperoniPizza"
                             "::ChicagoStylePepperoniPizza"));
          _name = "Chicago Style Pepperoni Pizza";
          _dough = "Extra Thick Crust Dough";
          _sauce = "Plum Tomato Sauce";
          _toppings.push_back( "Shredded Mozzarella Cheese" );
          _toppings.push_back( "Black Olives" );
          _toppings.push_back( "Spinach" );
          _toppings.push_back( "Eggplant" );
          _toppings.push_back( "Sliced Pepperoni" );
        }
        void cut() const
        {
          HUM_TRACE(ACE_TEXT("ChicagoStylePepperoniPizza::cut"));
          std::cout << "Cutting the pizza into square slices" << std::endl;
        }
      };

    } // namespace Method
  } // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif
