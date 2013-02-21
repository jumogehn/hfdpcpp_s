#ifndef	_HFDP_CPP_FLYWEIGHT_FOWLWEIGHT_BIRD_HPP_
#define _HFDP_CPP_FLYWEIGHT_FOWLWEIGHT_BIRD_HPP_

#include "FowlWeight.hpp"

namespace HeadFirstDesignPatterns {
  namespace FlyWeight {
    namespace FowlWeight {

      // Unshared ConcreteFlyweight

      class Bird : public Fowl {

        const Fowl* _fowl;
        int _number;
        double _weight;

        Bird( const Bird& ); // Disable copy constructor
        void operator=( const Bird& ); // Disable assignment operator

      public:
        Bird( const Fowl* fowl, int number = 0, double weight = 0.0 ) :
          _fowl( fowl ), _number( number ), _weight( weight )
        {
          assert( fowl );
        }
        void quack() const
        {
          assert( _fowl );
          _fowl->quack();
        }
        void swim() const
        {
          assert( _fowl );
          _fowl->swim();
        }
        double getWeight() const
        {
          return _weight;
        }
        double getNumber() const
        {
          return _number;
        }
        std::string toString() const
        {
          assert( _fowl );
          std::stringstream value;
          value << "Bird #"<< _number + 1 << ", ";
          value << "weighs " << _weight << " pounds, ";
          value << "is a " << _fowl->toString();
          return value.str();
        }
      };

    } // namespace FowlWeight
  } // namespace FlyWeight
} // namespace HeadFirstDesignPatterns

#endif
