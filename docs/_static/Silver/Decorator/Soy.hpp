#ifndef	_HFDP_CPP_DECORATOR_SOY_HPP_
#define _HFDP_CPP_DECORATOR_SOY_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Starbuzz.hpp"

namespace HeadFirstDesignPatterns {
  namespace Decorator {

    class Soy : public CondimentDecorator {

      const Beverage* _beverage;

    public:
      explicit Soy( const Beverage* beverage ) :
        _beverage( beverage )
      {
        assert( beverage );
        HUM_TRACE(ACE_TEXT("Soy::Soy"));
      }
      ~Soy()
      {
        HUM_TRACE(ACE_TEXT("Soy::~Soy"));
        delete _beverage;
      }
      std::string getDescription() const
      {
        HUM_TRACE(ACE_TEXT("Soy::getDescription"));
        return _beverage->getDescription() + ", Soy";
      }
      double cost() const
      {
        HUM_TRACE(ACE_TEXT("Soy::cost"));
        return 0.15 + _beverage->cost();
      }
    };

  } // namespace Observer
} // namespace HeadFirstDesignPatterns

#endif
