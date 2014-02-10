//===--- SoldOutState.hpp - -------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_STATE_GUMBALL_STATE_WINNER_SOLD_OUT_STATE_HPP_
#define _HFDP_CPP_STATE_GUMBALL_STATE_WINNER_SOLD_OUT_STATE_HPP_

#include "State.hpp"
#include "GumballMachine.hpp"
#include <string>

namespace HFDP {
  namespace State {
    namespace GumballStateWinner {

      class SoldOutState : public State {
        GumballMachine* _gumballMachine;

        SoldOutState( const SoldOutState& ); // Disable copy constructor
        void operator=( const SoldOutState& ); // Disable assignment operator

      public:
        explicit SoldOutState(GumballMachine* gumballMachine );
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

