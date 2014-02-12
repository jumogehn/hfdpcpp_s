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


#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_VISITOR_MENUS_EXCEPTION_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_VISITOR_MENUS_EXCEPTION_HPP_

#include <exception>
#include <string>

namespace HFDP {
  namespace Visitor {
    namespace Menus {

      class UnsupportedOperationException : public std::exception {

        std::string _message;

      public:
        UnsupportedOperationException();
        UnsupportedOperationException( const std::string message );
        std::string getMessage() const;
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HFDP

#endif
