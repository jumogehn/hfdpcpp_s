#include "Handler.hpp"
#include "ComplaintHandler.hpp"
#include "Utilities.hpp"
#include <string>
#include <algorithm>


using namespace HFDP::ChainOfResponsibility::GumballEMailHandler;

ComplaintHandler::ComplaintHandler( const Handler* successor) :
  Handler( successor )
{
  PrintMessage("ComplaintHandler::ComplaintHandler");
}

void ComplaintHandler::handleRequest( std::string request ) const
{
  PrintMessage("ComplaintHandler::handleRequest");
  std::transform( request.begin(), request.end(), request.begin(),
                  tolower );

  if( canHandleRequest( request ) == true ) {
    Handler::canHandleRequest( request );
  } else {
    Handler::handleRequest( request );
  }
}

bool ComplaintHandler::canHandleRequest( const std::string& request ) const
{
  PrintMessage("ComplaintHandler::canHandleRequest");
  bool value = false;

  if( std::string::npos != request.find( "bruisin" ) ) {
    value = true;
  } else if( std::string::npos != request.find( "frosted" ) ) {
    value = true;
  } else if( std::string::npos != request.find( "no where" ) ) {
    value = true;
  } else if( std::string::npos != request.find( "rattle my cage" ) ) {
    value = true;
  } else if( std::string::npos != request.find( "tale nightingale" ) ) {
    value = true;
  }
  return value;
}

void ComplaintHandler::print() const
{
  PrintMessage("ComplaintHandler::print");
  PrintMessage("Hate mail, send to Legal:");
  Handler::print();
}

