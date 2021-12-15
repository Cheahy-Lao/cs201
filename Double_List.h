//	Team Name   : Debonair
//	Section		: 1&2

// unordered list
#ifndef DOUBLE_LINK_H
#define DOUBLE_LINK_H
#include "Double_Node.h"

template <typename Type>
class Double_List
{
private:
    Double_Node<Type> *list_head; // store the address of the head pointers
    Double_Node<Type> *list_tail; // store the address of the tail pointers
    int list_size;                // number of nodes in the list
public:
    Double_List();                                              // construct a list
    Double_List(const Double_List &dl);                         // construct a list from another list (Deep Copy)
    int size() const;                                           // returns the number of nodes in the list
    bool empty() const;                                         // check if the list is empty
    Type front() const;                                         // returns the data stored in first node
    Type back() const;                                          // returns the data stored in last node
    Double_Node<Type> *head() const;                            // returns the head pointer
    Double_Node<Type> *tail() const;                            // returns the tail pointer
    int count(const Type obj);                                  // returns the number of nodes which have the same data value
    void swap(Double_List<Type> &list);                         // swapping between 2 double lists
    Double_List<Type> &operator=(const Double_List<Type> *rhs); // assignment operator "=" to assign the argument list to the original double list (Deep Copy)
    void push_front(const Type obj);                            // add a node at the front of the list
    void push_back(const Type obj);                             // add a node at the back of the list
    Type pop_front();                                           // delete the front of the list
    Type pop_back();                                            // delete the back of the list
    int erase(const Type obj);                                  // erase the first node that is met from the head with the equivalent data to the object argument that was inputted
    ~Double_List();                                             // destruct a list
    void printList();                                           // prints all nodes
};

#endif // DOUBLE_LINK_H