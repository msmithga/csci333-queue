BUILD = ../build
CPP = g++
CPPFLAGS = -Wall -Wextra

AQueue: AQueue/queue_test.cpp AQueue/Queue.o
	cd AQueue; $(MAKE)

LQueue: LQueue/queue_test.cpp LQueue/Queue.o LQueue/Node.o
	cd LQueue; $(MAKE)

LLQueue: LLQueue/queue_test.cpp LLQueue/Queue.o
	cd LLQueue; $(MAKE)

clean:
	rm -f *.o
	rm -f *~
	rm -f $(BUILD)/main
	cd AQueue; $(MAKE) clean
	cd LQueue; $(MAKE) clean
	cd LLQueue; $(MAKE) clean