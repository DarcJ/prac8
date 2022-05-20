#include "Node.h"
Node::Node() {
	data = 0;
	next = NULL;
}
void Node::setNext(Node* N) {
	next = N;
}

Node* Node::getNext() {
	return next;
}

void Node::setData(int a){
	data = a;
}

int Node::getData(){
	return data;
}
