#ifndef	_HFDP_CPP_BUILDER_BUILDER_HPP_
#define _HFDP_CPP_BUILDER_BUILDER_HPP_

#include "Planner.hpp"

namespace HeadFirstDesignPatterns {
  namespace Builder {

    class Builder {

    protected:
      Builder()
      {}
      virtual ~Builder()
      {}
    public:
      virtual void buildDay( const tm& date ) = 0;
      virtual void addHotel( const std::string& hotel ) = 0;
      virtual void addTickets( const std::string& event ) = 0;
      virtual void addReservations( const std::string& event ) = 0;
      virtual void addSpecialEvent( const std::string& event ) = 0;
      virtual Vacation* getVacationPlanner() = 0;
    };

  } // namespace Builder
} // namespace HeadFirstDesignPatterns

#endif
