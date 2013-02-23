#ifndef	_HFDP_CPP_DECORATOR_MOCHA_HPP_
#define _HFDP_CPP_DECORATOR_MOCHA_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Starbuzz.hpp"

namespace HeadFirstDesignPatterns {
  namespace Decorator {

    class Mocha : public CondimentDecorator {

      const Beverage* _beverage;

    public:
      explicit Mocha( Beverage* beverage ) :
        _beverage( beverage )
      {
        assert( beverage );
        HUM_TRACE(ACE_TEXT("Mocha::Mocha"));
      }
      ~Mocha()
      {
        HUM_TRACE(ACE_TEXT("Mocha::~Mocha"));
        delete _beverage;
      }
      std::string getDescription() const
      {
        HUM_TRACE(ACE_TEXT("Mocha::getDescription"));
        return _beverage->getDescription() + ", Mocha";
      }
      double cost() const
      {
        HUM_TRACE(ACE_TEXT("Mocha::cost"));
        return 0.20 + _beverage->cost();
      }
    };

  } // namespace Observer
} // namespace HeadFirstDesignPatterns

#endif
