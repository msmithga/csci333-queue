#ifndef __QUEUE_H__
#define __QUEUE_H__

class Queue {
 private:
  int* theQueue;
  int front;
  int back;
  int capacity;
  int numElements;

 public:
  Queue(int initialSize = 10);
  ~Queue();
  void enqueue(int value);
  int dequeue();
  int peek();
  int size();
};


#endif
