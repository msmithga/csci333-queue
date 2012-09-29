#include "Queue.h"
#include <iostream>
#include <assert.h>

Queue::Queue() {
  front = 0;
  back = 0;
  numElements = 0;
}

Queue::~Queue(){
  for(int i = 0; i < numElements; ++i) {
    dequeue();
  }

  assert(numElements == 0);
}

void Queue::enqueue(int value) {
  theQueue = new Node(value);
 
  if(isEmpty()) {
    front = theQueue;
  }else {
    back->setNext(theQueue);
  }

  back = theQueue;
 
  numElements++;
}

int Queue::dequeue() {
  assert(numElements != 0);
  Node* tempNode;
  int result = front->getValue();

  tempNode = front->getNext();

  delete front;
  front = tempNode;

  if(front == 0) {
    back = 0;
  }

  numElements--;
  return result;
}

int Queue::peek() {
  assert(numElements != 0);
  return front->getValue();
}

int Queue::size() {
  return numElements;
}

bool Queue::isEmpty() {
  if(front == 0) {
  return true;
  }
  return false;
}

