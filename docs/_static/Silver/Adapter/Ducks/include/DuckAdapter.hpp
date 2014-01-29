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

#ifndef	_HFDP_CPP_ADAPTER_DUCK_ADAPTER_HPP_
#define _HFDP_CPP_ADAPTER_DUCK_ADAPTER_HPP_

#include "Duck.hpp"
#include "Turkey.hpp"
#include "DuckAdapter.hpp"
#include <memory>

namespace HeadFirstDesignPatterns {
  namespace Adapter {
    namespace Ducks {

      class DuckAdapter : public Turkey {

        std::auto_ptr< const Duck > _duck;
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
} // namespace HeadFirstDesignPatterns

#endif
