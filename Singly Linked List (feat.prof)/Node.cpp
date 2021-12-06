#ifndef NODE_H
#define NODE_H
#include "Node.h"
#include <iostream>

// Node constructor
Node::Node(int data)
{
    this->data = data;
    this->next = NULL;
}
#endif