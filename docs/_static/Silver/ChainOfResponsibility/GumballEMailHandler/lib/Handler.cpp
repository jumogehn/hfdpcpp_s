#include "Handler.hpp"
#include "Utilities.hpp"
#include <string>
#include <list>


using namespace HFDP::ChainOfResponsibility::GumballEMailHandler;

Handler::Handler( const std::shared_ptr<Handler> successor ) :
  _successor( successor )
{
  PrintMessage("Handler::Handler");
}
bool Handler::store( const std::string& request ) const
{
  PrintMessage("Handler::canHandleRequest");
  _requests.push_back( request );
  return true;
}

Handler::~Handler()
{
  PrintMessage("Handler::~Handler");
}

void Handler::handleRequest( std::string request ) const
{
  PrintMessage("Handler::handleRequest");
  if( _successor ) {
    _successor->handleRequest( request );
  }
}

void Handler::print() const
{
  PrintMessage("Handler::print");
  PrintMessage(" count=", false);
  PrintMessage(_requests.size());
  for (auto &var : _requests) {
    PrintMessage(" - ", false);
    PrintMessage(var.c_str());
  }
  if( _successor ) {
    _successor->print();
  }
}


