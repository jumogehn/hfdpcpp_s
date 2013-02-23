#ifndef	_HFDP_CPP_FLYWEIGHT_FOWLWEIGHT_RUBBER_DUCK_HPP_
#define _HFDP_CPP_FLYWEIGHT_FOWLWEIGHT_RUBBER_DUCK_HPP_

#include "FowlWeight.hpp"

namespace HeadFirstDesignPatterns {
  namespace FlyWeight {
    namespace FowlWeight {

      // ConcreteFlyweight

      class RubberDuck : public Fowl {

        std::string _type;
        std::string _sound;
        std::string _swim;

      public:
        RubberDuck() :
          _type( "Rubber Duck" ), _sound( "Squeak" ), _swim( "floats" )
        {}
        void quack() const
        {
          std::cout << _sound.c_str();
        }
        void swim() const
        {
          std::cout << _swim.c_str();
        }
        std::string toString() const
        {
          return _type.c_str();
        }
      };

    } // namespace FowlWeight
  } // namespace FlyWeight
} // namespace HeadFirstDesignPatterns

#endif
