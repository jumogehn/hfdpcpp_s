#ifndef	_HFDP_CPP_VISITOR_SCRAMBLED_HPP_
#define _HFDP_CPP_VISITOR_SCRABLED_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Scrambled : public IngredientDecorator {

        std::auto_ptr< Ingredient > _fat;

      public:
        explicit Scrambled( Ingredient* ingredient, Ingredient* fat ) :
          _fat( fat ), IngredientDecorator( ingredient )
        {
          assert( ingredient ); assert( fat );
          HUM_TRACE(ACE_TEXT("Scrambled::Scrambled"));
        }
        void accept( Visitor* visitor )
        {
          assert( visitor );
          HUM_TRACE(ACE_TEXT("Scrambled::accept"));
          return _ingredient->accept( visitor );
        }
        float getCalories() const
        {
          HUM_TRACE(ACE_TEXT("Scrambled::getCalories"));
          return _ingredient->getCalories() + _fat->getCalories();
        }
        float getCarbs() const
        {
          HUM_TRACE(ACE_TEXT("Scrambled::getCarbs"));
          return _ingredient->getCarbs() + _fat->getCarbs();
        }
        float getProtien() const
        {
          HUM_TRACE(ACE_TEXT("Scrambled::getProtien"));
          return _ingredient->getProtien() + _fat->getProtien();
        }
        float getFat() const
        {
          HUM_TRACE(ACE_TEXT("Scrambled::getFat"));
          return _ingredient->getFat() + _fat->getFat();
        }
        float getCholesterol() const
        {
          HUM_TRACE(ACE_TEXT("Scrambled::getCholesterol"));
          return _ingredient->getCholesterol() + _fat->getCholesterol();
        }
        float getSodium() const
        {
          HUM_TRACE(ACE_TEXT("Scrambled::getSodium"));
          return _ingredient->getSodium() + _fat->getSodium();
        }
        bool isVegetarian() const
        {
          HUM_TRACE(ACE_TEXT("Scrambled::isVegetarian"));
          return _ingredient->isVegetarian(); // no effect
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("Scrambled::toString"));
          std::string result( "Scrambled" );
          result.append( "(" );
          result.append( _ingredient->toString() );
          result.append( ")" );
          return result;
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
