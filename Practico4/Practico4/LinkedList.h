#pragma once
#include "Node.h"
class LinkedList
{
	unsigned int length; //length of list.
	Node *head; //Its a first element of the list.
	Node *tail; //Its a last elemen of the list.
	bool elemt_valid(int elem); //Function for comprove is elem is prime.
public:
	LinkedList(); // this is constructor.
	bool addToElement(int elem); //this function add elements diferents to prime.
	void pintList(); // print list in consol.
	~LinkedList(); //this is destructor.
};

