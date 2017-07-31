#ifndef	_HFDP_CPP_CHAIN_OF_RESPONSIBILITY_SPAM_HANDLER_HPP_
#define _HFDP_CPP_CHAIN_OF_RESPONSIBILITY_SPAM_HANDLER_HPP_

#include "Handler.hpp"

namespace HFDP {
  namespace ChainOfResponsibility {
    namespace GumballEMailHandler {

      class SpamHandler : public Handler {
      public:
        explicit SpamHandler( const std::shared_ptr<Handler> successor = 0 );
        void handleRequest( std::string request ) const;
        bool canHandleRequest( const std::string& request ) const;
        void print() const;
      };

    } // namespace GumballEMailHandler
  } // namespace ChainOfResponsibility
} // namespace HFDP

#endif
