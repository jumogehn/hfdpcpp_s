#ifndef	_HFDP_CPP_DECORATOR_MOCHA_HPP_
#define _HFDP_CPP_DECORATOR_MOCHA_HPP_

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
      }
      ~Mocha()
      {
        delete _beverage;
      }
      std::string getDescription() const
      {
        return _beverage->getDescription() + ", Mocha";
      }
      double cost() const
      {
        return 0.20 + _beverage->cost();
      }
    };

  } // namespace Observer
} // namespace HeadFirstDesignPatterns

#endif
