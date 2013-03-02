#ifndef	_HFDP_CPP_STATE_GUMBALL_STATE_WINNER_SOLD_STATE_HPP_
#define _HFDP_CPP_STATE_GUMBALL_STATE_WINNER_SOLD_STATE_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace State {
    namespace GumballStateWinner {

      class SoldState : public State {

        GumballMachine* _gumballMachine;

        SoldState( const SoldState& ); // Disable copy constructor
        void operator=( const SoldState& ); // Disable assignment operator

      public:
        explicit SoldState( GumballMachine* gumballMachine ) :
          _gumballMachine( gumballMachine )
        {
          assert( gumballMachine );
          HUM_TRACE(ACE_TEXT("SoldState::SoldState"));
        }
        void insertQuarter() const
        {
          HUM_TRACE(ACE_TEXT("SoldState::insertQuarter"));
          std::cout << "Please wait, we're already giving you a gumball"
            << std::endl;
        }
        void ejectQuarter() const
        {
          HUM_TRACE(ACE_TEXT("SoldState::ejectQuarter"));
          std::cout << "Sorry, you already turned the crank" << std::endl;
        }
        void turnCrank() const
        {
          HUM_TRACE(ACE_TEXT("SoldState::turnCrank"));
          std::cout << "Turning twice doesn't get you another gumball!"
            << std::endl;
        }
        void dispense()
        {
          HUM_TRACE(ACE_TEXT("SoldState::dispense"));
          _gumballMachine->releaseBall();
          if( _gumballMachine->getCount() > 0) {
            _gumballMachine->setState( _gumballMachine->getNoQuarterState() );
          } else {
            std::cout << "Oops, out of gumballs!" << std::endl;
            _gumballMachine->setState( _gumballMachine->getSoldOutState() );
          }
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("SoldState::toString"));
          return "dispensing a gumball";
        }
      };

    } // namespace GumballStateWinner
  } // namespace State
} // namespace HeadFirstDesignPatterns

#endif

