#ifndef	_HFDP_CPP_VISITOR_SALAD_HPP_
#define _HFDP_CPP_VISITOR_SALAD_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Salad : public IngredientDecorator {

        std::auto_ptr< Stock > _base;
        std::string _description;

      public:
        explicit Salad( std::string description, Ingredient* ingredient,
                        Stock* base) :
          _description( description ), _base( base ),
          IngredientDecorator( ingredient )
        {
          assert( base );
          HUM_TRACE(ACE_TEXT("Salad::Salad"));
        }
        void accept( Visitor* visitor )
        {
          assert( visitor );
          HUM_TRACE(ACE_TEXT("Salad::accept"));
          return visitor->visit( this );
        }
        float getCalories() const
        {
          HUM_TRACE(ACE_TEXT("Salad::getCalories"));
          return _ingredient->getCalories() + _base->getCalories();
        }
        float getCarbs() const
        {
          HUM_TRACE(ACE_TEXT("Salad::getCarbs"));
          return _ingredient->getCarbs() + _base->getCarbs();
        }
        float getProtien() const
        {
          HUM_TRACE(ACE_TEXT("Salad::getProtien"));
          return _ingredient->getProtien() + _base->getProtien();
        }
        float getFat() const
        {
          HUM_TRACE(ACE_TEXT("Salad::getFat"));
          return _ingredient->getFat() + _base->getFat();
        }
        float getCholesterol() const
        {
          HUM_TRACE(ACE_TEXT("Salad::getCholesterol"));
          return _ingredient->getCholesterol() + _base->getCholesterol();
        }
        float getSodium() const
        {
          HUM_TRACE(ACE_TEXT("Salad::getSodium"));
          return _ingredient->getSodium() + _base->getSodium();
        }
        bool isVegetarian() const
        {
          HUM_TRACE(ACE_TEXT("Salad::isVegetarian"));
          return _ingredient->isVegetarian();
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("Salad::toString"));
          return _description;
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
