#ifndef NODE_H
#define NODE_H

class Node {
private:
	int data;
public: 
	Node* next;
	Node();
	Node(int x);
	void setNext(Node* Next);
	Node* getNext();
	void setData(int x);
	int getData();
};
#endif 