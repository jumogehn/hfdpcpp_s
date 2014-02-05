//===--- Stereo.hpp - -------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_REMOTE_STEREO_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_STEREO_HPP_

#include <string>

namespace HFDP {
  namespace Command {
    namespace Remote {

      class Stereo {

        std::string _location;

      public:
        explicit Stereo( std::string location );
        void on() const;
        void off() const;
        void setCD() const;
        void setDVD() const;
        void setRadio() const;
        void setVolume(int volume) const;
      };

    } // namespace Remote
  } // namespace Command
} // namespace HFDP

#endif
