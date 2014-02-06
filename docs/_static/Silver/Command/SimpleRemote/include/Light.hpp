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

#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_LIGHT_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_LIGHT_HPP_

namespace HFDP {
  namespace Command {
    namespace SimpleRemote {

      class Light {

      public:
        Light();
        void on() const;
        void off() const;
      };

    } // namespace SimpleRemote
  } // namespace Command
} // namespace HFDP

#endif
