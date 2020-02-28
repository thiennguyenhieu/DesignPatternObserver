#include "MobileAppObserver.h"
#include <iostream>
#include "EventPublisher.h"

using namespace std;

MobileAppObserver::MobileAppObserver(EventPublisher* subject) : _subject(subject)
{
   if (_subject)
   {
      subject->attach(this);
   }
}

MobileAppObserver::~MobileAppObserver()
{

}

void MobileAppObserver::update(const int data)
{
   cout << "update for Mobile client" << endl;
}

