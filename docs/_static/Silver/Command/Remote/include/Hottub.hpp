//===--- Hottub.hpp - -------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_REMOTE_HOT_TUB_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_HOT_TUB_HPP_


namespace HFDP {
  namespace Command {
    namespace Remote {

      class Hottub {

        mutable bool _on;
        mutable int _temperature;

      public:
        Hottub();
        void on() const;
        void off() const;
        void bubblesOn() const;
        void bubblesOff() const;
        void jetsOn() const;
        void jetsOff() const;
        void setTemperature( int temperature );
        void heat() const;
        void cool() const;
      };

    } // namespace Remote
  } // namespace Command
} // namespace HFDP

#endif
