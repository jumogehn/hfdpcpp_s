//===--- HasQuarterState.hpp - ----------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_STATE_GUMBALL_STATE_WINNER_HAS_QUARTER_STATE_HPP_
#define _HFDP_CPP_STATE_GUMBALL_STATE_WINNER_HAS_QUARTER_STATE_HPP_

#include "State.hpp"
#include "GumballMachine.hpp"
#include <string>

namespace HFDP {
  namespace State {
    namespace GumballStateWinner {

      class HasQuarterState : public State {

        GumballMachine* _gumballMachine;
        int _random;

        HasQuarterState( const HasQuarterState& ); // Disable copy constructor
        void operator=( const HasQuarterState& ); // Disable assignment operator

      public:
        explicit HasQuarterState( GumballMachine* gumballMachine );
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
