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


#ifndef	_HFDP_CPP_FACTORY_METHOD_PIZZA_HPP_
#define _HFDP_CPP_FACTORY_METHOD_PIZZA_HPP_

#include <string>
#include <list>

namespace HFDP {
  namespace Factory {
    namespace Method {

      class Pizza {

      protected:
        std::string _name;
        std::string _dough;
        std::string _sauce;
        mutable std::list< std::string > _toppings;
        Pizza();

      private:
        Pizza( const Pizza& ); // Disable copy constructor
        void operator=( const Pizza& ); // Disable assignment operator

      public:
        virtual ~Pizza();
        virtual void prepare() const;
        virtual void bake() const;
        virtual void cut() const;
        virtual void box() const;
        std::string getName() const;
        std::string toString() const;
      };

    } // namespace Method
  } // namespace Factory
} // namespace HFDP

#endif
