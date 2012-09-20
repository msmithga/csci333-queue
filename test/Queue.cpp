#include "gtest/gtest.h"
#include "../src/Queue.h"

TEST(QueueTest, Push) {
  Queue* q = new Queue();
  q->push(6);

  EXPECT_EQ(6, q->peek());
  delete q;
}
