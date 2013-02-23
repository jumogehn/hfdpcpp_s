#ifndef	_HFDP_CPP_INTERPRETER_MINI_DUCK_SIMULATOR_WHILE_COMMAND_HPP_
#define _HFDP_CPP_INTERPRETER_MINI_DUCK_SIMULATOR_WHILE_COMMAND_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
  namespace Interpreter {
    namespace MiniDuckSimulator {

      class WhileCommand : public Expression {

        std::auto_ptr< Variable > _variable;
        std::vector< std::string > _expression;

        ~WhileCommand()
        {} // disable inheritance

      public:
        WhileCommand(Variable* variable, std::vector< std::string >& expression)
          : _variable( variable ), _expression( expression )
        {
          assert( variable );
        }
        void accept( Visitor* visitor )
        {
          assert( visitor );
          visitor->interpret( this );
        }
        bool evaluate()
        {
          bool value = _variable->evaluate();
          return value;
        }
        std::string variable()
        {
          return _variable->name();
        }
        std::vector< std::string >& expression()
        {
          return _expression;
        }
      };

    } // namespace MiniDuckSimulator
  } // namespace Interpreter
} // namespace HeadFirstDesignPatterns

#endif
