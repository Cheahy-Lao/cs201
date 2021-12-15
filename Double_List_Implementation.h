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
    this->list_size = 0; // set the list's size to zero
}

// Copy Constructor,  create a new doubly linked list with a copy of all of the nodes within the linked list with the elements stored in the same order. Once a copy is made, any change to the original linked list must not affect the copy. (O(n))
template <typename Type>
Double_List<Type>::Double_List(const Double_List<Type> &dl)
{
    list_head = NULL; // empty list
    list_tail = NULL; // empty list
    list_size = 0;    // set the list's size to zero

    Double_Node<Type> *head = dl.head(); // create a temporary head

    while (head->getNext() != NULL) // traverse the list until it hit the last node
    {
        Double_Node<Type> *current = new Double_Node<Type>(head->getData()); // assign a new pointer to the current data
        push_back(current->getData());                                       // push the data to the back of the list
        head = head->getNext();                                              // change the head pointer to the next one
    }

    Double_Node<Type> *current = new Double_Node<Type>(head->getData());
    push_back(current->getData());
}

// Returns the number of items in the list. (O(1))
template <typename Type>
int Double_List<Type>::size() const
{
    return this->list_size; // returns the list size
}

// Returns true if the list is empty, false otherwise. (O(1))
template <typename Type>
bool Double_List<Type>::empty() const
{
    return this->list_size == 0; // returns a boolean value if the list is empty or not
}

// Retrieves the object stored in the node pointed to by the head pointer. This function throws an underflow if the list is empty. (O(1))
template <typename Type>
Type Double_List<Type>::front() const
{
    if (list_size == 0)
        throw underflow_error("It cannot access the first node because the list is empty!");

    return list_head->getData(); // returns the first node data
}

// Retrieves the object stored in the node pointed to by the tail pointer. This function throws an underflow if the list is empty. (O(1))
template <typename Type>
Type Double_List<Type>::back() const
{
    if (list_size == 0)
        throw underflow_error("It cannot access the last node because the list is empty!");

    return list_tail->getData(); // returns the last node data
}

// Returns the head pointer. (O(1))
template <typename Type>
Double_Node<Type> *Double_List<Type>::head() const
{
    return this->list_head; // returns the head pointer
}

// Returns the tail pointer. (O(1))
template <typename Type>
Double_Node<Type> *Double_List<Type>::tail() const
{
    return this->list_tail; // returns the tail pointer
}

// Returns the number of nodes in the linked list storing a value equal to the argument, obj. (O(n))
template <typename Type>
int Double_List<Type>::count(const Type obj)
{
    Double_Node<Type> *head = this->list_head; // create a temporary head node
    int count = 0;                             // create a count variables and initialize it to 0

    while (head != NULL) // traverse the whole list
    {
        if (head->getData() == obj) // if it found the object it will increase the count
            count++;
        head = head->getNext(); // assignment the next head to the current head
    }

    return count; // returns the count variables
}

// The swap function swaps all the member variables of this linked list with those of the argument. (O(1))
template <typename Type>
void Double_List<Type>::swap(Double_List<Type> &list)
{
    // first store the original values into a different variable
    Double_Node<Type> *head = this->list_head;
    Double_Node<Type> *tail = this->list_tail;
    int size = this->list_size;

    // switch the values of the original double list with the values of the argument double list
    this->list_head = list.head();
    this->list_tail = list.tail();
    this->list_size = list.size();

    // replace the argument double list with the stored values
    list.list_head = head;
    list.list_tail = tail;
    list.list_size = size;
}

// The assignment operator makes a copy of the argument and then swaps the member variables of this doubly linked list with those of the copy. (O(nlhs + nrhs))
template <typename Type>
Double_List<Type> &Double_List<Type>::operator=(const Double_List<Type> *rhs)
{
    Double_List<Type> *copy = new Double_List<Type>(rhs); // this makes a copy of the argument "rhs"
    this->list_head = copy;                               // this will only change the original dl but the argument doesn't change
    this->list_tail = copy->tail();
}

// Creates a new Double_node<Type> storing the argument, the next pointer of which is set to the current head pointer and the previous pointer is set to nullptr. The head pointer and the previous pointer of what was the first node is set to the new node. If the list was originally empty, the tail pointer is set to point to the new node. (O(1))
template <typename Type>
void Double_List<Type>::push_front(const Type obj)
{
    Double_Node<Type> *temp = new Double_Node<Type>(obj); // create temporary node with the new object

    if (list_head == NULL) // if the head does not point to anything it means that the list is empty
    {
        list_head = temp; // change the head to the tempory pointer
        list_tail = temp; // change the tail to the tempory pointer
    }
    else
    {
        temp->setNext(list_head);            // set the temporarynext to the head pointer
        list_head = temp;                    // change the head to the tempory pointer
        list_head->getNext()->setPrev(temp); // set the previous pointer of the next node to temp
    }

    list_size++; // increase the size by 1
}

