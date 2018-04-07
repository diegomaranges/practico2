#include "stdafx.h"
#include "LinkedList.h"

#include <iostream>

using namespace std;

LinkedList::LinkedList()
{
	length = 0;
	head = nullptr;
	tail = nullptr;
}

bool LinkedList::elemt_valid(int elem)
{
	for (int i = 2; i <= elem / 2; ++i)
	{
		if (elem % i == 0)
		{
			return true;
		}
	}
	return false;
}


bool LinkedList::addToElement(int elem)
{
	if (elemt_valid(abs(elem)))
	{
		Node *element;
		element = new Node(elem);

		if (element == NULL)
		{
			return false;
		}
		if (length == 0) {
			head = element;
			tail = element;
			++length;
			return true;
		}
		tail->setNextElem(element);
		element->setPrevElem(tail);
		tail = element;
		++length;
		return true;
	}
	else {
		cout << "el numero ingresado es primo y no puedo agregarlo" << endl;
		return true;
	}
}

void LinkedList::pintList()
{
	Node *element = head;
	for (unsigned int i = 0; i < length; ++i)
	{
		cout << element->getElem() << ", ";
		element = element->getNextElem();
	}
	cout << endl;
}

LinkedList::~LinkedList()
{
	Node *element;
	for (unsigned int i = 0; i < length; ++i)
	{
		element = head->getNextElem();
		delete head;
		head = element;
	}
	head = nullptr;
	tail = nullptr;
	length = 0;
}
