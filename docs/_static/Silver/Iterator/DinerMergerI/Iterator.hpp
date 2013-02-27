#ifndef	_HFDP_CPP_ITERATOR_DINER_MERGER_I_ITERATOR_HPP_
#define _HFDP_CPP_ITERATOR_DINER_MERGER_I_ITERATOR_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Iterator {
    namespace DinerMergerI {

      template <class T>
        class Iterator {
        public:
          virtual bool hasNext() const = 0;
          virtual T* next() const = 0;
          virtual ~Iterator()
          {
            HUM_TRACE(ACE_TEXT("Iterator::~Iterator"));
          }
        };

    } // namespace DinerMergerI
  } // namespace Iterator
} // namespace HeadFirstDesignPatterns

#endif
