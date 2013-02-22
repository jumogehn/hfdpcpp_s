#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_PIZZA_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_PIZZA_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Pizzaaf.hpp"

namespace HeadFirstDesignPatterns {
  namespace Factory {
    namespace Abstract {

      class Pizza {

        std::string _name;

        Pizza( const Pizza& ); // Disable copy constructor
        void operator=( const Pizza& ); // Disable assignment operator

      protected:
        mutable std::auto_ptr< Dough > _dough;
        mutable std::auto_ptr< Sauce > _sauce;
        mutable std::vector< Veggies* > _veggies;
        mutable std::auto_ptr< Cheese > _cheese;
        mutable std::auto_ptr< Pepperoni > _pepperoni;
        mutable std::auto_ptr< Clams > _clam;
        Pizza()
        {
          HUM_TRACE(ACE_TEXT("Pizza::Pizza"));
        }

      public:
        virtual void prepare() const = 0;

        virtual ~Pizza()
        {
          HUM_TRACE(ACE_TEXT("Pizza::~Pizza"));
          for( std::vector< Veggies* >::iterator iterator = _veggies.begin();
               _veggies.end() != iterator; ++iterator ) {
            delete *iterator;
          }
          _veggies.clear();
        }
        virtual void bake() const
        {
          HUM_TRACE(ACE_TEXT("Pizza::bake"));
          std::cout << "Bake for 25 minutes at 350" << std::endl;
        }
        virtual void cut() const
        {
          HUM_TRACE(ACE_TEXT("Pizza::cut"));
          std::cout << "Cutting the pizza into diagonal slices" << std::endl;
        }
        virtual void box() const
        {
          HUM_TRACE(ACE_TEXT("Pizza::box"));
          std::cout << "Place pizza in official PizzaStore box" << std::endl;
        }
        void setName( std::string name)
        {
          HUM_TRACE(ACE_TEXT("Pizza::setName"));
          _name = name;
        }
        std::string getName() const
        {
          HUM_TRACE(ACE_TEXT("Pizza::getName"));
          return _name;
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("Pizza::toString"));
          std::stringstream value;
          value << "---- " << _name.c_str() << " ----" << std::endl;

          if( _dough.get() != 0 ) {
            value << _dough->toString();
            value << std::endl;
          }
          if( _sauce.get() != 0 ) {
            value << _sauce->toString();
            value << std::endl;
          }
          if( _cheese.get() != 0 ) {
            value << _cheese->toString();
            value << std::endl;
          }
          if( _clam.get() != 0 ) {
            value << _clam->toString();
            value << std::endl;
          }
          if( _pepperoni.get() != 0 ) {
            value << _pepperoni->toString();
            value << std::endl;
          }
          if( _veggies.size() != 0 ) {
            for( std::vector< Veggies* >::iterator iterator = _veggies.begin();
                 _veggies.end() != iterator; ++iterator ) {
              value << ( *iterator )->toString() << ", ";
            }
            value << std::endl;
          }

          return value.str();
        }
      };

    } // namespace Abstract
  } // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif
