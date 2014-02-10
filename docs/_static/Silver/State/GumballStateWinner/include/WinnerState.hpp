//===--- WinnerState.hpp - --------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_STATE_GUMBALL_STATE_WINNER_WINNER_STATE_HPP_
#define _HFDP_CPP_STATE_GUMBALL_STATE_WINNER_WINNER_STATE_HPP_

#include "State.hpp"
#include "GumballMachine.hpp"
#include <string>

namespace HFDP {
  namespace State {
    namespace GumballStateWinner {

      class WinnerState : public State {

        GumballMachine* _gumballMachine;

        WinnerState( const WinnerState& ); // Disable copy constructor
        void operator=( const WinnerState& ); // Disable assignment operator

      public:
        explicit WinnerState( GumballMachine* gumballMachine );
        void insertQuarter() const;
        void ejectQuarter() const;
        void turnCrank() const;
        void dispense();
        std::string toString() const;
      };

    } // namespace GumballStateWinner
  } // namespace State
} // namespace HFDP

#endif

