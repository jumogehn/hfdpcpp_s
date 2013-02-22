#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_STEREO_OFF_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_STEREO_OFF_COMMAND_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Remote.hpp"

namespace HeadFirstDesignPatterns {
  namespace Command {
    namespace Remote {

      class StereoOffCommand : public Command {

        const Stereo* _stereo;

      public:
        explicit StereoOffCommand( const Stereo* stereo ) :
          _stereo( stereo )
        {
          HUM_TRACE(ACE_TEXT("StereoOffCommand::StereoOffCommand"));
          assert( stereo );
        }
        void execute() const
        {
          HUM_TRACE(ACE_TEXT("StereoOffCommand::execute"));
          _stereo->off();
        }
      };

    } // namespace Remote
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
