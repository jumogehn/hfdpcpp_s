//===--- Iterator.hpp - -----------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMPOSITE_MENUS_CUSTOM_ITERATOR_ITERATOR_HPP_
#define _HFDP_CPP_COMPOSITE_MENUS_CUSTOM_ITERATOR_ITERATOR_HPP_

#include "Utilities.hpp"

namespace HFDP {
  namespace Composite {
    namespace Menus {

      template <class T>
        class Iterator {
        public:
          virtual bool hasNext() const = 0;
          virtual T* next() const = 0;
          virtual ~Iterator()
          {
            PrintMessage("Iterator::~Iterator");
          }
        };

    } // namespace Menus
  } // namespace Composite
} // namespace HFDP

#endif
