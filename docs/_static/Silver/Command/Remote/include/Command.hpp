//===--- Command.hpp - ------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_REMOTE_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_COMMAND_HPP_


namespace HFDP {
  namespace Command {
    namespace Remote {

      class Command {

        Command( const Command& ); // Disable copy constructor
        void operator=( const Command& ); // Disable assignment operator

      protected:
        Command();
      public:
        virtual ~Command();
        virtual void execute() const = 0;
      };

    } // namespace Remote
  } // namespace Command
} // namespace HFDP

#endif
