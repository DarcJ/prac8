#ifndef NODE_H
#define NODE_H

#include <stdlib.h>

class Node {
private:
public: 
	Node* next;
	int data;
	//Constructors
	Node();
	//Node(int a);
	//Setters
	void setNext(Node* N);
	void setData(int a);
	//Getters
	Node* getNext();
	int getData();
	//No Need for Destructors 
};
#endif 