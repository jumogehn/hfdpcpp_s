#ifndef	_HFDP_CPP_COMPOSITE_MENUS_EXCEPTION_HPP_
#define _HFDP_CPP_COMPOSITE_MENUS_EXCEPTION_HPP_

namespace HeadFirstDesignPatterns {
  namespace Composite {
    namespace Menus {

      class UnsupportedOperationException : public std::exception {

        std::string _message;

      public:
        UnsupportedOperationException() throw():
          std::exception()
        {}
        UnsupportedOperationException( const std::string message ) :
          std::exception( /*message.c_str()*/ ), _message( message )
        {}

        virtual ~UnsupportedOperationException() throw()
        {}

        std::string getMessage() const
        {
          return _message;
        }
      };

    } // namespace Menus
  } // namespace Composite
} // namespace HeadFirstDesignPatterns

#endif
