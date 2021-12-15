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
    return this->prev;
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
    return this->next;
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
    return this->data;
}
#endif // DOUBLE_NODE_IMPLEMENTATION_H