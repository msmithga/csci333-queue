BUILD = ./build
TEST = ./test
LIB = ./lib
SRC = ./src

CPP = g++
CPPFLAGS = -Wall -Wextra

all: $(BUILD)/main $(TEST)/queue_test

$(BUILD)/main:
	cd $(SRC); $(MAKE)

$(TEST)/queue_test: $(TEST)/Queue.cpp 
	cd $(TEST); $(MAKE)

clean:
	cd $(SRC); $(MAKE) clean
	cd $(TEST); $(MAKE) clean