//	Team Name   : Debonair
//	Section		: 1&2

#include <iostream>
#include "Double_List.h"

template <typename T>
Double_List<T>::Double_List()
{
    this->list_head = NULL; // empty list
    this->list_tail = NULL; // empty list
    this->list_size = 0;    // set the list'size to zero
}

template <typename T>
Double_List<T>::Double_List(Double_List *dl)
{
    // write your code here
}

template <typename T>
int Double_List<T>::size()
{
    return this->list_size;
}

template <typename T>
bool Double_List<T>::empty()
{
    // write your code here
    return this->size() == 0;
}

template <typename T> // check if the list is empty
T Double_List<T>::front()
{
    // write your code here
}

template <typename T>
T Double_List<T>::back()
{
    // write your code here
}

template <typename T>
Double_List<T>::Double_List head()
{
    // write your code here
}

template <typename T>
Double_List<T>::Double_List tail()
{
    // write your code here
}

template <typename T>
int Double_List<T>::count(T obj)
{
    // write your code here
}

template <typename T>
void Double_List<T>::swap(Double_List *list)
{
    // write your code here
}

template <typename T>
Double_List<T>::Double_List swap(Double_List<T>::Double_List *rhs)
{
    // write your code here
}

template <typename T>
void Double_List<T>::push_front(T obj)
{
    // write your code here
}

template <typename T>
void Double_List<T>::push_back(T obj)
{
    // write your code here
}

template <typename T>
T Double_List<T>::pop_front()
{
    // write your code here
}

template <typename T>
T Double_List<T>::pop_back()
{
    // write your code here
}

template <typename T>
int Double_List<T>::erase(T obj)
{
    // write your code here
}

template <typename T>
Double_List<T>::~Double_List()
{
    // write your code here
    delete this->prev;
    delete this->next;
    this->size = 0;
}
