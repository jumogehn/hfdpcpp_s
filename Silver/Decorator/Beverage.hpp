#ifndef	_HFDP_CPP_DECORATOR_BEVERAGE_HPP_
#define _HFDP_CPP_DECORATOR_BEVERAGE_HPP_

#include "Starbuzz.hpp"

namespace HeadFirstDesignPatterns {
  namespace Decorator {

    class Beverage {

    protected:
      std::string _description;

      Beverage() :
        _description( "Unknown Beverage" )
      {}
    public:
      virtual ~Beverage()
      {}
      virtual std::string getDescription() const
      {
        return _description;
      }
      virtual double cost() const = 0;
    };

  } // namespace Observer
} // namespace HeadFirstDesignPatterns

#endif
