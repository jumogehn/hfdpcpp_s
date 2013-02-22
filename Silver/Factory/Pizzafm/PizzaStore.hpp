#ifndef	_HFDP_CPP_FACTORY_METHOD_PIZZA_STORE_HPP_
#define _HFDP_CPP_FACTORY_METHOD_PIZZA_STORE_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Pizzafm.hpp"

namespace HeadFirstDesignPatterns {
  namespace Factory {
    namespace Method {

      class PizzaStore {
      protected:
        PizzaStore()
        {
          HUM_TRACE(ACE_TEXT("PizzaStore::PizzaStore"));
        }
      public:
        virtual ~PizzaStore()
        {
          HUM_TRACE(ACE_TEXT("PizzaStore::~PizzaStore"));
        }
        virtual std::auto_ptr< Pizza > createPizza( std::string type) const = 0;
        std::auto_ptr< Pizza > orderPizza( std::string type) const
        {
          HUM_TRACE(ACE_TEXT("PizzaStore::orderPizza"));
          std::auto_ptr< Pizza > pizza(createPizza(type) );
          std::cout << "--- Making a " << pizza->getName() << " ---"
            << std::endl;
          pizza->prepare();
          pizza->bake();
          pizza->cut();
          pizza->box();
          return pizza;
        }
      };

    } // namespace Method
  } // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif
