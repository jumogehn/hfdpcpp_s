#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_SCREEN_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_SCREEN_HPP_

#include "HomeTheater.hpp"

namespace HeadFirstDesignPatterns {
  namespace Facade {
    namespace HomeTheater {

      class Screen {

        std::string _description;

        Screen( const Screen& ); // Disable copy constructor
        void operator=( const Screen& ); // Disable assignment operator

      public:
        Screen( std::string description ) :
          _description( description )
        {}
        void up()
        {
          std::cout << _description.c_str() << " going up" << std::endl;
        }
        void down()
        {
          std::cout << _description.c_str() << " going down" << std::endl;
        }
        std::string toString()
        {
          return _description;
        }
      };

    } // namespace HomeTheater
  } // namespace Facade
} // namespace HeadFirstDesignPatterns

#endif
