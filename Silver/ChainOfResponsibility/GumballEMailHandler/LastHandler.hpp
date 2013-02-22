#ifndef	_HFDP_CPP_CHAIN_OF_RESPONSIBILITY_DEFAULT_HANDLER_HPP_
#define _HFDP_CPP_CHAIN_OF_RESPONSIBILITY_DEFAULT_HANDLER_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace ChainOfResponsibility {
    namespace GumballEMailHandler {

      class LastHandler : public Handler {

      public:
        explicit LastHandler( const Handler* successor = 0 ) :
          Handler( successor )
        {
          HUM_TRACE(ACE_TEXT("LastHandler::LastHandler"));
        }
        void handleRequest( std::string request ) const
        {
          HUM_TRACE(ACE_TEXT("LastHandler::handleRequest"));
          Handler::canHandleRequest( request );
        }
        void print() const
        {
          HUM_TRACE(ACE_TEXT("LastHandler::print"));
          std:: cout << std::endl << "Unclassified, send to AI team:";
          Handler::print();
        }
      };

    } // namespace GumballEMailHandler
  } // namespace ChainOfResponsibility
} // namespace HeadFirstDesignPatterns

#endif
