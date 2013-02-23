#ifndef	_HFDP_CPP_SIMPLE_FACTORY_PIZZA_STORE_HPP_
#define _HFDP_CPP_SIMPLE_FACTORY_PIZZA_STORE_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Pizzas.hpp"

namespace HeadFirstDesignPatterns {
  namespace Factory {
    namespace Simple {

      class PizzaStore {

        SimplePizzaFactory* _factory;

      public:
        explicit PizzaStore( SimplePizzaFactory* factory ) :
          _factory( factory )
        {
          assert( factory );
          HUM_TRACE(ACE_TEXT("PizzaStore::PizzaStore"));
        }

        Pizza* orderPizza( std::string type )
        {
          HUM_TRACE(ACE_TEXT("PizzaStore::orderPizza"));
          Pizza* pizza;
          pizza = _factory->createPizza( type );
          pizza->prepare();
          pizza->bake();
          pizza->cut();
          pizza->box();
          return pizza;
        }
      };

    } // namespace Simple
  } // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif
