#include "LinkedList.h"

bool elemt_valid(int elem)
{
    for(int i = 2; i <= elem / 2; ++i)
    {
        if(elem % i == 0)
        {
            return true;
        }
    }
    return false;
}

LinkedList::LinkedList()
{
    length = 0;
    head = nullptr;
    tail = nullptr;
}

void LinkedList::AddElement(int elem)
{
    if (elemt_valid(abs(elem)))
    {
        node *auxiliary = nullptr;

        node *element = new node;
        element->value = elem;
        element->next = nullptr;
        element->previous = nullptr;

        if(length == 0) {
            head = element;
            tail = element;
        } else if (head == tail) {
            tail = element;
            tail->previous = head;
            head->next = tail;
        } else {
            auxiliary = tail;
            tail->next = element;
            tail = element;
            tail->previous = auxiliary;
        }
        ++length;
    } else {
        cout << "el numero ingresado es primo y no puedo agregarlo" << endl;
    }
}

void LinkedList::PrintList()
{
    node * auxiliary = head;
    for (unsigned int i = 0; i < length; ++i) {
        cout << auxiliary->value << ", ";
        auxiliary = auxiliary->next;
    }
}

LinkedList::~LinkedList()
{
    node *auxiliaryone = nullptr;
    node *auxiliarytwo = nullptr;

    while (head != nullptr && tail != nullptr) {
        if (head == tail) {
            delete[] head;
            head = nullptr;
            tail = nullptr;
        } else if (head->next == tail) {
            delete[] head;
            head = nullptr;
            delete[] tail;
            tail = nullptr;
        } else {
            auxiliaryone = head->next;
            auxiliarytwo = tail->previous;
            delete[] head;
            head = auxiliaryone;
            delete[] tail;
            tail = auxiliarytwo;
        }
    }
    length = 0;
}
