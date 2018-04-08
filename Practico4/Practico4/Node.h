#pragma once
class Node
{
private:
	int element; // element for node.
	Node *nextt; // Next node.
	Node *prev; // Previus node.
public:
	Node(int elem = 0, Node *next = NULL, Node *previus = NULL); // This is constructor.
	int getElem(); // Return element for node.
	Node *getNextElem(); // Return next node.
	Node *getPrevElem(); // Return previus node.
	void setNextElem(Node *); // Set next node.
	void setPrevElem(Node *); // Set previus node.
	~Node(); // This is destructor.
};

