#ifndef ISUBJECT_H_
#define ISUBJECT_H_

#include "IObserver.h"

class ISubject {
public:
   ISubject(){};
   virtual ~ISubject(){};

   virtual void attach(IObserver *observer)   = 0;
   virtual void detach(IObserver *observer)   = 0;
   virtual void notifyObservers()             = 0;
};

#endif /* ISUBJECT_H_ */
