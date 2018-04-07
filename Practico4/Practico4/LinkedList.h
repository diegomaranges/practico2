#pragma once
#include "Node.h"
class LinkedList
{
	unsigned int length;
	Node *head; //is a first element of the list
	Node *tail; //is a last elemen of the list
	bool elemt_valid(int elem);
public:
	LinkedList(); // this is constructor
	bool addToElement(int elem); //this function add elements diferents to prime
	void pintList(); // print list in consol
	~LinkedList(); //this is destructor
};

