#ifndef	_HFDP_CPP_CHAIN_OF_RESPONSIBILITY_FAN_HANDLER_HPP_
#define _HFDP_CPP_CHAIN_OF_RESPONSIBILITY_FAN_HANDLER_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace ChainOfResponsibility {
    namespace GumballEMailHandler {

      class FanHandler : public Handler {

      public:
        explicit FanHandler( const Handler* successor = 0 ) :
          Handler( successor )
        {
          HUM_TRACE(ACE_TEXT("FanHandler::FanHandler"));
        }
        void handleRequest( std::string request ) const
        {
          HUM_TRACE(ACE_TEXT("FanHandler::handleRequest"));
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
          HUM_TRACE(ACE_TEXT("FanHandler::canHandleRequest"));
          bool value = false;

          if( std::string::npos != request.find( "razz" ) ) {
            value = true;
          } else if( std::string::npos != request.find( "hip" ) ) {
            value = true;
          } else if( std::string::npos != request.find( "radioactive" ) ) {
            value = true;
          } else if( std::string::npos != request.find( "blast" ) ) {
            value = true;
          } else if( std::string::npos != request.find( "boss" ) ) {
            value = true;
          } else if( std::string::npos != request.find( "orbit" ) ) {
            value = true;
          } else if( std::string::npos != request.find( "kick" ) ) {
            value = true;
          }
          return value;
        }
        void print() const
        {
          HUM_TRACE(ACE_TEXT("FanHandler::print"));
          std:: cout << std::endl << "Fan mail, send to CEO:";
          Handler::print();
        }
      };

    } // namespace GumballEMailHandler
  } // namespace ChainOfResponsibility
} // namespace HeadFirstDesignPatterns

#endif
