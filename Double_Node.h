//	Team Name   : Debonair
//	Section		: 1&2
#ifndef DOUBLE_NODE_H
#define DOUBLE_NODE_H
// Double Node Class
template <typename T>
class Double_Node
{
private:
    Double_Node *prev; // store the address of the previous node
    Double_Node *next; // store the address of the next node
    T data;            // store data in a template
public:
    Double_Node(T); // construct a new node
};
#endif // DOUBLE_NODE_H