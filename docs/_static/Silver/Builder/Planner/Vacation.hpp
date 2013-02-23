#ifndef	_HFDP_CPP_BUILDER_VACATION_HPP_
#define _HFDP_CPP_BUILDER_VACATION_HPP_

#include "Planner.hpp"

namespace HeadFirstDesignPatterns {
  namespace Builder {

    class Vacation {

      const Event& _allEvents;

      Vacation( const Vacation& ); // Disable copy constructor
      void operator=( const Vacation& ); // Disable assignment operator

    public:
      Vacation( const Event& allEvents ) :
        _allEvents( allEvents )
      {}
      void printItinerary() const
      {
        std::cout << std::endl;
        _allEvents.print();
      }
    };

  } // namespace Builder
} // namespace HeadFirstDesignPatterns

#endif
