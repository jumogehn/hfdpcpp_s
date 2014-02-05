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


#ifndef	_HFDP_CPP_COMMAND_REMOTE_LIGHT_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_LIGHT_HPP_

#include <string>

namespace HFDP {
  namespace Command {
    namespace Remote {

      class Light {

        std::string _location;

      public:
        explicit Light( const std::string location);
        void on() const;
        void off() const;
      };

    } // namespace Remote
  } // namespace Command
} // namespace HFDP

#endif
