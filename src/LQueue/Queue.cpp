#include "Queue.h"
#include <iostream>
#include <assert.h>

Queue::Queue() {
  front = 0;
  back = 0;
  numElements = 0;
  capacity = 0;
}

Queue::~Queue(){
  for(int i = 0; i <= capacity; ++i) {
    dequeue();
    numElements--;
  }
  assert(numElements == 0);
}

void Queue::enqueue(int value) {
  Node* n = new Node(value);
  back = (back + 1)%capacity;
  theQueue[back] = n;
  numElements++;
}

int Queue::dequeue() {
  int result = theQueue[front];
  front = (front + 1)%capacity;
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
  return true;
}

