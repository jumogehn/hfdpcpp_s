//===--- State.hpp - --------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_STATE_GUMBALL_STATE_WINNER_STATE_HPP_
#define _HFDP_CPP_STATE_GUMBALL_STATE_WINNER_STATE_HPP_

#include <string>

namespace HFDP {
  namespace State {
    namespace GumballStateWinner {

      class State {

      public:
        virtual ~State();
        virtual void insertQuarter() const = 0;
        virtual void ejectQuarter() const = 0;
        virtual void turnCrank() const = 0;
        virtual void dispense() = 0;
        virtual std::string toString() const = 0;
      };

    } // namespace GumballStateWinner
  } // namespace State
} // namespace HFDP

#endif
