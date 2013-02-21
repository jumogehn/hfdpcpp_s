#ifndef	_HFDP_CPP_BUILDER_EVENT_HPP_
#define _HFDP_CPP_BUILDER_EVENT_HPP_

namespace HeadFirstDesignPatterns {
  namespace Builder {

    class Event : public EventComponent {

      mutable std::vector< EventComponent* > _events;
      std::string _name;
      std::string _description;

    public:
      Event( const std::string name, const std::string description ) :
        _name( name ), _description( description )
      {}
      ~Event()
      {
        std::vector< EventComponent* >::iterator iterator = _events.begin();
        while( iterator != _events.end() ) {
          delete *( iterator  );
          iterator++;
        }
        _events.clear();
      }
      EventComponent* add( EventComponent* event )
      {
        _events.push_back( event );
        return event;
      }
      void remove( EventComponent* event )
      {
        std::remove( _events.begin(), _events.end(), event );
      }
      int getChildCount() const
      {
        return static_cast< int >( _events.size() );
      }
      EventComponent* getChild( int i ) const
      {
        return _events[i];
      }
      std::string getDescription() const
      {
        return _description;
      }
      std::string getName() const
      {
        return _name;
      }
      void print() const
      {
        std::cout << "  " << getName().c_str();
        std::cout << ", " << getDescription().c_str() << std::endl;

        std::vector< EventComponent* >::iterator iterator = _events.begin();
        while( iterator != _events.end() ) {
          EventComponent* event = *iterator++;
          event->print();
        }
      }
    };

  } // namespace Builder
} // namespace HeadFirstDesignPatterns

#endif
