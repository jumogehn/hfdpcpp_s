#ifndef	_HFDP_CPP_COMPOSITE_MENUS_EXCEPTION_HPP_
#define _HFDP_CPP_COMPOSITE_MENUS_EXCEPTION_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Composite {
    namespace Menus {

      class UnsupportedOperationException : public std::exception {

        std::string _message;

      public:
        UnsupportedOperationException() throw():
          std::exception()
        {
          HUM_TRACE(ACE_TEXT("UnsupportedOperationException::"
                             "UnsupportedOperationException"));
        }
        UnsupportedOperationException( const std::string message ) :
          std::exception( /*message.c_str()*/ ), _message( message )
        {
          HUM_TRACE(ACE_TEXT("UnsupportedOperationException::"
                             "UnsupportedOperationException"));
        }

        virtual ~UnsupportedOperationException() throw()
        {
          HUM_TRACE(ACE_TEXT("UnsupportedOperationException::"
                             "~UnsupportedOperationException"));
        }

        std::string getMessage() const
        {
          HUM_TRACE(ACE_TEXT("UnsupportedOperationException::getMessage"));
          return _message;
        }
      };

    } // namespace Menus
  } // namespace Composite
} // namespace HeadFirstDesignPatterns

#endif
