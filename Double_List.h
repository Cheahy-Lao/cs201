//	Team Name   : Debonair
//	Section		: 1&2

// unordered list
#ifndef DOUBLE_LINK_H
#define DOUBLE_LINK_H
#include "Double_Node.h"

template <typename T>
class Double_List
{
private:
    Double_List *list_head; // store the address of the head pointers
    Double_List *list_tail; // store the address of the tail pointers
    int list_size;          // number of nodes in the list
public:
    Double_List();                // construct a list
    Double_List(Double_List *dl); // construct a list
    int size();                   // returns the number of nodes in the list
    bool empty();                 // check if the list is empty
    T front();
    T back();
    Double_List head();
    Double_List tail();
    int count(T obj);
    void swap(Double_List *list);
    Double_List swap(Double_List *rhs);
    void push_front(T obj);
    void push_back(T obj);
    T pop_front();
    T pop_back();
    int erase(T obj);
    ~Double_List();
};

#endif // DOUBLE_LINK_H