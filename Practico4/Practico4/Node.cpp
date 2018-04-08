#include "stdafx.h"
#include "Node.h"


Node::Node(int elem, Node *next, Node *previus) //Init elements
{
	element = elem; //If not inser value elem = 0;
	nextt = next; //If not inser node next = nullptr;
	prev = previus; //If not inser node previus = nullptr;
}

int Node::getElem()
{
	return element;
}


Node * Node::getNextElem()
{
	return nextt;
}

Node * Node::getPrevElem()
{
	return prev;
}

void Node::setNextElem(Node *next)
{
	nextt =next;
}

void Node::setPrevElem(Node *previus)
{
	prev = previus;
}

Node::~Node()
{
}
