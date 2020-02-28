#include "EventPublisher.h"
#include <algorithm>

EventPublisher::EventPublisher()
{
   _data = 0;
}

EventPublisher::~EventPublisher()
{

}

void EventPublisher::attach(IObserver* observer)
{
   _listObserver.push_back(observer);
}

void EventPublisher::detach(IObserver* observer)
{
   std::vector<IObserver*>::iterator iter = std::find(_listObserver.begin(), _listObserver.end(), observer);
   if (iter != _listObserver.end())
   {
      _listObserver.erase(iter);
   }
}

void EventPublisher::notifyObservers()
{
   std::vector<IObserver*>::iterator iter = _listObserver.begin();
   while (iter != _listObserver.end())
   {
      if (*iter != NULL)
      {
         (*iter)->update(_data);
      }
      ++iter;
   }
}

void EventPublisher::setData(int data)
{
   _data = data;
   notifyObservers();
}
