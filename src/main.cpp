#include "EventPublisher.h"
#include "MobileAppObserver.h"
#include "WebAppObserver.h"

int main()
{
   EventPublisher *subject    = new EventPublisher();

   MobileAppObserver *observer1 = new MobileAppObserver(subject);
   WebAppObserver *observer2 = new WebAppObserver(subject);

   subject->setData(1);

   delete subject;
   delete observer1;
   delete observer2;
}