// Similar to push_front, this places a new node at the back of the list. (O(1))
template <typename Type>
void Double_List<Type>::push_back(const Type obj)
{
    Double_Node<Type> *temp = new Double_Node<Type>(obj); // create temporary node with the new object

    if (this->list_size == 0)
    {
        push_front(obj); // this one does not need to increase the size because push_front function already did it for us
    }
    else
    {
        temp->setPrev(list_tail);       // set the temporarynext to the head pointer
        list_tail = temp;               // change the head to the tempory pointer
        temp->getPrev()->setNext(temp); // set the next pointer of the previous node to temp
        list_size++;                    // increase the size
    }
}

// Delete the node at the front of the linked list and, as necessary, update the head and tail pointers and the previous pointer of any other node within the list. Return the object stored in the node being popped. Throw “underflow” exception if the list is empty. (O(1))
template <typename Type>
Type Double_List<Type>::pop_front()
{
    if (list_size == 0)
        throw underflow_error("It cannot pop from the front because the list is empty!");

    Type result = list_head->getData(); // store a variable of the first node

    if (list_size == 1) // if the size is 1 then empty the node
    {
        list_head = NULL;
        list_tail = NULL;
        list_size = 0;
    }
    else
    {
        Double_Node<Type> *temp = list_head; // create a tempory pointer of the list tail
        list_head = temp->getNext();         // set the head pointer to the next pointer
        temp->getNext()->setPrev(list_head); // set the prev pointer behind the first node to list head
        delete temp;                         // delete the first node pointer
        list_size--;                         // reduce the size by 1
    }
    return result;
}

// Similar to pop_front, delete the last node in the list. This function throws “underflow” if the list is empty. (O(1))
template <typename Type>
Type Double_List<Type>::pop_back()
{
    if (list_size == 0)
        throw underflow_error("It cannot pop from the back because the list is empty!");

    Type result = list_tail->getData(); // store a variable of the last node

    if (list_size == 1) // if the size is 1 then empty the node
    {
        list_head = NULL;
        list_tail = NULL;
        list_size = 0;
    }
    else
    {
        Double_Node<Type> *temp = list_tail; // create a tempory pointer of the list tail
        list_tail = temp->getPrev();         // set the tail pointer to the previous pointer
        temp->getPrev()->setNext(NULL);      // set the next pointer behind the last node to nullptr
        delete temp;                         // delete the last node pointer
        list_size--;                         // reduce the size by 1
    }
    return result;
}

// Delete the first node (from the front) in the linked list that contains the object equal to the argument (use == to to test for equality with the retrieved element). As necessary, update the head and tail pointers and the previous and next pointers of any other node within the list. Return the number of nodes that were deleted (0 or 1). (O(n))
template <typename Type>
int Double_List<Type>::erase(const Type obj)
{
    if (list_size == 0) // if the list is empty return 0
        return 0;

    if (list_head->getData() == obj) // if the object is at the front use the pop_front function
    {
        pop_front();
        return 1;
    }

    if (list_tail->getData() == obj) // if the object is at the back use the pop_back function
    {
        pop_back();
        return 1;
    }

    Double_Node<Type> *temp = list_head; // create a temporary pointer that point to the first pointer

    // traverse the loop to the one before the last pointer
    while (temp->getNext() != NULL && temp->getNext() != list_tail)
    {
        // if the object is already at the end it should already return so we look at the next one
        temp = temp->getNext();
        if (temp->getData() == obj)
        {
            temp->getPrev()->setNext(temp->getNext()); // set the next pointer of the prev pointer to the next node
            temp->getNext()->setPrev(temp->getPrev()); // set the prev pointer of the next pointer to the previous node
            delete temp;                               // delete the temporary pointer
            list_size--;                               // reduce the size by 1
            return 1;                                  // returns 1 as a sign of it being successful
        }
    }
    return 0;
}

// The destructor must delete each of the nodes in the linked list. (O(n))
template <typename Type>
Double_List<Type>::~Double_List()
{
    Double_Node<Type> *head = list_head; // create a head pointer to the list head
    Double_Node<Type> *temp;             // create a temporary pointer for general use

    while (head != NULL) // traverse the whole loop and delete each pointer
    {
        temp = head->getNext();
        delete head;
        head = temp;
    }

    list_head = NULL;
    list_tail = NULL;
    this->list_size = 0;
}

// A function that prints every node in the list
template <typename Type>
void Double_List<Type>::printList()
{
    if (list_size == 0)
        throw underflow_error("The list is empty and cannot be printed!");

    Double_Node<Type> *temp = this->list_head;

    cout << "[";

    while (temp != NULL)
    {
        cout << temp->getData();
        if (temp != list_tail)
            cout << " , ";
        temp = temp->getNext();
    }

    cout << "]" << endl;
}
#endif // DOUBLE_LINK_IMPLEMENTATION_H