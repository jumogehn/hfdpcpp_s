//===--- StereoOnWithCDCommand.hpp - ----------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_STEREO_ON_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_STEREO_ON_COMMAND_HPP_

#include "Command.hpp"
#include "Stereo.hpp"

namespace HFDP {
  namespace Command {
    namespace Remote {

      class StereoOnWithCDCommand : public Command {

        const Stereo* _stereo;

      public:
        explicit StereoOnWithCDCommand( const Stereo* stereo );
        void execute() const;
      };

    } // namespace Remote
  } // namespace Command
} // namespace HFDP

#endif
