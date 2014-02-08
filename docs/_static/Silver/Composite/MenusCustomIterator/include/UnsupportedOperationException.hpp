//===--- MenuException.hpp - ------------------------------------*- C++ -*-===//
//
//                     Head First Design Patterns
//
//
//===----------------------------------------------------------------------===//
///
/// \file
/// \brief
///
//===----------------------------------------------------------------------===//


#ifndef	_HFDP_CPP_COMPOSITE_MENUS_EXCEPTION_HPP_
#define _HFDP_CPP_COMPOSITE_MENUS_EXCEPTION_HPP_

#include <exception>
#include <string>

namespace HFDP {
  namespace Composite {
    namespace Menus {

      class UnsupportedOperationException : public std::exception {

        std::string _message;

      public:
        UnsupportedOperationException() throw();
        UnsupportedOperationException( const std::string message );

        virtual ~UnsupportedOperationException() throw();

        std::string getMessage() const;
      };

    } // namespace Menus
  } // namespace Composite
} // namespace HFDP

#endif
