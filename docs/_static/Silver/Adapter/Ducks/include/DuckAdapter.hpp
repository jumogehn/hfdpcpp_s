//===--- DuckAdapter.hpp - --------------------------------------*- C++ -*-===//
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

#ifndef	_HFDP_CPP_ADAPTERMyDuck_ADAPTER_HPP_
#define _HFDP_CPP_ADAPTERMyDuck_ADAPTER_HPP_

#include "Duck.hpp"
#include "Turkey.hpp"
#include "DuckAdapter.hpp"
#include <memory>

namespace HFDP {
  namespace Adapter {
    namespace Ducks {

      class DuckAdapter : public Turkey {

        const Duck *MyDuck;
        int _random;

        DuckAdapter( const DuckAdapter& ); // Disable copy constructor
        void operator=( const DuckAdapter& ); // Disable assignment operator

      public:
        explicit DuckAdapter( const Duck* duck );
        void fly() const;
        void gobble() const;
      };
    } // namespace Ducks
  } // namespace Adapter
} // namespace HFDP

#endif
