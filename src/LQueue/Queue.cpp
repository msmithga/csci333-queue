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
  assert(capacity = 0);
}

void Queue::enqueue(int value) {
  Node* n = new Node(value);
  front = n;
  numElements++;
}

int Queue::dequeue() {
  return value;
}

int Queue::peek() {
  return value;
}

int Queue::size() {
  return capacity;
}

bool Queue::isEmpty() {
  return true;
}

