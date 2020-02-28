#ifndef MOBILEAPPOBSERVER_H_
#define MOBILEAPPOBSERVER_H_

#include "IObserver.h"

class EventPublisher;

class MobileAppObserver : public IObserver
{
public:
   MobileAppObserver(EventPublisher* subject);
   virtual ~MobileAppObserver();

   void update(const int data);

private:
   EventPublisher* _subject;
};

#endif /* MOBILEAPPOBSERVER_H_ */
