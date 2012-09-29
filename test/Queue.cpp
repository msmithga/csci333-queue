#include "gtest/gtest.h"
#include "../src/AQueue/Queue.h"
#include "../src/LQueue/Queue.h"
#include "../src/LLQueue/Queue.h"

TEST(QueueTest, Enqueue) {
  Queue* q = new Queue();
  q->enqueue(6);

  EXPECT_EQ(6, q->peek());
  delete q;
}
