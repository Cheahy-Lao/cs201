// unordered list
#include "Node.h"

class LinkedList
{
    Node *head; // store the address of the first node
    int size;   // number of nodes in the list
public:
    LinkedList();                            // construct a list
    void addNode(int item);                  // add a new item to the front of the list
    bool addNode(int item, Node *prev);      // add a new item after the prev node
    bool deleteNode();                       // delete the front node of the list
    bool deleteNode(int key);                // delete the cur node
    void printList();                        // print all nodes
    void printListReverse();                 // print the list in the reverse order, help function
    void printListReverse(Node *list);       // print the list in the reverse order, recursive function
    Node *searchKey(int key);                // search if the key is exist in the list, return the node's address if found otherwise return NULL
    bool updateNode(Node *cur, int newData); // update the current node's data
    bool isEmpty();                          // check if the list is empty
    int getSize();                           // returns the number of nodes in the list
};