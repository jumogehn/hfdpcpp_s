#ifndef	_HFDP_CPP_INTERPRETER_MINI_DUCK_SIMULATOR_VARIABLE_HPP_
#define _HFDP_CPP_INTERPRETER_MINI_DUCK_SIMULATOR_VARIABLE_HPP_

#include "MiniDuckSimulator.hpp"
#ifdef WIN32
#include <process.h>
#else
#include <sys/types.h>
#include <unistd.h>
#endif

namespace HeadFirstDesignPatterns {
  namespace Interpreter {
    namespace MiniDuckSimulator {

      class Variable {

        const std::string _name;
        int _value;

      public:
        explicit Variable( const std::string name ) :
          _name( name ), _value( -1 )
        {
#ifdef WIN32
          srand( _getpid() );// seed random-number generation with unique value
#else
          srand( getpid() );// seed random-number generation with unique value
#endif
        };
        std::string name() const
        {
          return _name;
        }
        // return a boolean result based on a random number to simulate
        // processing; however, initial evaluation returns true so 'while'
        // statements execute at least one time.
        bool evaluate()
        {
          std::cout << "evaluating (" << _name.c_str() << ")...";

          if( 0 > _value )	// initial evaluation, so...
            _value = 1;		// indicate 'true'
          else
            _value = ( rand() % 100 ) % 3;

          if( 0 == _value ) {
            std::cout << "'false'" << std::endl;
            return false;
          } else {
            std::cout << "'true'" << std::endl;
            return true;
          }
        }
      };

    } // namespace MiniDuckSimulator
  } // namespace Interpreter
} // namespace HeadFirstDesignPatterns

#endif
