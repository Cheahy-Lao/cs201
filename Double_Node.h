//	Team Name   : Debonair
//	Section		: 1&2
#ifndef DOUBLE_NODE_H
#define DOUBLE_NODE_H
// Double Node Class
template <typename Type>
class Double_Node
{
public:
    Double_Node<Type> *prev; // store the address of the previous node
    Double_Node<Type> *next; // store the address of the next node
    Type data;               // store data in a template
    Double_Node(Type);       // construct a new node
};
#endif // DOUBLE_NODE_H