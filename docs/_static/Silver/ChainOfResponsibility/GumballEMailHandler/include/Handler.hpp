#ifndef	_HFDP_CPP_CHAIN_OF_RESPONSIBILITY_GUMBALL_EMAIL_HANDLER_HANDLER_HPP_
#define _HFDP_CPP_CHAIN_OF_RESPONSIBILITY_GUMBALL_EMAIL_HANDLER_HANDLER_HPP_

#include "Handler.hpp"
#include <list>
#include <string>

namespace HFDP {
  namespace ChainOfResponsibility {
    namespace GumballEMailHandler {

      class Handler {

        mutable std::list< std::string > _requests;
        const Handler* _successor;

        Handler( const Handler& ); // Disable copy constructor
        void operator=( const Handler& ); // Disable assignment operator

      protected:
        explicit Handler( const Handler* successor = 0 );
        virtual bool canHandleRequest( const std::string& request ) const;

      public:
        virtual ~Handler();
        virtual void handleRequest( std::string request ) const;

        virtual void print() const;
      };

    } // namespace GumballEMailHandler
  } // namespace ChainOfResponsibility
} // namespace HFDP

#endif
