//	Team Name   : Debonair
//	Section		: 1&2
#include <iostream>
#include "Double_Node.h"

// Double_Node constructor
template <typename T>
Double_Node<T>::Double_Node(T data)
{
    this->prev = NULL;
    this->next = NULL;
    this->data = data;
}
