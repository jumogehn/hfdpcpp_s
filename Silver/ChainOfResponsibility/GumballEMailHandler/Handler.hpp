#ifndef	_HFDP_CPP_CHAIN_OF_RESPONSIBILITY_GUMBALL_EMAIL_HANDLER_HANDLER_HPP_
#define _HFDP_CPP_CHAIN_OF_RESPONSIBILITY_GUMBALL_EMAIL_HANDLER_HANDLER_HPP_

namespace HeadFirstDesignPatterns {
  namespace ChainOfResponsibility {
    namespace GumballEMailHandler {

      class Handler {

        mutable std::list< std::string > _requests;
        const Handler* _successor;

        Handler( const Handler& ); // Disable copy constructor
        void operator=( const Handler& ); // Disable assignment operator

      protected:
        explicit Handler( const Handler* successor = 0 ) :
          _successor( successor )
        {}
        virtual bool canHandleRequest( const std::string& request ) const
        {
          _requests.push_back( request );
          return true;
        }

      public:
        virtual ~Handler()
        {}
        virtual void handleRequest( std::string request ) const
        {
          if( _successor ) {
            _successor->handleRequest( request );
          }
        }

        virtual void print() const
        {
          std::cout << " count=" << _requests.size() << std::endl;
          std::list< std::string >::const_iterator iterator = _requests.begin();
          while( iterator != _requests.end() ) {
            std::cout << " - " << ( *iterator ).c_str() << std::endl;
            iterator++;
          }
          if( _successor ) {
            _successor->print();
          }
        }
      };

    } // namespace GumballEMailHandler
  } // namespace ChainOfResponsibility
} // namespace HeadFirstDesignPatterns

#endif
