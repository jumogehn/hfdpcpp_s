#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_POPCORN_POPPER_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_POPCORN_POPPER_HPP_


#include <string>

namespace HeadFirstDesignPatterns {
  namespace Facade {
    namespace HomeTheater {

      class PopcornPopper {

        std::string _description;

        PopcornPopper( const PopcornPopper& ); // Disable copy constructor
        void operator=( const PopcornPopper& ); // Disable assignment operator

      public:
        PopcornPopper( std::string description);
        void on() const;
        void off() const;
        void pop() const;
        std::string toString() const;
      };

    } // namespace HomeTheater
  } // namespace Facade
} // namespace HeadFirstDesignPatterns

#endif
