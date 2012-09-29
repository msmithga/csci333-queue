BUILD = ../build
TEST = ../test
LIB = ../lib
SRC = ../src
GTEST = $(LIB)/gtest-1.6.0
GTEST_MAINA = $(GTEST)/make/gtest_main.a

GTEST_INCLUDES = -I$(GTEST) -I$(GTEST)/include

CPP = g++
CPPFLAGS = -Wall -Wextra

aqueue_test: Queue.cpp $(SRC)/AQueue/Queue.o $(GTEST_MAINA)
	$(CPP) $(CFLAGS) $(GTEST_INCLUDES) -pthread -o queue_test Queue.cpp $(SRC)/AQueue/Queue.o $(GTEST_MAINA)

lqueue_test: Queue.cpp $(SRC)/LQueue/Queue.o $(GTEST_MAINA)
	$(CPP) $(CFLAGS) $(GTEST_INCLUDES) -pthread -o queue_test Queue.cpp $(SRC)/LQueue/Queue.o $(GTEST_MAINA)

llqueue_test: Queue.cpp $(SRC)/LLQueue/Queue.o $(GTEST_MAINA)
	$(CPP) $(CFLAGS) $(GTEST_INCLUDES) -pthread -o queue_test Queue.cpp $(SRC)/LLQueue/Queue.o $(GTEST_MAINA)

$(GTEST_MAINA): $(GTEST)/src/*.cc $(GTEST)/src/*.h
	cd $(GTEST)/make; make

clean:
	rm -f queue_test 
	rm -f $(GTEST_MAINA)
	cd $(GTEST)/make; $(MAKE) clean