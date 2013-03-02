#ifndef	_HFDP_CPP_STATE_GUMBALL_STATE_WINNER_STATE_HPP_
#define _HFDP_CPP_STATE_GUMBALL_STATE_WINNER_STATE_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace State {
    namespace GumballStateWinner {

      class State {

      public:
        virtual ~State()
        {
          HUM_TRACE(ACE_TEXT("State::~State"));
        }
        virtual void insertQuarter() const = 0;
        virtual void ejectQuarter() const = 0;
        virtual void turnCrank() const = 0;
        virtual void dispense() = 0;
        virtual std::string toString() const = 0;
      };

    } // namespace GumballStateWinner
  } // namespace State
} // namespace HeadFirstDesignPatterns

#endif
