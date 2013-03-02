#ifndef	_HFDP_CPP_STATE_GUMBALL_STATE_WINNER_WINNER_STATE_HPP_
#define _HFDP_CPP_STATE_GUMBALL_STATE_WINNER_WINNER_STATE_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace State {
    namespace GumballStateWinner {

      class WinnerState : public State {

        GumballMachine* _gumballMachine;

        WinnerState( const WinnerState& ); // Disable copy constructor
        void operator=( const WinnerState& ); // Disable assignment operator

      public:
        explicit WinnerState( GumballMachine* gumballMachine ) :
          _gumballMachine( gumballMachine )
        {
          assert( gumballMachine );
          HUM_TRACE(ACE_TEXT("WinnerState::WinnerState"));
        }
        void insertQuarter() const
        {
          HUM_TRACE(ACE_TEXT("WinnerState::insertQuarter"));
          std::cout << "Please wait, we're already giving you a Gumball"
            << std::endl;
        }
        void ejectQuarter() const
        {
          HUM_TRACE(ACE_TEXT("WinnerState::ejectQuarter"));
          std::cout << "Please wait, we're already giving you a Gumball"
            << std::endl;
        }
        void turnCrank() const
        {
          HUM_TRACE(ACE_TEXT("WinnerState::turnCrank"));
          std::cout << "Turning again doesn't get you another gumball!"
            << std::endl;
        }
        void dispense()
        {
          HUM_TRACE(ACE_TEXT("WinnerState::dispense"));
          std::cout << "YOU'RE A WINNER! You get two gumballs for your quarter"
            << std::endl;
          _gumballMachine->releaseBall();
          if( _gumballMachine->getCount() == 0 ) {
            _gumballMachine->setState( _gumballMachine->getSoldOutState() );
          } else {
            _gumballMachine->releaseBall();
            if( _gumballMachine->getCount() > 0 ) {
              _gumballMachine->setState( _gumballMachine->getNoQuarterState() );
            } else {
              std::cout << "Oops, out of gumballs!" << std::endl;
              _gumballMachine->setState( _gumballMachine->getSoldOutState() );
            }
          }
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("WinnerState::toString"));
          return "despensing two gumballs for your quarter,"
            " because YOU'RE A WINNER!";
        }
      };

    } // namespace GumballStateWinner
  } // namespace State
} // namespace HeadFirstDesignPatterns

#endif

