#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_SCREEN_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_SCREEN_HPP_

#include <string>

namespace HeadFirstDesignPatterns {
  namespace Facade {
    namespace HomeTheater {

      class Screen {

        std::string _description;

        Screen( const Screen& ); // Disable copy constructor
        void operator=( const Screen& ); // Disable assignment operator

      public:
        Screen( std::string description );
        void up();
        void down();
        std::string toString();
      };

    } // namespace HomeTheater
  } // namespace Facade
} // namespace HeadFirstDesignPatterns

#endif
