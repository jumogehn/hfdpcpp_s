//===--- TV.hpp - -----------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_REMOTE_TV_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_TV_HPP_

#include <string>

namespace HFDP {
  namespace Command {
    namespace Remote {

      class TV {

        mutable int _channel;
        std::string _location;

      public:
        explicit TV( const std::string location );
        void on() const;
        void off() const;
        void setInputChannel();
      };

    } // namespace Remote
  } // namespace Command
} // namespace HFDP

#endif
