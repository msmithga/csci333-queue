#include "Node.h"
#include <iostream>
#include <assert.h>

Node::Node(int value) {
  Node* n = value;
}

Node::~Node() {

}

int Node::getValue() {
  value = front;
  return value;
}

Node* Node::getNext() {
  return Node*;
}

void Node::setNext(Node*& n) {
  next = Node*& n;
}
