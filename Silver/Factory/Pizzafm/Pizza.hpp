#ifndef	_HFDP_CPP_FACTORY_METHOD_PIZZA_HPP_
#define _HFDP_CPP_FACTORY_METHOD_PIZZA_HPP_

#include "Pizzafm.hpp"

namespace HeadFirstDesignPatterns {
  namespace Factory {
    namespace Method {

      class Pizza {

      protected:
        std::string _name;
        std::string _dough;
        std::string _sauce;
        mutable std::list< std::string > _toppings;
        Pizza()
        {}

      private:
        Pizza( const Pizza& ); // Disable copy constructor
        void operator=( const Pizza& ); // Disable assignment operator

      public:
        virtual ~Pizza() {
        }
        virtual void prepare() const {
          std::cout << "Preparing " << _name.c_str() << std::endl;
          std::cout << "Tossing dough..." << std::endl;
          std::cout << "Adding sauce..." << std::endl;
          std::cout << "Adding toppings: " << std::endl;
          for( std::list< std::string >::iterator iterator = _toppings.begin();
               _toppings.end() != iterator; ++iterator ) {
            std::cout << "   " << iterator->c_str() << std::endl;
          }
        }
        virtual void bake() const {
          std::cout << "Bake for 25 minutes at 350" << std::endl;
        }
        virtual void cut() const {
          std::cout << "Cutting the pizza into diagonal slices" << std::endl;
        }
        virtual void box() const {
          std::cout << "Place pizza in official PizzaStore box" << std::endl;
        }
        std::string getName() const {
          return _name;
        }
        std::string toString() const {
          // code to display pizza name and ingredients
          std::stringstream value; 
          value << "---- " << _name.c_str() << " ----" << std::endl;
          value << _dough.c_str() << std::endl;
          value << _sauce.c_str() << std::endl;
          for( std::list< std::string >::iterator iterator = _toppings.begin();
               _toppings.end() != iterator; ++iterator ) {
            value << iterator->c_str() << std::endl;
          }
          return value.str();
        }
      };

    } // namespace Method
  } // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif
