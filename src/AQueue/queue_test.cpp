#include "Queue.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {
  Queue* queue = new Queue(5);
  for(int i = 0; i <= 5; ++i) {
    queue->enqueue(i);
  }

  for(int i = 0; i <= 5; ++i) {
    cout << queue->dequeue() << endl;
  }

  delete queue;

  return 0;

}
