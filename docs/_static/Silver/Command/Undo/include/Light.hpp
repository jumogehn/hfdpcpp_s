//===--- Light.hpp - --------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_UNDO_LIGHT_HPP_
#define _HFDP_CPP_COMMAND_UNDO_LIGHT_HPP_

#include <string>

namespace HFDP {
  namespace Command {
    namespace Undo {

      class Light {

        std::string _location;
        mutable int _level;

      public:
        explicit Light( const std::string location );
        void on() const;
        void off() const;
        void dim( int level ) const;
        int getLevel() const;
      };

    } // namespace Undo
  } // namespace Command
} // namespace HFDP

#endif
