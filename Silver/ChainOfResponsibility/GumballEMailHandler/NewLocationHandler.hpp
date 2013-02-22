#ifndef	_HFDP_CPP_CHAIN_OF_RESPONSIBILITY_NEW_LOCATION_HANDLER_HPP_
#define _HFDP_CPP_CHAIN_OF_RESPONSIBILITY_NEW_LOCATION_HANDLER_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace ChainOfResponsibility {
    namespace GumballEMailHandler {

      class NewLocationHandler : public Handler {

      public:
        explicit NewLocationHandler( const Handler* successor = 0 ) :
          Handler( successor )
        {
          HUM_TRACE(ACE_TEXT("NewLocationHandler::NewLocationHandler"));
        }
        void handleRequest( std::string request ) const
        {
          HUM_TRACE(ACE_TEXT("NewLocationHandler::handleRequest"));
          std::transform( request.begin(), request.end(), request.begin(),
                          tolower );

          if( canHandleRequest( request ) == true ) {
            Handler::canHandleRequest( request );
          } else {
            Handler::handleRequest( request );
          }
        }
        bool canHandleRequest( const std::string& request ) const
        {
          HUM_TRACE(ACE_TEXT("NewLocationHandler::canHandleRequest"));
          bool value = false;
          if( std::string::npos != request.find( "store" ) ) {
            value = true;
          }
          return value;
        }
        void print() const
        {
          HUM_TRACE(ACE_TEXT("NewLocationHandler::print"));
          std::cout << std::endl
            << "Request mail, send to Business Development:";
          Handler::print();
        }
      };

    } // namespace GumballEMailHandler
  } // namespace ChainOfResponsibility
} // namespace HeadFirstDesignPatterns

#endif

