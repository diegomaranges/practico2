#pragma once
class Node
{
private:
	int element;
	Node *nextt;
	Node *prev;
public:
	Node(int elem = 0, Node *next = NULL, Node *previus = NULL);
	int getElem();
	Node *getNextElem();
	Node *getPrevElem();
	void setNextElem(Node *);
	void setPrevElem(Node *);
	~Node();
};

