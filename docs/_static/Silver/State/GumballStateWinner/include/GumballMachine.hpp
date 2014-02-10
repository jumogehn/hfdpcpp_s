//===--- GumballMachine.hpp - -----------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_STATE_GUMBALL_STATE_WINNER_GUMBALL_MACHINE_HPP_
#define _HFDP_CPP_STATE_GUMBALL_STATE_WINNER_GUMBALL_MACHINE_HPP_

#include "State.hpp"
#include <string>

namespace HFDP {
  namespace State {
    namespace GumballStateWinner {

      class GumballMachine {

        State* _soldOutState;
        State* _noQuarterState;
        State* _hasQuarterState;
        State* _soldState;
        State* _winnerState;
        State* _state;
        int _count;

        GumballMachine( const GumballMachine& ); // Disable copy constructor
        void operator=( const GumballMachine& ); // Disable assignment operator

      public:
        explicit GumballMachine(int numberGumballs );
        ~GumballMachine();
        void insertQuarter() const;
        void ejectQuarter() const;
        void turnCrank() const;
        void setState( State* state );
        void releaseBall();
        int getCount() const;
        void refill( int count );
        State* getState() const;
        State* getSoldOutState() const;
        State* getNoQuarterState() const;
        State* getHasQuarterState() const;
        State* getSoldState() const;
        State* getWinnerState() const;
        std::string toString() const;
      };

    } // namespace GumballStateWinner
  } // namespace State
} // namespace HFDP

#endif
