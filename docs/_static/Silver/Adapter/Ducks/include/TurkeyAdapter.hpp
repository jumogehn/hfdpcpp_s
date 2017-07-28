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
#include <memory>

namespace HFDP {
  namespace Adapter {
    namespace Ducks {

      class TurkeyAdapter : public Duck {

        const std::shared_ptr<Turkey> MyTurkey;

        TurkeyAdapter( const TurkeyAdapter& ); // Disable copy constructor
        void operator=( const TurkeyAdapter& ); // Disable assignment operator

      public:
        explicit TurkeyAdapter( const std::shared_ptr<Turkey> turkey );
        void fly() const;
        void quack() const;
      };

    } // namespace Ducks
  } // namespace Adapter
} // namespace HFDP

#endif
