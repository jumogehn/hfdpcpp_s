#ifndef	_HFDP_CPP_VISITOR_SOUP_HPP_
#define _HFDP_CPP_VISITOR_SOUP_HPP_

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Soup : public IngredientDecorator {

        std::auto_ptr< Stock > _base;
        std::string _description;

      public:
        explicit Soup( std::string description, Ingredient* ingredient,
                       Stock* base) :
          _description( description), _base( base ),
          IngredientDecorator( ingredient )
        {
          assert( base );
        }
        void accept( Visitor* visitor )
        {
          assert( visitor );
          return visitor->visit( this );
        }
        float getCalories() const
        {
          return _ingredient->getCalories() + _base->getCalories();
        }
        float getCarbs() const
        {
          return _ingredient->getCarbs() + _base->getCarbs();
        }
        float getProtien() const
        {
          return _ingredient->getProtien() + _base->getProtien();
        }
        float getFat() const
        {
          return _ingredient->getFat() + _base->getFat();
        }
        float getCholesterol() const
        {
          return _ingredient->getCholesterol() + _base->getCholesterol();
        }
        float getSodium() const
        {
          return _ingredient->getSodium() + _base->getSodium();
        }
        bool isVegetarian() const
        {
          return _ingredient->isVegetarian();
        }
        std::string toString() const
        {
          return _description;
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
