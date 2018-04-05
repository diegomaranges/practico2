#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

using namespace std;

struct Node //node from list
{
    int value; //value of element
    Node *next; //next element
    Node *previous; // previou element
    Node(); //this is constructor
    Node(int vle, Node *nxt, Node *prvs); //this is other constructor
};

class LinkedList //list of nodes that contain ints
{
private:
    Node *head; //is a first element of the list
    Node *tail; //is a last elemen of the list
    bool elemt_valid(int elem);
public:
    LinkedList(); // this is constructor
    bool AddElement(int elem); //this function add elements diferents to prime
    void PrintList (); // print list in consol
    ~LinkedList(); //this is destructor
};

#endif // LINKEDLIST_H
