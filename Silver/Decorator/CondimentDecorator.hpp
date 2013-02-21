#ifndef	_HFDP_CPP_DECORATOR_CONDIMENT_HPP_
#define _HFDP_CPP_DECORATOR_CONDIMENT_HPP_

#include "Starbuzz.hpp"

namespace HeadFirstDesignPatterns {
  namespace Decorator {

    class CondimentDecorator : public Beverage {

      CondimentDecorator( const CondimentDecorator& );
      void operator=( const CondimentDecorator& );

    protected:
      CondimentDecorator()
      {}
    public:
      virtual ~CondimentDecorator()
      {}
      virtual std::string getDescription() const = 0;
    };

  } // namespace Observer
} // namespace HeadFirstDesignPatterns

#endif
