//===--- NoQuarterState.hpp - -----------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_STATE_GUMBALL_STATE_WINNER_NO_QUARTER_STATE_HPP_
#define _HFDP_CPP_STATE_GUMBALL_STATE_WINNER_NO_QUARTER_STATE_HPP_

#include "State.hpp"
#include "GumballMachine.hpp"
#include <string>

namespace HFDP {
  namespace State {
    namespace GumballStateWinner {

      class NoQuarterState : public State {

        GumballMachine* _gumballMachine;

        NoQuarterState( const NoQuarterState& ); // Disable copy constructor
        void operator=( const NoQuarterState& ); // Disable assignment operator

      public:
        explicit NoQuarterState( GumballMachine* gumballMachine );
        void insertQuarter() const;
        void ejectQuarter() const;
        void turnCrank() const;
        void dispense();
        std::string toString() const;
      };

    } // namespace GumballSateWinner
  } // namespace State
} // namespace HFDP

#endif

