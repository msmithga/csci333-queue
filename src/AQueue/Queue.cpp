#include "Queue.h"
#include <iostream>

Queue::Queue(int initialSize) {
  theQueue = new int[initialSize];
  front = 0;
  back = 0;
}

Queue::~Queue() {
  delete[] theQueue;
}

void Queue::enqueue(int value) {
  back = (back + 1)%capacity;
  theQueue[back] = value;
  numElements++;
}

int Queue::dequeue() {
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
