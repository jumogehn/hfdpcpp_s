//===--- Ingredient.hpp - ---------------------------------------*- C++ -*-===//
//
//                     Head First Design Patterns
//
//
//===----------------------------------------------------------------------===//
///
/// \file
/// \brief
///
//===----------------------------------------------------------------------===//


#ifndef	_HFDP_CPP_VISITOR_INGREDIENT_HPP_
#define _HFDP_CPP_VISITOR_INGREDIENT_HPP_

#include <string>
#include <vector>
#include <list>

namespace HFDP {
  namespace Visitor {
    namespace Menus {

      class Visitor;

      class MenuComponent {

        MenuComponent( const MenuComponent& ); // Disable copy constructor
        void operator=( const MenuComponent& ); // Disable assignment operator

      public:
        MenuComponent();
        virtual ~MenuComponent();
        virtual void accept( Visitor* visitor ) = 0;
        virtual void add( MenuComponent* menuComponent );
        virtual float getHealthRating() const  = 0;
        virtual std::string toString() const = 0;
        virtual bool isVegetarian() const = 0;
      };

      class Ingredient : public MenuComponent {

      protected:
        float _amount;

        Ingredient( float amount = 1.0f );
      public:
        virtual ~Ingredient();
        virtual void add( MenuComponent* menuComponent );
        virtual void accept( Visitor* visitor ) = 0;
        virtual bool isVegetarian() const = 0;
        virtual float getCalories() const = 0;
        virtual float getCarbs() const = 0;
        virtual float getCholesterol() const = 0;
        virtual float getFat() const = 0;
        virtual float getProtien() const = 0;
        virtual float getSodium() const = 0;
        virtual float getHealthRating() const;
        virtual std::string toString() const = 0;
      };

      class Menu : public MenuComponent {

        std::string _name;
        std::string _description;
        mutable std::vector< MenuComponent* > _menuComponents;

      public:
        explicit Menu( const std::string name, const std::string description );
        void accept( Visitor* visitor );
        float getHealthRating() const;
        void add( MenuComponent* menuComponent );
        bool isVegetarian() const;
        std::string toString() const;
      };

      class MenuItem : public MenuComponent {

        std::string _name;
        std::string _description;
        double _price;

      protected:
        mutable std::list< Ingredient* > _ingredients;

      public:
        MenuItem( const std::string name, const std::string description,
                  double price );
        void accept( Visitor* visitor );
        void add( Ingredient* ingredient );
        double getPrice() const;
        float getHealthRating() const;

        bool isVegetarian() const;
        std::string toString() const;
      };

    } // namespace Menus
  } // namespace Vistor
} // namespace HFDP

#endif
