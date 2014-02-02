//===--- TurkeyAdapter.hpp - ------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_ADAPTERMyTurkey_ADAPTER_HPP_
#define _HFDP_CPP_ADAPTERMyTurkey_ADAPTER_HPP_

#include "Duck.hpp"
#include "Turkey.hpp"

namespace HFDP {
  namespace Adapter {
    namespace Ducks {

      class TurkeyAdapter : public Duck {

        const Turkey *MyTurkey;

        TurkeyAdapter( const TurkeyAdapter& ); // Disable copy constructor
        void operator=( const TurkeyAdapter& ); // Disable assignment operator

      public:
        explicit TurkeyAdapter( const Turkey* turkey );
        void fly() const;
        void quack() const;
      };

    } // namespace Ducks
  } // namespace Adapter
} // namespace HFDP

#endif
