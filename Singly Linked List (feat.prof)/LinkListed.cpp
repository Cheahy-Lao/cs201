#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "LinkedList.h"
#include <iostream>
using namespace std;

//	LinkedList() constructor, to construct an empty list
//	Input	:None
//	Output	:A new empty list
LinkedList::LinkedList()
{
    this->size = 0; // set the list'size to zero
    head = NULL;    // empty list
}

//	addNode(item), to add a new key item at the front/head of the list
//	T(n) = O(1)
//	Input	: an integer, item
//	Output	: None
void LinkedList::addNode(int item)
{
    Node *temp = new Node(item); // create a new node
    temp->next = head;           // update the head pointer
    this->head = temp;
    size++; // update the list size variable
}

//	addNode(item, prev)add a new item after a given node, prev
//	T(n) = O(1)a
//	Input	: an integer to create a new node
//			: an address of prev'node that the new node will be added next.
//	Output	: returns true if the node is successfully added, otherwise returns false
bool LinkedList::addNode(int item, Node *prev)
{
    Node *temp = new Node(item); // create a new node
    temp->next = prev->next;     // update the next pointer
    prev->next = temp;
    size++;      // update the size variable
    return true; // update is successful
}

//	deleteNode(), to delete the first node from the list
//	T(n) = O(1)
//	Input	: Node
//	Output	: returns true if the front node is successfully deleted, otherwise returns false
bool LinkedList::deleteNode()
{
    if (!(this->isEmpty())) // if the list is not empty
    {
        Node *temp = head;
        this->head = temp->next; // update the head's pointer
        this->size--;            // update the list size variable
        delete temp;             // free the memory of the deleted node
        return true;             // return true when sucessfully deleted the node
    }
    return false; // no node is deleted from the list
}

//	deleteNode(key), to delete the node that matches with the given key
//	T(n) = O(n)
//	Input	: an integer, key to delete
//	Output	: returns true if found the node and the node is deleted otherwise returns false
bool LinkedList::deleteNode(int key)
{
    if (!(this->isEmpty())) // the list is not empty
    {

        Node *prev = this->head; // temp is pointing to the head
        if (prev->data == key)   // if the first node matches (the best case O(1) with the key, call deleteNode method;
        {
            this->deleteNode();
            return true;
        }
        else // otherwise check the next node until the end of the list
        {
            Node *cur = prev->next;
            while ((cur->data != key) && (cur->next != NULL))
            {
                prev = cur;
                cur = cur->next;
            }
            if (cur->data == key) // if found the key, delete the current node
            {
                prev->next = cur->next;
                delete cur; // free the deleted node's memory
                size--;     // update the list's size
                return true;
            }
            else
                return false; // key is not found returns false, the worst case O(n)
        }
    }
    else              // if the list is empty, no node is deleted
        return false; // key is not found
}

// printList(), print all nodes
// T(n) = O(n)
// Input	: None
// Output	: List = [E1,E2,E3,...,En-1,En]
void LinkedList::printList()
{
    Node *temp = head;
    cout << "List = [";
    while (temp != NULL)
    {
        cout << temp->data;
        if (temp->next != NULL)
            cout << ",";

        temp = temp->next; // update temp to the next node
    }
    cout << "]\n";
}

// printListRevers(), print all nodes in the reverse order, helper function
// T(n) = O(n)
// Input	: None
// Output	: List = [En,En-1,En-2,...,E2,E1]
void LinkedList::printListReverse()
{
    Node *temp = this->head;
    cout << "Reversed List = [";
    printListReverse(temp);
    cout << "]\n";
}

// recursive printListReverse function called by the helper funciton
// T(n) = O(n)
void LinkedList::printListReverse(Node *list)
{
    if (list != NULL)
    {
        printListReverse(list->next);
        cout << list->data;
        if (list != head)
            cout << ",";
    }
    else
        return;
}

//	searchKey(key), search if the key is exist in the list, return the node's address if found otherwise returns NULL
//	T(n) = O(n)
//	Input	: key integer to search
//	Output	: returns the address of the key's node, otherwise if the key is not found, returns NULL.
Node *LinkedList::searchKey(int key)
{
    if (!(this->isEmpty()))
    {
        Node *temp = this->head;
        while (temp != NULL)
        {
            if (temp->data == key)
                return temp;
            else
                temp = temp->next;
        }
        return NULL;
    }
    else
        return NULL;
}

//	updateNode(Node* cur, int newData), update the cur node's data
//	T(n) = O(1)
//	Input	: the node address
//			: the new data to update to the node
//	Output	: return true if successfully updated, otherwise return false if there is no updating.

bool LinkedList::updateNode(Node *cur, int newData)
{
    if (cur != NULL)
    {
        cur->data = newData;
        return true; // successfully update the node's data
    }
    else
        return false; // no updated
}

//	isEmpty(), check if the list is empty
//	T(n) = O(1)
//	Input	: None
//	Output	: returns true if the list is empty otherwise returns false.
bool LinkedList::isEmpty()
{
    if (head == NULL)
        return true;
    else
        return false;
}

//	getSize()
//	T(n) = O(1)
//	Input	:None
//	Output	:The total number of nodes in the list
int LinkedList::getSize()
{
    return size;
}
#endif