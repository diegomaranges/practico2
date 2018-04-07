#include "stdafx.h"
#include "Node.h"


Node::Node(int elem, Node *next, Node *previus)
{
	element = elem;
	nextt = next;
	prev = previus;
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
