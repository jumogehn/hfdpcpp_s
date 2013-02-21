#ifndef	_HFDP_CPP_DECORATOR_WHIP_HPP_
#define _HFDP_CPP_DECORATOR_WHIP_HPP_

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
      }
      ~Whip() {
        delete _beverage;
      }
      std::string getDescription() const
      {
        return _beverage->getDescription() + ", Whip";
      }
      double cost() const
      {
        return 0.10 + _beverage->cost();
      }
    };

  } // namespace Observer
} // namespace HeadFirstDesignPatterns

#endif
