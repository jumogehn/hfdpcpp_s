#ifndef	_HFDP_CPP_DECORATOR_BEVERAGE_HPP_
#define _HFDP_CPP_DECORATOR_BEVERAGE_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Starbuzz.hpp"

namespace HeadFirstDesignPatterns {
  namespace Decorator {

    class Beverage {

    protected:
      std::string _description;

      Beverage() :
        _description( "Unknown Beverage" )
      {
        HUM_TRACE(ACE_TEXT("Beverage::Beverage"));
      }
    public:
      virtual ~Beverage()
      {
        HUM_TRACE(ACE_TEXT("Beverage::~Beverage"));
      }
      virtual std::string getDescription() const
      {
        HUM_TRACE(ACE_TEXT("Beverage::getDescription"));
        return _description;
      }
      virtual double cost() const = 0;
    };

  } // namespace Observer
} // namespace HeadFirstDesignPatterns

#endif
