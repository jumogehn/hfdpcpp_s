#ifndef	_HFDP_CPP_VISITOR_INGREDIENT_DECORATOR_HPP_
#define _HFDP_CPP_VISITOR_INGREDIENT_DECORATOR_HPP_

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class IngredientDecorator : public Ingredient{

        IngredientDecorator( const IngredientDecorator& );
        void operator=( const IngredientDecorator& );

      protected:
        std::auto_ptr< Ingredient > _ingredient;
        explicit IngredientDecorator( Ingredient* ingredient ) :
          _ingredient( ingredient )
        {
          assert( ingredient );
        }
      public:
        virtual ~IngredientDecorator()
        {}
      };
    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
