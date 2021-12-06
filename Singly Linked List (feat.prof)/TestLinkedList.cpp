// CS201 LAB
// ---------------------------------------------------------------
// Singly Linked List Impletmentation
// --------------------------------------------------------------
#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
    LinkedList List1;
    List1.printList();
    List1.printListReverse();
    cout << "List's size = " << List1.getSize() << " item(s)\n";

    // Task#1
    // -------------------------------------------------------------
    // create a list of 10 20 50 5 9 7 8 6 15 12 by calling addNode method
    // -------------------------------------------------------------
    // write your code below this line
    List1.addNode(12);
    List1.addNode(15);
    List1.addNode(6);
    List1.addNode(8);
    List1.addNode(7);
    List1.addNode(9);
    List1.addNode(5);
    List1.addNode(50);
    List1.addNode(20);
    List1.addNode(10);
    // ---------------------------------------------------------------
    // print the list from the front and then from the back, by calling printList and printListReverse methods
    List1.printList();
    List1.printListReverse();
    // ----------------------------------------------------------------

    // Task#2
    // ----------------------------------------------------------------
    // add a new key item 45 at the tail of the list by calling addNode(newItem, tailPointer)
    // ----------------------------------------------------------------
    // write yourcode below this line
    List1.addNode(45, List1.searchKey(12));
    // ----------------------------------------------------------------
    List1.printList();
    // ----------------------------------------------------------------

    // Task#3
    // ----------------------------------------------------------------
    // delete the 3 front nodes from the list by calling deleteNode method
    // ----------------------------------------------------------------
    // write your code below this line
    List1.deleteNode();
    List1.deleteNode();
    List1.deleteNode();
    // ----------------------------------------------------------------
    List1.printList();
    // ----------------------------------------------------------------

    // Task#4
    // ----------------------------------------------------------------
    // delete the key items 8 and 56 from the list by calling deleteNode(key) method
    // ----------------------------------------------------------------
    // write your code below this line
    List1.deleteNode(8);
    List1.deleteNode(56); // not in the list
    // ----------------------------------------------------------------
    List1.printList();
    // ----------------------------------------------------------------

    // Task#5
    // ----------------------------------------------------------------
    // update the key item 6 to 77 by calling updateNode(key, newKey) method
    // ----------------------------------------------------------------
    // write your code below this line
    List1.updateNode(List1.searchKey(6), 77);
    // ----------------------------------------------------------------
    List1.printList();
    // ----------------------------------------------------------------

    // Task#6
    // ----------------------------------------------------------------
    // print the list's size by calling getsize method
    // ----------------------------------------------------------------
    // write your code below this line
    cout << "List's size = " << List1.getSize() << " item(s)";
    // ----------------------------------------------------------------
    // ----------------------------------------------------------------

    return 0;
}
