#include "FanHandler.hpp"
#include "Handler.hpp"
#include "Utilities.hpp"
#include <string>
#include <algorithm>


using namespace HFDP::ChainOfResponsibility::GumballEMailHandler;

FanHandler::FanHandler( const Handler* successor ) :
  Handler( successor )
{
  PrintMessage("FanHandler::FanHandler");
}

void FanHandler::handleRequest( std::string request ) const
{
  PrintMessage("FanHandler::handleRequest");
  std::transform( request.begin(), request.end(), request.begin(),
                  tolower );

  if( canHandleRequest( request ) == true ) {
    Handler::canHandleRequest( request );
  } else {
    Handler::handleRequest( request );
  }
}

bool FanHandler::canHandleRequest( const std::string& request ) const
{
  PrintMessage("FanHandler::canHandleRequest");
  bool value = false;

  if( std::string::npos != request.find( "razz" ) ) {
    value = true;
  } else if( std::string::npos != request.find( "hip" ) ) {
    value = true;
  } else if( std::string::npos != request.find( "radioactive" ) ) {
    value = true;
  } else if( std::string::npos != request.find( "blast" ) ) {
    value = true;
  } else if( std::string::npos != request.find( "boss" ) ) {
    value = true;
  } else if( std::string::npos != request.find( "orbit" ) ) {
    value = true;
  } else if( std::string::npos != request.find( "kick" ) ) {
    value = true;
  }
  return value;
}

void FanHandler::print() const
{
  PrintMessage("FanHandler::print");
  PrintMessage("Fan mail, send to CEO:");
  Handler::print();
}

