#ifndef	_HFDP_CPP_MEDIATOR_AUTO_HOUSE_APPLICANCE_HPP_
#define _HFDP_CPP_MEDIATOR_AUTO_HOUSE_APPLICANCE_HPP_

namespace HeadFirstDesignPatterns {
  namespace Mediator {
    namespace AutoHouse {

      class Mediator;

      class Appliance {
      protected:
        const Mediator* _mediator;

        Appliance( const Mediator* mediator) :
          _mediator( mediator )
        {
          assert( mediator );
        }
      public:
        virtual ~Appliance()
        {}
        virtual void off() = 0;
        virtual void on( unsigned long value  ) = 0;
        virtual void onEvent( unsigned long value ) const = 0;
      };

    } // namespace AutoHouse
  } // namespace Mediator
} // namespace HeadFirstDesignPatterns

#endif
