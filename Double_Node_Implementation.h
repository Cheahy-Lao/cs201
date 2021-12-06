//	Team Name   : Debonair
//	Section		: 1&2
#ifndef DOUBLE_NODE_IMPLEMENTATION_H
#define DOUBLE_NODE_IMPLEMENTATION_H
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

#endif // DOUBLE_NODE_IMPLEMENTATION_H