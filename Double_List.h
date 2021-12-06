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
    Double_List();                      // construct a list
    Double_List(Double_List<Type> *dl); // construct a list
    int size();                         // returns the number of nodes in the list
    bool empty();                       // check if the list is empty
    Type front();
    Type back();
    Double_Node<Type> *head();
    Double_Node<Type> *tail();
    int count(Type obj);
    void swap(Double_List<Type> *list);
    Double_List<Type> &operator=(Double_List<Type> *rhs);
    void push_front(Type obj);
    void push_back(Type obj);
    Type pop_front();
    Type pop_back();
    int erase(Type obj);
    ~Double_List();
};

#endif // DOUBLE_LINK_H