BUILD = ../../build
CPP = g++
CPPFLAGS = -Wall -Wextra

main: queue_test.cpp Queue.o
	$(CPP) $(CPPFLAGS) -o $(BUILD)/LLQueue queue_test.cpp Queue.o

Queue.o: Queue.h Queue.cpp
	$(CPP) $(CPPFLAGS) -c Queue.cpp

clean: 
	rm -f *.o
	rm -f *~
	rm -f $(BUILD)/main
	rm -f $(BUILD)/LLQueue