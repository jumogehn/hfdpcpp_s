#ifndef	_HFDP_CPP_DECORATOR_SOY_HPP_
#define _HFDP_CPP_DECORATOR_SOY_HPP_

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
      }
      ~Soy()
      {
        delete _beverage;
      }
      std::string getDescription() const
      {
        return _beverage->getDescription() + ", Soy";
      }
      double cost() const
      {
        return 0.15 + _beverage->cost();
      }
    };

  } // namespace Observer
} // namespace HeadFirstDesignPatterns

#endif
