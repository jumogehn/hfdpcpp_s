#include "Handler.hpp"
#include "SpamHandler.hpp"
#include "Utilities.hpp"
#include <string>
#include <algorithm>


using namespace HFDP::ChainOfResponsibility::GumballEMailHandler;

SpamHandler::SpamHandler( const Handler* successor ) :
  Handler( successor )
{
  PrintMessage("SpamHandler::SpamHandler");
}

void SpamHandler::handleRequest( std::string request ) const
{
  PrintMessage("SpamHandler::handleRequest");
  std::transform( request.begin(), request.end(), request.begin(),
                  tolower );

  if( canHandleRequest( request ) == true ) {
    Handler::canHandleRequest( request );
  } else {
    Handler::handleRequest( request );
  }
}

bool SpamHandler::canHandleRequest( const std::string& request ) const
{
  PrintMessage("SpamHandler::canHandleRequest");
  bool value = false;

  if( std::string::npos != request.find( "bread" ) ) {
    value = true;
  } else if( std::string::npos != request.find( "buzzin" ) ) {
    value = true;
  } else if( std::string::npos != request.find( "cuzzin" ) ) {
    value = true;
  } else if( std::string::npos != request.find( "eyeball" ) ) {
    value = true;
  }
  return value;
}

void SpamHandler::print() const
{
  PrintMessage("SpamHandler::print");
  PrintMessage("Spam mail, send to shredder:");
  Handler::print();
}

