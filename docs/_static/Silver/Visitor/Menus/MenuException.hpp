#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_VISITOR_MENUS_EXCEPTION_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_VISITOR_MENUS_EXCEPTION_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class UnsupportedOperationException : public std::exception {

        std::string _message;

      public:
        UnsupportedOperationException() :
          std::exception()
        {
          HUM_TRACE(ACE_TEXT("UnsupportedOperationException"
                             "::UnsupportedOperationException"));
        }
        UnsupportedOperationException( const std::string message ) :
          std::exception( message.c_str() ), _message( message )
        {
          HUM_TRACE(ACE_TEXT("UnsupportedOperationException"
                             "::UnsupportedOperationException"));
        }
        std::string getMessage() const
        {
          HUM_TRACE(ACE_TEXT("UnsupportedOperationException::getMessage"));
          return _message;
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
