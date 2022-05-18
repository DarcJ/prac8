//INCLUDE NECESSARY FILES
#include "Node.h"
#include "LinkedList.h"

//INCLUDE NECESSARY LIBRARIES
#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>

using namespace std;

//this function will recieve user input from command line and break when input is not a digit
bool deciferInput(string str) {
	for (int i = 0; i < str.length(); i++) {
		if (isdigit(str[i]) == false) {
			return false;
		}
	}
  return true;
}

int main(){

	int array[100];
  	int count = 0;
    int x;
    string input;

    while (true) {
    	cin>>input;
        if(deciferInput(input) == false)
        	break;
        stringstream(input) >> x;
        array[count] = x;
        count++;
   }

    //create linked list object and pointer
	LinkedList *linkedList = new LinkedList(array, count);

    //Recieve function arguments from command line
	int arg1;
 	cin >> arg1;
 	int arg2;
    cin >> arg2;

	//FUNCTION SELECTION
    //Call addFront
	if(input.compare("AF") == 0){ 
		linkedList->addFront(arg1);  
	} 
    //call addEnd
    if(input.compare("AE") ==0){
    	linkedList->addEnd(arg1);
	} 
    //call addAtPosition
    if(input.compare("AP") ==0){ 
    	linkedList->addAtPosition(arg1,arg2);
	} 
    // call Search
    if(input.compare("S") ==0){
   		linkedList->search(arg1);
	} 
    //call deleteFront
    if(input.compare("DF") ==0){
    	linkedList->deleteFront();
	} 
    //call deleteEnd
    if(input.compare("DE") ==0){

    	linkedList->deleteEnd();
	}
    //call deletePosition 
    if(input.compare("DP") ==0){
    	linkedList->deletePosition(arg1);
	} 
    //call getItem
    if(input.compare("GI") ==0){
    	linkedList->getItem(arg1);
   	}

	//print linked list
	linkedList->printItems();

}