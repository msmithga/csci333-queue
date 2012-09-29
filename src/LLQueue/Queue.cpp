#include "Queue.h"
#include <assert.h>
#include <iostream>

Queue::Queue() {
 
}

Queue::~Queue() {

}

void Queue::enqueue(int value) {
  theQueue.push_back(value);
}

int Queue::dequeue() {
  assert(theQueue.size()!= 0);

  int result = theQueue.front();

  theQueue.pop_front();

  return result;
}

int Queue::size() {
  return theQueue.size();
}

bool Queue::isEmpty() {
  return theQueue.empty();
}


