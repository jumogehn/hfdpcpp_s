#ifndef	_HFDP_CPP_BUILDER_EVENT_EXCEPTION_HPP_
#define _HFDP_CPP_BUILDER_EVENT_EXCEPTION_HPP_

namespace HeadFirstDesignPatterns {
  namespace Builder {

    class UnsupportedOperationException : public std::exception {

      std::string _message;

    public:
      UnsupportedOperationException() :
        std::exception()
      {}

      virtual ~UnsupportedOperationException() throw()
      {}

      UnsupportedOperationException( const std::string message ) :
        std::exception( /*message.c_str()*/ ), _message( message )
      {}
      std::string getMessage () const
      {
        return _message;
      }
    };

  } // namespace Builder
} // namespace HeadFirstDesignPatterns

#endif
