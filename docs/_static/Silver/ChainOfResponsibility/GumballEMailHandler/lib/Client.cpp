#include "Client.hpp"
#include "LastHandler.hpp"
#include "NewLocationHandler.hpp"
#include "ComplaintHandler.hpp"
#include "FanHandler.hpp"
#include "SpamHandler.hpp"
#include "Utilities.hpp"
#include <memory>

using namespace HFDP::ChainOfResponsibility::GumballEMailHandler;

Client::Client() :
  _lastHandler( std::make_shared<LastHandler>()),
  _newHandler( std::make_shared<NewLocationHandler>(_lastHandler)),
  _hateHandler( std::make_shared<ComplaintHandler>(_newHandler)),
  _fanHandler( std::make_shared<FanHandler>(_hateHandler)),
  _spamHandler( std::make_shared<SpamHandler>(_fanHandler))
{
  PrintMessage("Client::Client");
}

void Client::handleRequest( std::string request ) const
{
  PrintMessage("Client::handleRequest");
  _spamHandler->handleRequest( request );
}

void Client::print() const
{
  PrintMessage("Client::print");
  _spamHandler->print();
}

