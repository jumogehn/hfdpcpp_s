//===--- Subject.hpp - ------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_OBSERVER_SUBJECT_HPP_
#define _HFDP_CPP_OBSERVER_SUBJECT_HPP_

#include "Observer.hpp"

namespace HFDP {
  namespace Observer {

    class Subject {

    protected:
      virtual ~Subject();
    public:
      virtual void registerObserver( Observer* o ) = 0;
      virtual void removeObserver( Observer* o ) = 0;
      virtual void notifyObservers() const = 0;
    };

  } // namespace Observer
} // namespace HFDP

#endif
