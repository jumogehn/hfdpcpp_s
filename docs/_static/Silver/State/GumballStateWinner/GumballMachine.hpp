#ifndef	_HFDP_CPP_STATE_GUMBALL_STATE_WINNER_GUMBALL_MACHINE_HPP_
#define _HFDP_CPP_STATE_GUMBALL_STATE_WINNER_GUMBALL_MACHINE_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
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
        ~GumballMachine()
        {
          HUM_TRACE(ACE_TEXT("GumballMachine::~GumballMachine"));

          delete _soldOutState;
          delete _noQuarterState;
          delete _hasQuarterState;
          delete _soldState;
          delete _winnerState;
        }
        void insertQuarter() const
        {
          HUM_TRACE(ACE_TEXT("GumballMachine::insertQuarter"));
          _state->insertQuarter();
        }
        void ejectQuarter() const
        {
          HUM_TRACE(ACE_TEXT("GumballMachine::ejectQuarter"));
          _state->ejectQuarter();
        }
        void turnCrank() const
        {
          HUM_TRACE(ACE_TEXT("GumballMachine::turnCrank"));
          _state->turnCrank();
          _state->dispense();
        }
        void setState( State* state )
        {
          assert( state );
          HUM_TRACE(ACE_TEXT("GumballMachine::setState"));
          _state = state;
        }
        void releaseBall()
        {
          HUM_TRACE(ACE_TEXT("GumballMachine::releaseBall"));
          std::cout << "A gumball comes rolling out the slot..." << std::endl;
          if( _count != 0) {
            _count--;
          }
        }
        int getCount() const
        {
          HUM_TRACE(ACE_TEXT("GumballMachine::getCount"));
          return _count;
        }
        void refill( int count )
        {
          assert( count > 0 );
          HUM_TRACE(ACE_TEXT("GumballMachine::refill"));
          _count = count;
          _state = _noQuarterState;
        }
        State* getState() const
        {
          HUM_TRACE(ACE_TEXT("GumballMachine::getState"));
          return _state;
        }
        State* getSoldOutState() const
        {
          HUM_TRACE(ACE_TEXT("GumballMachine::getSoldOutState"));
          return _soldOutState;
        }
        State* getNoQuarterState() const
        {
          HUM_TRACE(ACE_TEXT("GumballMachine::getNoQuarterState"));
          return _noQuarterState;
        }
        State* getHasQuarterState() const
        {
          HUM_TRACE(ACE_TEXT("GumballMachine::getHasQuarterState"));
          return _hasQuarterState;
        }
        State* getSoldState() const
        {
          HUM_TRACE(ACE_TEXT("GumballMachine::getSoldState"));
          return _soldState;
        }
        State* getWinnerState() const
        {
          HUM_TRACE(ACE_TEXT("GumballMachine::getWinnerState"));
          return _winnerState;
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("GumballMachine::toString"));
          std::stringstream value;
          value << std::endl << "Mighty Gumball, Inc.";
          value << std::endl << "C++-enabled Standing Gumball Model #2004";
          value << std::endl << "Inventory: " << _count << " gumball";
          if( _count > 1 ) {
            value << "s";
          }
          value << std::endl;
          value << "Machine is " << _state->toString() << std::endl;
          return value.str();
        }
      };

    } // namespace GumballStateWinner
  } // namespace State
} // namespace HeadFirstDesignPatterns

#endif
