//	Team Name   : Debonair
//	Section		: 1&2

#include <iostream>
#include "Double_List.h"

// Constructor, sets all member variables to 0 or NULL. O(1).
template <typename Type>
Double_List<Type>::Double_List()
{
    this->list_head = NULL; // empty list
    this->list_tail = NULL; // empty list
    this->list_size = 0;    // set the list'size to zero
}

// Copy Constructor,  create a new doubly linked list with a copy of all of the nodes within the linked list with the elements stored in the same order. Once a copy is made, any change to the original linked list must not affect the copy. (O(n))
template <typename Type>
Double_List<Type>::Double_List(Double_List *dl)
{
    // write your code here
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
    return this->size() == 0;
}

// Retrieves the object stored in the node pointed to by the head pointer. This function throws an underflow if the list is empty. (O(1))
template <typename Type> // check if the list is empty
Type Double_List<Type>::front()
{
    // write your code here
}

// Retrieves the object stored in the node pointed to by the tail pointer. This function throws an underflow if the list is empty. (O(1))
template <typename Type>
Type Double_List<Type>::back()
{
    // write your code here
}

// Returns the head pointer. (O(1))
template <typename Type>
Double_List<Type>::Double_List head()
{
    // write your code here
}

// Returns the tail pointer. (O(1))
template <typename Type>
Double_List<Type>::Double_List tail()
{
    // write your code here
}

// Returns the number of nodes in the linked list storing a value equal to the argument, obj. (O(n))
template <typename Type>
int Double_List<Type>::count(Type obj)
{
    // write your code here
}

// The swap function swaps all the member variables of this linked list with those of the argument. (O(1))
template <typename Type>
void Double_List<Type>::swap(Double_List *list)
{
}

// The assignment operator makes a copy of the argument and then swaps the member variables of this doubly linked list with those of the copy. (O(nlhs + nrhs))
template <typename Type>
Double_List<Type> &Double_List<Type>::operator=(Double_List *rhs)
{
}

// Creates a new Double_node<Type> storing the argument, the next pointer of which is set to the current head pointer and the previous pointer is set to nullptr. The head pointer and the previous pointer of what was the first node is set to the new node. If the list was originally empty, the tail pointer is set to point to the new node. (O(1))
template <typename Type>
void Double_List<Type>::push_front(Type obj)
{
    // write your code here
}

// Similar to push_front, this places a new node at the back of the list. (O(1))
template <typename Type>
void Double_List<Type>::push_back(Type obj)
{
    // write your code here
}

// Delete the node at the front of the linked list and, as necessary, update the head and tail pointers and the previous pointer of any other node within the list. Return the object stored in the node being popped. Throw “underflow” exception if the list is empty. (O(1))
template <typename Type>
Type Double_List<Type>::pop_front()
{
    // write your code here
}

// Similar to pop_front, delete the last node in the list. This function throws “underflow” if the list is empty. (O(1))
template <typename Type>
Type Double_List<Type>::pop_back()
{
    // write your code here
}

// Delete the first node (from the front) in the linked list that contains the object equal to the argument (use == to to test for equality with the retrieved element). As necessary, update the head and tail pointers and the previous and next pointers of any other node within the list. Return the number of nodes that were deleted (0 or 1). (O(n))
template <typename Type>
int Double_List<Type>::erase(Type obj)
{
    // write your code here
}

// The destructor must delete each of the nodes in the linked list. (O(n))
template <typename Type>
Double_List<Type>::~Double_List()
{
    // write your code here
    delete this->prev;
    delete this->next;
    this->size = 0;
}
