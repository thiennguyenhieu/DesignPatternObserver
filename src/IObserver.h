#ifndef IOBSERVER_H_
#define IOBSERVER_H_

class IObserver
{
public:
   IObserver() {};
   virtual ~IObserver() {};

   virtual void update(const int data) = 0;
};

#endif /* IOBSERVER_H_ */
