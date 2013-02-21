#ifndef	_HFDP_CPP_MEDIATOR_AUTO_HOUSE_SHOWER_HPP_
#define _HFDP_CPP_MEDIATOR_AUTO_HOUSE_SHOWER_HPP_

namespace HeadFirstDesignPatterns {
  namespace Mediator {
    namespace AutoHouse {

      class Shower : public Appliance {
      public:
        Shower( Mediator* mediator ) :
          Appliance( mediator )
        {
          assert( mediator );
        }
        void off()
        {
          _mediator->output( "Shower is off" );
        }
        void on( unsigned long value )
        {
          _mediator->output( "Shower is on" );
        }
        void onEvent( unsigned long value ) const
        {
          _mediator->onEvent( this, value );
        }
      };

    } // namespace AutoHouse
  } // namespace Mediator
} // namespace HeadFirstDesignPatterns

#endif
