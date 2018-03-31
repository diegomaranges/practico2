#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

using namespace std;

class node //node from list
{
public:
    int value; //value of element
    node *next; //next element
    node *previous; // previou element
};

class LinkedList //list of nodes that contain ints
{
private:
    unsigned int length; //length the list
    node *head; //is a first element of the list
    node *tail; //is a last elemen of the list
public:
    LinkedList(); // this is constructor
    void AddElement(int elem); //this function add elements diferents to prime
    void PrintList (); // print list in consol
    ~LinkedList(); //this is destructor
};

#endif // LINKEDLIST_H
