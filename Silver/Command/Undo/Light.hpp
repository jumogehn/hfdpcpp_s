#ifndef	_HFDP_CPP_COMMAND_UNDO_LIGHT_HPP_
#define _HFDP_CPP_COMMAND_UNDO_LIGHT_HPP_

#include "Undo.hpp"

namespace HeadFirstDesignPatterns {
  namespace Command {
    namespace Undo {

      class Light {

        std::string _location;
        mutable int _level;

      public:
        explicit Light( const std::string location ) :
          _location( location ), _level( 0 )
        {}
        void on() const
        {
          _level = 100;
          std::cout << _location.c_str() << " light is on" << std::endl;
        }
        void off() const
        {
          _level = 0;
          std::cout << _location.c_str() << " light is off" << std::endl;
        }
        void dim( int level ) const
        {
          _level = level;
          if( _level == 0 ) {
            off();
          } else {
            std::cout << "Light is dimmed to " << _level << "%" << std::endl;
          }
        }
        int getLevel() const
        {
          return _level;
        }
      };

    } // namespace Undo
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
