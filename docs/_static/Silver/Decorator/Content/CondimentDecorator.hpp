#ifndef	_HFDP_CPP_DECORATOR_CONDIMENT_HPP_
#define _HFDP_CPP_DECORATOR_CONDIMENT_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Starbuzz.hpp"

namespace HeadFirstDesignPatterns {
  namespace Decorator {

    class CondimentDecorator : public Beverage {

      CondimentDecorator( const CondimentDecorator& );
      void operator=( const CondimentDecorator& );

    protected:
      CondimentDecorator()
      {
        HUM_TRACE(ACE_TEXT("CondimentDecorator::CondimentDecorator"));
      }
    public:
      virtual ~CondimentDecorator()
      {
        HUM_TRACE(ACE_TEXT("CondimentDecorator::~CondimentDecorator"));
      }
      virtual std::string getDescription() const = 0;
    };

  } // namespace Observer
} // namespace HeadFirstDesignPatterns

#endif
