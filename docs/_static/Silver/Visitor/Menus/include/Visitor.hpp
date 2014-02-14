//===--- Visitor.hpp - ------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_VISITOR_VISITOR_HPP_
#define _HFDP_CPP_VISITOR_VISITOR_HPP_

#include "Ingredient.hpp"

namespace HFDP {
  namespace Visitor {
    namespace Menus {

      class Visitor {

      protected:
        explicit Visitor();
      public:
        virtual ~Visitor();
        virtual void visit( Menu* component ) = 0;
        virtual void visit( MenuItem* component ) = 0;
        virtual void visit( Ingredient* component ) = 0;
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HFDP

#endif
