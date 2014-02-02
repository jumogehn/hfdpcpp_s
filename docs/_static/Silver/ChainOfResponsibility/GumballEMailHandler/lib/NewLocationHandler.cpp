#include "Handler.hpp"
#include "NewLocationHandler.hpp"
#include "Utilities.hpp"
#include <string>
#include <algorithm>


using namespace HFDP::ChainOfResponsibility::GumballEMailHandler;

NewLocationHandler::NewLocationHandler( const Handler* successor ) :
  Handler( successor )
{
  PrintMessage("NewLocationHandler::NewLocationHandler");
}

void NewLocationHandler::handleRequest( std::string request ) const
{
  PrintMessage("NewLocationHandler::handleRequest");
  std::transform( request.begin(), request.end(), request.begin(),
                  tolower );

  if( canHandleRequest( request ) == true ) {
    Handler::canHandleRequest( request );
  } else {
    Handler::handleRequest( request );
  }
}

bool NewLocationHandler::canHandleRequest( const std::string& request ) const
{
  PrintMessage("NewLocationHandler::canHandleRequest");
  bool value = false;
  if( std::string::npos != request.find( "store" ) ) {
    value = true;
  }
  return value;
}

void NewLocationHandler::print() const
{
  PrintMessage("NewLocationHandler::print");
  PrintMessage("Request mail, send to Business Development:");
  Handler::print();
}


