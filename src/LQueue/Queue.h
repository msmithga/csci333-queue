#ifndef __QUEUE_H__
#define __QUEUE_H__

class Queue {
 private:
  Node* theQueue;
  int front;
  int back;
  int capacity;
  int numElements;

 public:
  Queue();
  ~Queue();
  void enqueue(int value);
  int dequeue();
  int peek();
  int size();
  bool isEmpty();
};


#endif
