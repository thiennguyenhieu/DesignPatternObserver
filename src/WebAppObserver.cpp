#include "WebAppObserver.h"
#include <iostream>
#include "EventPublisher.h"

using namespace std;

WebAppObserver::WebAppObserver(EventPublisher* subject) : _subject(subject)
{
   if (_subject)
   {
      subject->attach(this);
   }
}

WebAppObserver::~WebAppObserver()
{

}

void WebAppObserver::update(const int data)
{
   cout << "update for Web client" << endl;
}
