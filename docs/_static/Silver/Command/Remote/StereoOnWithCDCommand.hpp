#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_STEREO_ON_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_STEREO_ON_COMMAND_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Remote.hpp"

namespace HeadFirstDesignPatterns {
  namespace Command {
    namespace Remote {

      class StereoOnWithCDCommand : public Command {

        const Stereo* _stereo;

      public:
        explicit StereoOnWithCDCommand( const Stereo* stereo ) :
          _stereo( stereo )
        {
          assert( stereo );
          HUM_TRACE(ACE_TEXT("StereoOnWithCDCommand::StereoOnWithCDCommand"));
        }
        void execute() const
        {
          HUM_TRACE(ACE_TEXT("StereoOnWithCDCommand::execute"));

          _stereo->on();
          _stereo->setCD();
          _stereo->setVolume(11);
        }
      };

    } // namespace Remote
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
