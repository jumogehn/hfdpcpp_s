//===--- Pizza.hpp - --------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_PIZZA_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_PIZZA_HPP_

#include "Dough.hpp"
#include "Sauce.hpp"
#include "Veggies.hpp"
#include "Cheese.hpp"
#include "Pepperoni.hpp"
#include "Clams.hpp"
#include <memory>
#include <string>
#include <vector>

namespace HFDP {
  namespace Factory {
    namespace Abstract {

      class Pizza {

        std::string _name;

        Pizza( const Pizza& ); // Disable copy constructor
        void operator=( const Pizza& ); // Disable assignment operator

      protected:
        mutable std::unique_ptr< Dough > _dough;
        mutable std::unique_ptr< Sauce > _sauce;
        mutable std::vector< Veggies* > _veggies;
        mutable std::unique_ptr< Cheese > _cheese;
        mutable std::unique_ptr< Pepperoni > _pepperoni;
        mutable std::unique_ptr< Clams > _clam;

        Pizza();

      public:
        virtual void prepare() const = 0;

        virtual ~Pizza();
        virtual void bake() const;
        virtual void cut() const;
        virtual void box() const;
        void setName( std::string name);
        std::string getName() const;
        std::string toString() const;
      };

    } // namespace Abstract
  } // namespace Factory
} // namespace HFDP

#endif
