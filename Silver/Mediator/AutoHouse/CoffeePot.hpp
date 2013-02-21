#ifndef	_HFDP_CPP_MEDIATOR_AUTO_HOUSE_COFFEPOT_HPP_
#define _HFDP_CPP_MEDIATOR_AUTO_HOUSE_COFFEPOT_HPP_

namespace HeadFirstDesignPatterns {
  namespace Mediator {
    namespace AutoHouse {

      class CoffeePot : public Appliance {
        int _volume;
        void* _thread;
        unsigned long _threadId;

#if defined( WIN32 )
        void run()
        {
          Sleep( 2000 );
          onEvent( _volume );
          _thread = 0;
        }
#else
#error Alarm::run() undefined for this platform
#endif

      public:
        CoffeePot( Mediator* mediator ) :
          Appliance( mediator )
        {
          assert( mediator );
          _volume = 0;
          _thread = 0;
        }
        void off()
        {
          _mediator->output( "Coffeepot is off" );
        }
        void onEvent( unsigned long value ) const
        {
          _mediator->onEvent( this, value );
        }
#if defined( WIN32 )
        void on( unsigned long value = 1 )
        {
          assert( value > 0 );
          _volume = value;
          _mediator->output( "Coffeepot is on" );

          if( _thread == 0 ) {
            _thread = CreateThread( 0, 0, CoffeePot::start, this, 0, &_threadId );
          }
        }
#else
#error CoffeePot::on() undefined for this platform
#endif
        static unsigned long __stdcall start( void* self )
        {
          assert( self );
          reinterpret_cast< CoffeePot* >( self )->run();
          return 0;
        }
      };

    } // namespace AutoHouse
  } // namespace Mediator
} // namespace HeadFirstDesignPatterns

#endif
