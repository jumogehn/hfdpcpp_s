#ifndef	_HFDP_CPP_STATE_GUMBALL_STATE_WINNER_SOLD_OUT_STATE_HPP_
#define _HFDP_CPP_STATE_GUMBALL_STATE_WINNER_SOLD_OUT_STATE_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace State {
    namespace GumballStateWinner {

      class SoldOutState : public State {
        GumballMachine* _gumballMachine;

        SoldOutState( const SoldOutState& ); // Disable copy constructor
        void operator=( const SoldOutState& ); // Disable assignment operator

      public:
        explicit SoldOutState(GumballMachine* gumballMachine ) :
          _gumballMachine( gumballMachine )
        {
          assert(gumballMachine );
          HUM_TRACE(ACE_TEXT("SoldOutState::SoldOutState"));
        }
        void insertQuarter() const
        {
          HUM_TRACE(ACE_TEXT("SoldOutState::insertQuarter"));
          std::cout << "You can't insert a quarter, the machine is sold out"
            << std::endl;
        }
        void ejectQuarter() const
        {
          HUM_TRACE(ACE_TEXT("SoldOutState::ejectQuarter"));
          std::cout << "You can't eject, you haven't inserted a quarter yet"
            << std::endl;
        }
        void turnCrank() const
        {
          HUM_TRACE(ACE_TEXT("SoldOutState::turnCrank"));
          std::cout << "You turned, but there are no gumballs" << std::endl;
        }
        void dispense()
        {
          HUM_TRACE(ACE_TEXT("SoldOutState::dispense"));
          std::cout << "No gumball dispensed" << std::endl;
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("SoldOutState::toString"));
          return "sold out";
        }
      };

    } // namespace GumballStateWinner
  } // namespace State
} // namespace HeadFirstDesignPatterns

#endif

