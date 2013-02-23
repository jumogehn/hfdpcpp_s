#ifndef	_HFDP_CPP_STATE_GUMBALL_STATE_WINNER_SOLD_STATE_HPP_
#define _HFDP_CPP_STATE_GUMBALL_STATE_WINNER_SOLD_STATE_HPP_

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
        }
        void insertQuarter() const
        {
          std::cout << "Please wait, we're already giving you a gumball"
            << std::endl;
        }
        void ejectQuarter() const
        {
          std::cout << "Sorry, you already turned the crank" << std::endl;
        }
        void turnCrank() const
        {
          std::cout << "Turning twice doesn't get you another gumball!"
            << std::endl;
        }
        void dispense()
        {
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
          return "dispensing a gumball";
        }
      };

    } // namespace GumballStateWinner
  } // namespace State
} // namespace HeadFirstDesignPatterns

#endif

