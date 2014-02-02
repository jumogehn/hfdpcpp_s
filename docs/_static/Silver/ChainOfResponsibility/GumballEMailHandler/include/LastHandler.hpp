#ifndef	_HFDP_CPP_CHAIN_OF_RESPONSIBILITY_DEFAULT_HANDLER_HPP_
#define _HFDP_CPP_CHAIN_OF_RESPONSIBILITY_DEFAULT_HANDLER_HPP_

#include "Handler.hpp"

namespace HFDP {
  namespace ChainOfResponsibility {
    namespace GumballEMailHandler {

      class LastHandler : public Handler {

      public:
        explicit LastHandler( const Handler* successor = 0 );
        void handleRequest( std::string request ) const;
        void print() const;
      };

    } // namespace GumballEMailHandler
  } // namespace ChainOfResponsibility
} // namespace HFDP

#endif
