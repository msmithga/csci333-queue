#include "Queue.h"
#include <iostream>
#include <assert.h>

Queue::Queue(int initialSize) {
  theQueue = new int[initialSize];
  front = 0;
  back = 0;
  capacity = initialSize;
}

Queue::~Queue() {
  delete[] theQueue;
}

void Queue::enqueue(int value) {
  int initialSize = size();

  int* newQueue;

  if(numElements == capacity) {
    capacity = initialSize*2;
    for(int i = 0; i < capacity; ++i) {
      newQueue = new int[capacity];
      newQueue[i] = theQueue[i];
    }
  }

  delete[] theQueue;

  theQueue = newQueue;

  back = (back + 1)%capacity;
  theQueue[back] = value;
  numElements++;
}

int Queue::dequeue() {
  assert(numElements > 0);

  int initialSize = size();

  if(numElements <= capacity*.25) {
    capacity = initialSize/2;
  }
  int result = theQueue[front];
  front = (front + 1)%capacity;
  numElements--;
  return result;
}

int Queue::peek() {
  return theQueue[back];
}

int Queue::size() {
  return back;
}

bool Queue::isEmpty() {
  return true;
}
