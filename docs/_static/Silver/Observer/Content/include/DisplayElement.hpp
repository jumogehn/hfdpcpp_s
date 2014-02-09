//===--- DisplayElement.hpp - -----------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_OBSERVER_DISPLAY_ELEMENT_HPP_
#define _HFDP_CPP_OBSERVER_DISPLAY_ELEMENT_HPP_


namespace HFDP {
  namespace Observer {

    class DisplayElement {
    public:
      virtual void display() const = 0;
    protected:
      virtual ~DisplayElement();
    };

  } // namespace Observer
} // namespace HFDP

#endif
