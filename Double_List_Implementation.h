//	Team Name   : Debonair
//	Section		: 1&2
#ifndef DOUBLE_LINK_IMPLEMENTATION_H
#define DOUBLE_LINK_IMPLEMENTATION_H
#include <iostream>
#include "Double_Node.h"
#include "Double_List.h"
using namespace std;

// Constructor, sets all member variables to 0 or NULL. O(1).
template <typename Type>
Double_List<Type>::Double_List()
{
    list_head = NULL;    // empty list
    list_tail = NULL;    // empty list
    this->list_size = 0; // set the list'size to zero
}

// Copy Constructor,  create a new doubly linked list with a copy of all of the nodes within the linked list with the elements stored in the same order. Once a copy is made, any change to the original linked list must not affect the copy. (O(n))
template <typename Type>
Double_List<Type>::Double_List(Double_List<Type> *dl)
{
    // write your code here
    Double_Node<Type> *temp = this->list_head;
    Double_Node<Type> *temp_tail = this->list_tail;
    while (temp != NULL)
    {
        dl->data = temp->data;
        temp = temp->next;
    }
    dl->list_head = temp->list_head;
    dl->list_tail = temp_tail;
    dl->list_size = this->list_size;
}

// Returns the number of items in the list. (O(1))
template <typename Type>
int Double_List<Type>::size()
{
    return this->list_size;
}

// Returns true if the list is empty, false otherwise. (O(1))
template <typename Type>
bool Double_List<Type>::empty()
{
    // write your code here
    return this->list_size == 0;
}

// Retrieves the object stored in the node pointed to by the head pointer. This function throws an underflow if the list is empty. (O(1))
template <typename Type>
Type Double_List<Type>::front()
{
    // write your code here
    try
    {
        if (this->size() == 0)
            throw underflow_error("The list is empty");
    }
    catch (const char *error)
    {
        cout << "Error: " << error << endl;
        return 0;
    }
    return list_head->data;
}

// Retrieves the object stored in the node pointed to by the tail pointer. This function throws an underflow if the list is empty. (O(1))
template <typename Type>
Type Double_List<Type>::back()
{
    // write your code here
    return this->list_tail->data;
}

// Returns the head pointer. (O(1))
template <typename Type>
Double_Node<Type> *Double_List<Type>::head()
{
    // write your code here
    return this->list_head;
}

// Returns the tail pointer. (O(1))
template <typename Type>
Double_Node<Type> *Double_List<Type>::tail()
{
    // write your code here
    return this->list_tail;
}

// Returns the number of nodes in the linked list storing a value equal to the argument, obj. (O(n))
template <typename Type>
int Double_List<Type>::count(Type obj)
{
    // write your code here
}

// The swap function swaps all the member variables of this linked list with those of the argument. (O(1))
template <typename Type>
void Double_List<Type>::swap(Double_List<Type> *list)
{
}

// The assignment operator makes a copy of the argument and then swaps the member variables of this doubly linked list with those of the copy. (O(nlhs + nrhs))
template <typename Type>
Double_List<Type> &Double_List<Type>::operator=(Double_List<Type> *rhs)
{
}

// Creates a new Double_node<Type> storing the argument, the next pointer of which is set to the current head pointer and the previous pointer is set to nullptr. The head pointer and the previous pointer of what was the first node is set to the new node. If the list was originally empty, the tail pointer is set to point to the new node. (O(1))
template <typename Type>
void Double_List<Type>::push_front(Type obj)
{
    // write your code here
    Double_Node<Type> *temp = this->list_head;
    if (this->list_tail != NULL)
    {
    }
    else
    {
        this->list_tail = temp->next;
        temp->data = obj;
        this->list_head = temp;
    }
}

// Similar to push_front, this places a new node at the back of the list. (O(1))
template <typename Type>
void Double_List<Type>::push_back(Type obj)
{
    // write your code here
    Double_Node<Type> *temp = new Double_Node(obj);
    if (this->size() == 0)
    {
        temp->next = list_head;
        list_head = temp;
    }
    // temp->prev = list_tail;
    // list_tail = temp;
    // list_tail->next = NULL;
    list_size++;
}

// Delete the node at the front of the linked list and, as necessary, update the head and tail pointers and the previous pointer of any other node within the list. Return the object stored in the node being popped. Throw “underflow” exception if the list is empty. (O(1))
template <typename Type>
Type Double_List<Type>::pop_front()
{
    // write your code here
    this->list_head = this->list_head->next;
    delete this->list_head->prev;
}

// Similar to pop_front, delete the last node in the list. This function throws “underflow” if the list is empty. (O(1))
template <typename Type>
Type Double_List<Type>::pop_back()
{
    // write your code here
    this->list_tail = this->list_tail->prev;
    delete this->list_tail->next;
}

// Delete the first node (from the front) in the linked list that contains the object equal to the argument (use == to to test for equality with the retrieved element). As necessary, update the head and tail pointers and the previous and next pointers of any other node within the list. Return the number of nodes that were deleted (0 or 1). (O(n))
template <typename Type>
int Double_List<Type>::erase(Type obj,Double_Node** list_head, Double_Node* del )
{
    // write your code here
    if (*list_head == NULL || del == NULL){ return; }

    if (*list_head == del){*list_head = del->next;}

    if (del->next != NULL){del->next->prev = del->prev;}

    if (del->prev !=NULL){del->prev->next = del->next;}

    free(del);
    return;
}

// The destructor must delete each of the nodes in the linked list. (O(n))
template <typename Type>
Double_List<Type>::~Double_List()
{
    // write your code here
    while (this->list_head != NULL)
    {
        list_head = list_head->next;
        delete list_head->prev;
    }
    this->list_size = 0;
}

#endif // DOUBLE_LINK_IMPLEMENTATION_H