#ifndef	_HFDP_CPP_ADAPTER_TURKEY_ADAPTER_HPP_
#define _HFDP_CPP_ADAPTER_TURKEY_ADAPTER_HPP_

#include "Ducks.hpp"

namespace HeadFirstDesignPatterns {
  namespace Adapter {
    namespace Ducks {

      class TurkeyAdapter : public Duck {

        const Turkey* _turkey;

        TurkeyAdapter( const TurkeyAdapter& ); // Disable copy constructor
        void operator=( const TurkeyAdapter& ); // Disable assignment operator

      public:
        explicit TurkeyAdapter( const Turkey* turkey ) :
          _turkey( turkey )
        {
          assert( turkey );
        }
        void fly() const
        {
          assert( _turkey );
          for( int i = 0; i < 5; i++ ) {
            _turkey->fly();
          }
        }
        void quack() const
        {
          assert( _turkey );
          _turkey->gobble();
        }
      };

    } // namespace Ducks
  } // namespace Adapter
} // namespace HeadFirstDesignPatterns

#endif
