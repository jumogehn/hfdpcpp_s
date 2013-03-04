#ifndef	_HFDP_CPP_VISITOR_STEAMED_HPP_
#define _HFDP_CPP_VISITOR_STEAMED_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Steamed : public IngredientDecorator {

      public:
        explicit Steamed( Ingredient* ingredient)
          : IngredientDecorator( ingredient )
        {
          HUM_TRACE(ACE_TEXT("Steamed::Steamed"));
        }
        void accept( Visitor* visitor )
        {
          assert( visitor );
          HUM_TRACE(ACE_TEXT("Steamed::accept"));
          return _ingredient->accept( visitor );;
        }
        float getCalories() const
        {
          HUM_TRACE(ACE_TEXT("Steamed::getCalories"));
          return _ingredient->getCalories(); // no change
        }
        float getCarbs() const
        {
          HUM_TRACE(ACE_TEXT("Steamed::getCarbs"));
          return _ingredient->getCarbs(); // no change
        }
        float getProtien() const
        {
          HUM_TRACE(ACE_TEXT("Steamed::getProtien"));
          return _ingredient->getProtien(); // no change
        }
        float getFat() const
        {
          HUM_TRACE(ACE_TEXT("Steamed::getFat"));
          return _ingredient->getFat(); // no change
        }
        float getCholesterol() const
        {
          HUM_TRACE(ACE_TEXT("Steamed::getCholesterol"));
          return _ingredient->getCholesterol(); // no change
        }
        float getSodium() const
        {
          HUM_TRACE(ACE_TEXT("Steamed::getSodium"));
          return _ingredient->getSodium(); // no change
        }
        bool isVegetarian() const
        {
          HUM_TRACE(ACE_TEXT("Steamed::isVegetarian"));
          return _ingredient->isVegetarian(); // no change
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("Steamed::toString"));
          std::string result( "Steamed" );
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
