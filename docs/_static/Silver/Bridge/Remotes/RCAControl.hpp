#ifndef	_HFDP_CPP_BRIDGE_RCA_CONTROL_HPP_
#define _HFDP_CPP_BRIDGE_RCA_CONTROL_HPP_

#include "Remotes.hpp"

namespace HeadFirstDesignPatterns {
  namespace Bridge {
    namespace Remotes {

      class RCAControl : public RemoteControl {

        unsigned int _currentStation;

      public:
        explicit RCAControl( const std::string& location ) :
          _currentStation( 0 )
        {
          _implementor = new RCA( location );
        }
        void setStation( unsigned int channel )
        {
          _currentStation = channel;
          setChannel( _currentStation );
        }
        void nextChannel()
        {
          _currentStation++;
          setChannel( _currentStation );
        }
        void previousChannel()
        {
          _currentStation--;
          setChannel( _currentStation );
        }
      };

    } // namespace Remotes
  } // namespace Bridge
} // namespace HeadFirstDesignPatterns

#endif
