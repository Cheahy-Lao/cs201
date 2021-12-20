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
    prev = NULL;
    next = NULL;
    this->data = data;
}

// To set previous node
template <typename Type>
void Double_Node<Type>::setPrev(Double_Node *prev)
{
    this->prev = prev;
}

// To get previous node
template <typename Type>
Double_Node<Type> *Double_Node<Type>::getPrev()
{
    return prev;
}

// To set next node
template <typename Type>
void Double_Node<Type>::setNext(Double_Node *next)
{
    this->next = next;
}

// To get next node
template <typename Type>
Double_Node<Type> *Double_Node<Type>::getNext()
{
    return next;
}

// To set Data
template <typename Type>
void Double_Node<Type>::setData(Type T)
{
    this->data = data;
}

// To get Data
template <typename Type>
Type Double_Node<Type>::getData()
{
    return data;
}
#endif // DOUBLE_NODE_IMPLEMENTATION_H