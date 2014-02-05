//===--- CeilingFan.hpp - ---------------------------------------*- C++ -*-===//
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

#ifndef	_HFDP_CPP_COMMAND_REMOTE_CEILING_FAN_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_CEILING_FAN_HPP_

#include <string>

namespace HFDP {
  namespace Command {
    namespace Remote {

      class CeilingFan {

        mutable int _level;
        std::string _location;

      public:
        static const int HIGH = 2;
        static const int MEDIUM = 1;
        static const int LOW = 0;

        explicit CeilingFan( const std::string location );
        void high() const;
        void medium() const;
        void low() const;
        void off() const;
        int getSpeed() const;
      };

    } // namespace Remote
  } // namespace Command
} // namespace HFDP

#endif
