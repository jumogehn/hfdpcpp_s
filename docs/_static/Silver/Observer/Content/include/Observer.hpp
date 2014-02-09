//===--- Observer.hpp - -----------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_OBSERVER_OBSERVER_HPP_
#define _HFDP_CPP_OBSERVER_OBSERVER_HPP_


namespace HFDP {
  namespace Observer {

    class Observer {

    protected:
      virtual ~Observer();
    public:
      virtual void update(float temp, float humidity, float pressure) = 0;
    };

  } // namespace Observer
} // namespace HFDP

#endif
