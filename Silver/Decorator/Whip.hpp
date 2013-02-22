#ifndef	_HFDP_CPP_DECORATOR_WHIP_HPP_
#define _HFDP_CPP_DECORATOR_WHIP_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Starbuzz.hpp"

namespace HeadFirstDesignPatterns {
  namespace Decorator {

    class Whip : public CondimentDecorator {

      const Beverage* _beverage;

    public:
      explicit Whip( const Beverage* beverage ) :
        _beverage( beverage )
      {
        assert( beverage );
        HUM_TRACE(ACE_TEXT("Whip::Whip"));
      }
      ~Whip() {
        HUM_TRACE(ACE_TEXT("Whip::~Whip"));
        delete _beverage;
      }
      std::string getDescription() const
      {
        HUM_TRACE(ACE_TEXT("Whip::getDescription"));
        return _beverage->getDescription() + ", Whip";
      }
      double cost() const
      {
        HUM_TRACE(ACE_TEXT("Whip::cost"));
        return 0.10 + _beverage->cost();
      }
    };

  } // namespace Observer
} // namespace HeadFirstDesignPatterns

#endif
