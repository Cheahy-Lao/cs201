//	Team Name   : Debonair
//	Section		: 1&2
#include <iostream>
#include "Double_Node.h"

// Double_Node constructor
template <typename Type>
Double_Node<Type>::Double_Node(Type data)
{
    this->prev = NULL;
    this->next = NULL;
    this->data = data;
}
