#include "LinkedList.h"

Node::Node() {
    next = NULL;
    previous = NULL;
}

Node::Node(int vle, Node *nxt, Node *prvs) {
    value = vle;
    next = nxt;
    previous = prvs;
}

LinkedList::LinkedList()
{
    head = NULL;
    tail = NULL;
}


bool LinkedList::elemt_valid(int elem)
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

bool LinkedList::AddElement(int elem)
{
    if (elemt_valid(abs(elem)))
    {
        Node *element;
        element = new Node(elem, NULL, NULL);
        cout << head << endl;
        cout << tail << endl;

        if(element == NULL)
        {
            return false;
        }
        if(head == NULL) {
            cout << "hola1" << endl;
            head = element;
            tail = element;
            return true;
        }
        cout << "hola3" << endl;
        tail->next = element;
        element->previous = tail;
        tail = element;
        return true;
    } else {
        cout << "el numero ingresado es primo y no puedo agregarlo" << endl;
        return true;
    }
}

void LinkedList::PrintList()
{
    Node * auxiliary = head;
    while (auxiliary != tail) {
        cout << auxiliary->value << ", ";
        auxiliary = auxiliary->next;
    }
    cout << auxiliary->value << endl;
}

LinkedList::~LinkedList()
{
    Node *auxiliaryone;
    Node *auxiliarytwo;

    while (head != NULL && tail != NULL) {
        if (head == tail) {
            delete head;
            head = nullptr;
            tail = nullptr;
        } else if (head->next == tail) {
            delete head;
            head = nullptr;
            delete tail;
            tail = nullptr;
        } else {
            auxiliaryone = head->next;
            auxiliarytwo = tail->previous;
            delete head;
            head = auxiliaryone;
            delete tail;
            tail = auxiliarytwo;
        }
    }
}
