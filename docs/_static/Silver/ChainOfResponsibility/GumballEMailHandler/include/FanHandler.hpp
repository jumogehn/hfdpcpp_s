#ifndef	_HFDP_CPP_CHAIN_OF_RESPONSIBILITY_FAN_HANDLER_HPP_
#define _HFDP_CPP_CHAIN_OF_RESPONSIBILITY_FAN_HANDLER_HPP_

#include "Handler.hpp"

namespace HFDP {
  namespace ChainOfResponsibility {
    namespace GumballEMailHandler {

      class FanHandler : public Handler {

      public:
        explicit FanHandler( const Handler* successor = 0 );
        void handleRequest( std::string request ) const;
        bool canHandleRequest( const std::string& request ) const;
        void print() const;
      };

    } // namespace GumballEMailHandler
  } // namespace ChainOfResponsibility
} // namespace HFDP

#endif
