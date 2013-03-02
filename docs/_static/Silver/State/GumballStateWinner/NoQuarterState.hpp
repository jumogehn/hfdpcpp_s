#ifndef	_HFDP_CPP_STATE_GUMBALL_STATE_WINNER_NO_QUARTER_STATE_HPP_
#define _HFDP_CPP_STATE_GUMBALL_STATE_WINNER_NO_QUARTER_STATE_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace State {
    namespace GumballStateWinner {

      class NoQuarterState : public State {

        GumballMachine* _gumballMachine;

        NoQuarterState( const NoQuarterState& ); // Disable copy constructor
        void operator=( const NoQuarterState& ); // Disable assignment operator

      public:
        explicit NoQuarterState( GumballMachine* gumballMachine ) :
          _gumballMachine( gumballMachine )
        {
          assert( gumballMachine );
          HUM_TRACE(ACE_TEXT("NoQuarterState::NoQuarterState"));
        }
        void insertQuarter() const
        {
          HUM_TRACE(ACE_TEXT("NoQuarterState::insertQuarter"));
          std::cout << "You inserted a quarter" << std::endl;
          _gumballMachine->setState( _gumballMachine->getHasQuarterState() );
        }
        void ejectQuarter() const
        {
          HUM_TRACE(ACE_TEXT("NoQuarterState::ejectQuarter"));
          std::cout << "You haven't inserted a quarter" << std::endl;
        }
        void turnCrank() const
        {
          HUM_TRACE(ACE_TEXT("NoQuarterState::turnCrank"));
          std::cout << "You turned, but there's no quarter" << std::endl;
        }
        void dispense()
        {
          HUM_TRACE(ACE_TEXT("NoQuarterState::dispense"));
          std::cout << "You need to pay first" << std::endl;
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("NoQuarterState::toString"));
          return "waiting for quarter";
        }
      };

    } // namespace GumballSateWinner
  } // namespace State
} // namespace HeadFirstDesignPatterns

#endif

