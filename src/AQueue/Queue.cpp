#include "Queue.h"
#include <iostream>
#include <assert.h>

using std::cout;
using std::endl;

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
  int oldSize;
  int* newQueue;
  cout << "Made it here" << endl;

  if(numElements == capacity) {
    oldSize = capacity;
    capacity = capacity*2;
    newQueue = new int[capacity];
    for(int i = 0; i < oldSize; ++i) {
      newQueue[i] = theQueue[(front + i)%oldSize];
    }
  }

  delete[] theQueue;

  theQueue = newQueue;

  back = (back + 1)%capacity;
  theQueue[back] = value;
  numElements++;
}

int Queue::dequeue() {
  assert(numElements != 0);

  int initialSize = size();

  int* newQueue;

  if(numElements <= capacity*.25) {  
    capacity = initialSize/2;
    newQueue = new int[capacity];
    for(int i = 0; i < numElements; ++i) {
      newQueue[i] = theQueue[i];
    }
  }

  delete[] theQueue;

  theQueue = newQueue;

  int result = theQueue[front];
  front = (front + 1)%capacity;
  numElements--;
  return result;
}

int Queue::peek() {
  return theQueue[front];
}

int Queue::size() {
  return back;
}

bool Queue::isEmpty() {
  if(numElements == 0) {
    return true;
  }
  return false;
}
