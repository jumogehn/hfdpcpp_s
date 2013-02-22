#ifndef	_HFDP_CPP_CHAIN_OF_RESPONSIBILITY_COMPLAINT_HANDLER_HPP_
#define _HFDP_CPP_CHAIN_OF_RESPONSIBILITY_COMPLAINT_HANDLER_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace ChainOfResponsibility {
    namespace GumballEMailHandler {

      class ComplaintHandler : public Handler {

      public:
        explicit ComplaintHandler( const Handler* successor = 0 ) :
          Handler( successor )
        {
          HUM_TRACE(ACE_TEXT("ComplaintHandler::ComplaintHandler"));
        }
        void handleRequest( std::string request ) const
        {
          HUM_TRACE(ACE_TEXT("ComplaintHandler::handleRequest"));
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
          HUM_TRACE(ACE_TEXT("ComplaintHandler::canHandleRequest"));
          bool value = false;

          if( std::string::npos != request.find( "bruisin" ) ) {
            value = true;
          } else if( std::string::npos != request.find( "frosted" ) ) {
            value = true;
          } else if( std::string::npos != request.find( "no where" ) ) {
            value = true;
          } else if( std::string::npos != request.find( "rattle my cage" ) ) {
            value = true;
          } else if( std::string::npos != request.find( "tale nightingale" ) ) {
            value = true;
          }
          return value;
        }
        void print() const
        {
          HUM_TRACE(ACE_TEXT("ComplaintHandler::print"));
          std::cout << std::endl << "Hate mail, send to Legal:";
          Handler::print();
        }
      };

    } // namespace GumballEMailHandler
  } // namespace ChainOfResponsibility
} // namespace HeadFirstDesignPatterns

#endif
