#include "Queue.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {
  Queue* q = new Queue(12);
  for(int i = 0; i < 2; ++i) {
    q->enqueue(i);
  }

  for(int i = 0; i < 2; ++i) {
    cout << q->dequeue() << endl;
  }

  delete q;

  return 0;

}
