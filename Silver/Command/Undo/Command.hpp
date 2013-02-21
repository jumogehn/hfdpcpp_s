#ifndef	_HFDP_CPP_COMMAND_UNDO_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_UNDO_COMMAND_HPP_

#include "Undo.hpp"

namespace HeadFirstDesignPatterns {
  namespace Command {
    namespace Undo {

      class Command {

      public:
        virtual ~Command()
        {}
        virtual void execute() const = 0;
        virtual void undo() const = 0;
      };

    } // namespace Undo
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
