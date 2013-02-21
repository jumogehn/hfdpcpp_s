#ifndef	_HFDP_CPP_FLYWEIGHT_FOWLWEIGHT_REDHEAD_DUCK_HPP_
#define _HFDP_CPP_FLYWEIGHT_FOWLWEIGHT_REDHEAD_DUCK_HPP_

#include "FowlWeight.hpp"

namespace HeadFirstDesignPatterns {
  namespace FlyWeight {
    namespace FowlWeight {

      // ConcreteFlyweight

      class RedheadDuck : public Fowl {
        std::string _type;
        std::string _sound;
        std::string _swim;

      public:
        RedheadDuck() :
          _type( "Redhead Duck" ), _sound( "Quack" ), _swim( "swims" )
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
