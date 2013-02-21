#ifndef	_HFDP_CPP_VISITOR_STEAMED_HPP_
#define _HFDP_CPP_VISITOR_STEAMED_HPP_

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Steamed : public IngredientDecorator {

      public:
        explicit Steamed( Ingredient* ingredient) : IngredientDecorator( ingredient )
        {}
        void accept( Visitor* visitor )
        {
          assert( visitor );
          return _ingredient->accept( visitor );;
        }
        float getCalories() const
        {
          return _ingredient->getCalories(); // no change
        }
        float getCarbs() const
        {
          return _ingredient->getCarbs(); // no change
        }
        float getProtien() const
        {
          return _ingredient->getProtien(); // no change
        }
        float getFat() const
        {
          return _ingredient->getFat(); // no change
        }
        float getCholesterol() const
        {
          return _ingredient->getCholesterol(); // no change
        }
        float getSodium() const
        {
          return _ingredient->getSodium(); // no change
        }
        bool isVegetarian() const
        {
          return _ingredient->isVegetarian(); // no change
        }
        std::string toString() const
        {
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
