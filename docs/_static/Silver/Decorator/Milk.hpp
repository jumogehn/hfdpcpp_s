#ifndef	_HFDP_CPP_DECORATOR_MILK_HPP_
#define _HFDP_CPP_DECORATOR_MILK_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Starbuzz.hpp"

namespace HeadFirstDesignPatterns {
  namespace Decorator {

    class Milk : public CondimentDecorator {

      const Beverage* _beverage;

    public:
      explicit Milk( const Beverage* beverage ) :
        _beverage( beverage )
      {
        assert( beverage );
        HUM_TRACE(ACE_TEXT("Milk::Milk"));
      }
      ~Milk()
      {
        HUM_TRACE(ACE_TEXT("Milk::~Milk"));
        delete _beverage;
      }
      std::string getDescription() const
      {
        HUM_TRACE(ACE_TEXT("Milk::getDescription"));
        return _beverage->getDescription() + ", Milk";
      }
      double cost() const
      {
        HUM_TRACE(ACE_TEXT("Milk::cost"));
        return 0.10 + _beverage->cost();
      }
    };

  } // namespace Observer
} // namespace HeadFirstDesignPatterns

#endif
