#ifndef	_HFDP_CPP_FLYWEIGHT_FOWLWEIGHT_TURKEY_ADAPTER_HPP_
#define _HFDP_CPP_FLYWEIGHT_FOWLWEIGHT_TURKEY_ADAPTER_HPP_

#include "FowlWeight.hpp"

namespace HeadFirstDesignPatterns {
  namespace FlyWeight {
    namespace FowlWeight {

      // ConcreteFlyweight

      class TurkeyAdapter : public Fowl {

        std::auto_ptr< const Turkey > _turkey;

        TurkeyAdapter( const TurkeyAdapter& ); // Disable copy constructor
        void operator=( const TurkeyAdapter& ); // Disable assignment operator

      public:
        explicit TurkeyAdapter( const Turkey* turkey ) :
          _turkey( turkey )
        {
          assert( turkey );
        }
        void quack() const
        {
          assert( _turkey.get() );
          _turkey->gobble();
        }
        void swim() const
        {
          assert( _turkey.get() );
          _turkey->walk();
        }
        std::string toString() const
        {
          assert( _turkey.get() );
          return _turkey->toString();
        }
      };

    } // namespace FowlWeight
  } // namespace FlyWeight
} // namespace HeadFirstDesignPatterns

#endif
