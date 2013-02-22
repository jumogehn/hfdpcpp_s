#ifndef	_HFDP_CPP_CHAIN_OF_RESPONSIBILITY_CLIENT_HPP_
#define _HFDP_CPP_CHAIN_OF_RESPONSIBILITY_CLIENT_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace ChainOfResponsibility {
    namespace GumballEMailHandler {

      class Client {

        std::auto_ptr< Handler > _lastHandler;
        std::auto_ptr< Handler > _newHandler;
        std::auto_ptr< Handler > _hateHandler;
        std::auto_ptr< Handler > _fanHandler;
        std::auto_ptr< Handler > _spamHandler;

        Client( const Client& ); // Disable copy constructor
        void operator=( const Client& ); // Disable assignment operator

      public:
        Client() :
          _lastHandler( new LastHandler() ),
          _newHandler(  new NewLocationHandler( _lastHandler.get() ) ),
          _hateHandler( new ComplaintHandler( _newHandler.get() ) ),
          _fanHandler(  new FanHandler( _hateHandler.get() ) ),
          _spamHandler( new SpamHandler ( _fanHandler.get() ) )
        {
          HUM_TRACE(ACE_TEXT("Client::Client"));
        }
        void handleRequest( std::string request ) const
        {
          HUM_TRACE(ACE_TEXT("Client::handleRequest"));
          _spamHandler->handleRequest( request );
        }
        void print() const
        {
          HUM_TRACE(ACE_TEXT("Client::print"));
          _spamHandler->print();
        }
      };

    } // namespace GumballEMailHandler
  } // namespace ChainOfResponsibility
} // namespace HeadFirstDesignPatterns

#endif
