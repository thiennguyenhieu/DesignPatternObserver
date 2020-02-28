#ifndef WEBAPPOBSERVER_H_
#define WEBAPPOBSERVER_H_

#include "IObserver.h"

class EventPublisher;

class WebAppObserver: public IObserver
{
public:
   WebAppObserver(EventPublisher* subject);
   virtual ~WebAppObserver();

   void update(const int data);

private:
   EventPublisher* _subject;
};

#endif /* WEBAPPOBSERVER_H_ */
