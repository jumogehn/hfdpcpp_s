#ifndef	_HFDP_CPP_FLYWEIGHT_FOWLWEIGHT_FOWL_HPP_
#define _HFDP_CPP_FLYWEIGHT_FOWLWEIGHT_FOWL_HPP_

#include "FowlWeight.hpp"

namespace HeadFirstDesignPatterns {
  namespace FlyWeight {
    namespace FowlWeight {

      // Flyweight

      class Fowl {

      protected:
        Fowl()
        {}
      public:
        enum type{mallard, redhead, rubber, model, turkey, last};

        virtual ~Fowl()
        {}
        virtual void quack() const = 0;
        virtual void swim() const = 0;
        virtual std::string toString() const = 0;
      };

    } // namespace FowlWeight
  } // namespace FlyWeight
} // namespace HeadFirstDesignPatterns

#endif
