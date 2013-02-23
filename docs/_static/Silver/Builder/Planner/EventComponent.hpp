#ifndef	_HFDP_CPP_BUILDER_EVENT_COMPONENT_HPP_
#define _HFDP_CPP_BUILDER_EVENT_COMPONENT_HPP_

namespace HeadFirstDesignPatterns {
  namespace Builder {

    class EventComponent {

      EventComponent( const EventComponent& ); // Disable copy constructor
      void operator=( const EventComponent& ); // Disable assignment operator

    public:
      EventComponent()
      {}
      virtual ~EventComponent()
      {}
      virtual EventComponent* add( EventComponent* event )
      {
        throw new UnsupportedOperationException();
      }
      virtual void remove( EventComponent* event )
      {
        throw new UnsupportedOperationException();
      }
      virtual const EventComponent* getChild( int i ) const
      {
        throw new UnsupportedOperationException();
      }
      virtual std::string getName() const
      {
        throw new UnsupportedOperationException();
      }
      virtual std::string getDescription() const
      {
        throw new UnsupportedOperationException();
      }
      virtual double getPrice() const
      {
        throw new UnsupportedOperationException();
      }
      virtual void print() const
      {
        throw new UnsupportedOperationException();
      }
    };

  } // namespace Builder
} // namespace HeadFirstDesignPatterns

#endif
