//===--- LivingroomLightOnCommand.hpp - -------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_LIVINGROOM_LIGHT_ON_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_LIVINGROOM_LIGHT_ON_COMMAND_HPP_

#include "Command.hpp"
#include "Light.hpp"


namespace HFDP {
  namespace Command {
    namespace Remote {

      class LivingroomLightOnCommand : public Command {

        const Light* _light;

      public:
        explicit LivingroomLightOnCommand( const Light* light );
        void execute() const;
      };

    } // namespace Remote
  } // namespace Command
} // namespace HFDP

#endif
