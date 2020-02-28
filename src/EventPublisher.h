#ifndef EVENTPUBLISHER_H_
#define EVENTPUBLISHER_H_

#include "ISubject.h"
#include <vector>

class EventPublisher : public ISubject
{
public:
   EventPublisher();
   virtual ~EventPublisher();

   void attach(IObserver *observer);
   void detach(IObserver *observer);
   void notifyObservers();

   void setData(int data);

private:
   std::vector<IObserver*> _listObserver;
   int _data;
};

#endif /* EVENTPUBLISHER_H_ */
