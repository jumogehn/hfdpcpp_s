//===--- DuckAdapter.hpp - --------------------------------------*- C++ -*-===//
//
//                     Head First Design Patterns
//
//
//===----------------------------------------------------------------------===//
///
/// \file
/// \brief
///
//===----------------------------------------------------------------------===//

#ifndef	_HFDP_CPP_ADAPTER_DUCK_ADAPTER_HPP_
#define _HFDP_CPP_ADAPTER_DUCK_ADAPTER_HPP_

#include "Ducks.hpp"
#include <stdio.h>
#ifdef WIN32
#include <process.h>
#else
#include <sys/types.h>
#include <unistd.h>
#endif

namespace HeadFirstDesignPatterns {
  namespace Adapter {
    namespace Ducks {

      class DuckAdapter : public Turkey {

        std::auto_ptr< const Duck > _duck;
        int _random;

        DuckAdapter( const DuckAdapter& ); // Disable copy constructor
        void operator=( const DuckAdapter& ); // Disable assignment operator

      public:
        explicit DuckAdapter( const Duck* duck ) :
          _duck ( duck )
        {
          assert( _duck.get() );
          fprintf(stdout, "DuckAdapter::DuckAdapter\n");
#ifdef WIN32
          srand( _getpid() );
#else
          srand( getpid() );
#endif
          _random = rand() % 5;
          if( _random == 0 )
            _random = 1;
        }
        void fly() const
        {
          assert( _duck.get() );

          fprintf(stdout, "DuckAdapter::fly\n");
          for( int i = 0; i < _random; i++ ) {
            _duck->fly();
          }
        }
        void gobble() const
        {

          fprintf(stdout, "DuckAdapter::gobble\n");
          assert( _duck.get() );
          _duck->quack();
        }
      };

    } // namespace Ducks
  } // namespace Adapter
} // namespace HeadFirstDesignPatterns

#endif
