#ifndef	_HFDP_CPP_DECORATOR_MILK_HPP_
#define _HFDP_CPP_DECORATOR_MILK_HPP_

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
      }
      ~Milk()
      {
        delete _beverage;
      }
      std::string getDescription() const
      {
        return _beverage->getDescription() + ", Milk";
      }
      double cost() const
      {
        return 0.10 + _beverage->cost();
      }
    };

  } // namespace Observer
} // namespace HeadFirstDesignPatterns

#endif
