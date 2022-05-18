#ifndef NODE_H
#define NODE_H

#include <stdlib.h>

class Node {
private:
	int data;
public: 
	Node* next;
	//Constructors
	Node();
	Node(int a);
	//Setters
	void setNext(Node* N);
	void setData(int a);
	//Getters
	Node* getNext();
	int getData();
	//No Need for Destructors 
};
#endif 