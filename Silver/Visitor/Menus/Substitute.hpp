#ifndef	_HFDP_CPP_VISITOR_SUBSTITUTE_HPP_
#define _HFDP_CPP_VISITOR_SUBSTITUTE_HPP_

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Substitute : public IngredientDecorator {

      public:
        explicit Substitute( Ingredient* ingredient) : IngredientDecorator( ingredient )
        {}
        void accept( Visitor* visitor )
        {
          return _ingredient->accept( visitor );;
        }
        float getCalories() const
        {
          return _ingredient->getCalories() / 2.0f;
        }
        float getCarbs() const
        {
          return _ingredient->getCarbs() / 2.0f;
        }
        float getProtien() const
        {
          return _ingredient->getProtien() / 2.0f;
        }
        float getFat() const
        {
          return  _ingredient->getFat() / 2.0f;
        }
        float getCholesterol() const
        {
          return _ingredient->getCholesterol() / 2.0f;
        }
        float getSodium() const
        {
          return _ingredient->getSodium() / 2.0f;
        }
        bool isVegetarian() const
        {
          return true;
        }
        std::string toString() const
        {
          std::string result( "Substitute" );
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
