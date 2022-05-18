//Include Necessary Files
#include "LinkedList.h"
#include "Node.h"

//Include Necessary Libraries
#include <stdlib.h>
#include <iostream>


//COSTRUCTOR 1 -> Create Empty list and set head to NULL
LinkedList::LinkedList() {
	head = NULL; 
}

//CONSTRUCTOR 2 -> Make head the first element of list
LinkedList::LinkedList(int array[], int size) {
	head = new Node(array[0]); 

	for (int i = 1; i < size; i++) {
		addEnd(array[i]);
	}
}

//Add item to the front of the linked list
void LinkedList::addFront(int newItem) {
	Node* t = new Node(newItem);
	t->next = head;
	head = t; 
}

//Add intem to the end of the linked list
void LinkedList::addEnd(int newItem) {

	Node* num = new Node(newItem);

	Node* t = head;

	while (t->next != NULL) {
		t = t->next;
	}

	t->next = num;	
}

//Add new item as desired position in linked list
void LinkedList::addAtPosition(int position, int newItem) {


	//PSOTION = 1 -> call addFront
	if(position <= 1) {
    	addFront(newItem);
    } 
    else {

    	Node *t = new Node();
    	t = head;
   	 	int counter = 1;
    
    	while (counter < position -1 && t->next != NULL) {
    		t = t->next;
    		counter++;
    	}

    	if (t->next == NULL) {
    		addEnd(newItem);
    	} else if (counter == position -1) {
    		Node* z = new Node(newItem);
    		z->next = t->next;
    		t->next = z;
    	}
	}
}

//Function to find number in list 
int LinkedList::search(int item) {

	int count = 1;
	Node* t;

    for(t = head; t != NULL; t = t->getNext()){
        if(item == t->getData()){
            std::cout<< count << " ";
            return count;
            }
            count++;
        }
    
    //If item does not exist in linked list
    std::cout<< "0 " << std::endl; 
    return 0;
}

//Delete the Front item of list
void LinkedList::deleteFront() {
  	Node* t;

  	if (head == NULL) {
  		return;
  	} else {
  		t = head;
  		head = head->next;
  	}
 }

//Delete Last item in list
void LinkedList::deleteEnd() {

	//Create Temperary Node
	Node* t1 = head;
	Node* t2;

	if (head == NULL) {
  		return;
  	}

	//Look through list
	while (t1->next != NULL) {
		t2 = t1;
		t1 = t1->next;
	}

	if (t2 != NULL) {
		t2->next = NULL;
	}
}

//Delete item at the desired position in linked list
void LinkedList::deletePosition(int position) {

	Node* t1;
	Node* t2;

	if (head == NULL) {
  		return;
  	}

  	t2 = head;

  	if (position == 1) {
  		t1 = head;
  		head = head->next;
  	} else {
  		for (int i = 1; i < position; i++) {
  			t1 = t2;
  			t2 = t2->next;
  		}
  		t1->next = t2->next;
  	}
}

int LinkedList::getItem(int position) {
	//this will return a value of the item at the given position in the list

	int counter = 1;
	Node* t;

  	for (t = head; t != NULL; t = t->getNext()) {
  		if (counter == position) {
  			std::cout<<t->getData()<<" ";
            return t->getData();
  		}
  		counter++;
  	}
          
    std::cout << std::numeric_limits < int >::max()<< " ";
    return std::numeric_limits < int >::max();
	
}

void LinkedList::printItems() {
	Node* t;
	t = head;

	while (t->next != NULL) {
		std::cout << t->getData() << " ";
		t = t->next;
	}

	std::cout<< t->getData() <<"\n";
}

LinkedList::~LinkedList(){	
}