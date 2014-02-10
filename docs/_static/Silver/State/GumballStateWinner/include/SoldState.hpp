//===--- SoldState.hpp - ----------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_STATE_GUMBALL_STATE_WINNER_SOLD_STATE_HPP_
#define _HFDP_CPP_STATE_GUMBALL_STATE_WINNER_SOLD_STATE_HPP_

#include "State.hpp"
#include "GumballMachine.hpp"
#include <string>

namespace HFDP {
  namespace State {
    namespace GumballStateWinner {

      class SoldState : public State {

        GumballMachine* _gumballMachine;

        SoldState( const SoldState& ); // Disable copy constructor
        void operator=( const SoldState& ); // Disable assignment operator

      public:
        explicit SoldState( GumballMachine* gumballMachine );
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

