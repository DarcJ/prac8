#include "Node.h"
Node::Node() {

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
