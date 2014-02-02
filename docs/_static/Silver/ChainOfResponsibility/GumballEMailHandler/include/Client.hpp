#ifndef	_HFDP_CPP_CHAIN_OF_RESPONSIBILITY_CLIENT_HPP_
#define _HFDP_CPP_CHAIN_OF_RESPONSIBILITY_CLIENT_HPP_

#include "Handler.hpp"
#include <memory>

namespace HFDP {
  namespace ChainOfResponsibility {
    namespace GumballEMailHandler {

      class Client {

        std::unique_ptr< Handler > _lastHandler;
        std::unique_ptr< Handler > _newHandler;
        std::unique_ptr< Handler > _hateHandler;
        std::unique_ptr< Handler > _fanHandler;
        std::unique_ptr< Handler > _spamHandler;

        Client( const Client& ); // Disable copy constructor
        void operator=( const Client& ); // Disable assignment operator

      public:
        Client();
        void handleRequest( std::string request ) const;
        void print() const;
      };

    } // namespace GumballEMailHandler
  } // namespace ChainOfResponsibility
} // namespace HFDP

#endif
