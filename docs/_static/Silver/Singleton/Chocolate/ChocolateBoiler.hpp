#ifndef	_HFDP_CPP_SINGLETON_CHOCOLATE_BOILER_HPP_
#define _HFDP_CPP_SINGLETON_CHOCOLATE_BOILER_HPP_

#include "Chocolate.hpp"

namespace HeadFirstDesignPatterns {
  namespace Factory {
    namespace Singleton {

      class ChocolateBoiler {

        static ChocolateBoiler* _uniqueInstance;
        bool _empty;
        bool _boiled;

        ChocolateBoiler( const ChocolateBoiler& ); // Disable copy constructor
        void operator=( const ChocolateBoiler& ); // Disable assignment operator

        ChocolateBoiler()
        {
          _empty = true;
          _boiled = false;
        }
        ~ChocolateBoiler()
        {
          _uniqueInstance = 0;
        }

      public:
        static ChocolateBoiler* getInstance()
        {
          if( _uniqueInstance == 0 ) {
            std::cout
              << "Creating unique instance of Chocolate Boiler" << std::endl;
            _uniqueInstance = new ChocolateBoiler();
          }
          std::cout << "Returning instance of Chocolate Boiler"<< std::endl;
          return _uniqueInstance;
        }
        void fill()
        {	// fill the boiler with a milk/chocolate mixture
          if( isEmpty() ) {
            _empty = false;
            _boiled = false;
          }
        }
        void drain()
        {	// drain the boiled milk and chocolate
          if( !isEmpty() && isBoiled() ) {
            _empty = true;
          }
        }
        void boil()
        {	// bring the contents to a boil
          if( !isEmpty() && !isBoiled() ) {
            _boiled = true;
          }
        }
        bool isEmpty() const
        {
          return _empty;
        }
        bool isBoiled() const
        {
          return _boiled;
        }
      };

    } // namespace Singleton
  } // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif 
