// CS201 Data Structure and Algorithm
// ------------------------------------------------------------------
// Doubly Linked List Impletmentation
// ------------------------------------------------------------------
// Team Name   : Debonair
// Section	   : 1&2
// -------------------------------------------------------------------
#include <iostream>
#include "Double_Node_Implementation.h"
#include "Double_List_Implementation.h"
using namespace std;

int main()
{
    try
    {
        cout << "____________________________________________________________________________________\n"
             << endl;
        cout << "[1] Create a new empty list of a primitive data type: This is from list 1\n";
        Double_List<int> int_list1; // create a list using the default constructor
        cout << "____________________________________________________________________________________\n"
             << endl;

        //-------------------------------------------------------------------------------------------------------

        cout << "[2] Create a new list by using the copy constructor: This is from list 1 & list 2\n";

        int_list1.push_back(1); // to push the number 1 to the back in List1
        int_list1.push_back(1); // to push the number 1 to the back in List1
        int_list1.push_back(3); // to push the number 3 to the back in List1
        int_list1.push_back(4); // to push the number 4 to the back in List1

        Double_List<int> int_list2(int_list1); // create a deep copy of the first list
        int_list2.printList();                 // print the list to check

        cout << "____________________________________________________________________________________\n"
             << endl;

        //-------------------------------------------------------------------------------------------------------

        cout << "[3] Check all the accessor functions (empty, size, front, back, head, tail, count) for an empty list: This is from list 3\n";
        Double_List<int> int_list3; // create a list using the default constructor

        if (int_list3.empty() == 0) // to check if list empty
            cout << "List is not empty.\n";
        else
            cout << "List is empty.\n";

        cout << "The size of this list is " << int_list3.size() << "\n"; // to print out size of list

        // cout << "The front of the list is " << int_list3.front() << "\n"; // to print out the front node in the list

        // cout << "The back of the list is " << int_list3.back() << "\n"; // to print out the back node in the list

        cout << "The head of the list is " << int_list3.head() << "\n"; // to print out the address of the head in the list

        cout << "The tail of the list is " << int_list3.tail() << "\n"; // to print out the address of the tail in the list

        cout << "The count of the number 1 in the list is " << int_list3.count(1) << "\n"; // to print out the count in the list

        cout << "____________________________________________________________________________________\n"
             << endl;

        //-------------------------------------------------------------------------------------------------------

        cout << "[4] Check all the accessor functions (empty, size, front, back, head, tail, count) for a non-empty list: This is from list 1 \n";

        if (int_list1.empty() == 0) // to check if list empty
            cout << "List is not empty.\n";
        else
            cout << "List is empty.\n";

        cout << "The size of this list is " << int_list1.size() << "\n"; // to print out size of list

        cout << "The front of the list is " << int_list1.front() << "\n"; // to print out the front node in the list

        cout << "The back of the list is " << int_list1.back() << "\n"; // to print out the back node in the list

        cout << "The head of the list is " << int_list1.head() << "\n"; // to print out the address of the head in the list

        cout << "The tail of the list is " << int_list1.tail() << "\n"; // to print out the address of the tail in the list

        cout << "The count of the number 1 in the list is " << int_list1.count(1) << "\n"; // to print out the count in the list

        cout << "____________________________________________________________________________________\n"
             << endl;

        //-------------------------------------------------------------------------------------------------------

        cout << "[5] Add n nodes by calling function push_front(obj): This is from list 1 \n";

        cout << "We will add 10 to the list of 1 1 3 4 and we got : \n";
        int_list1.push_front(10); // to push the number 10 to the front of List1
        int_list1.printList();    // to print out the resulting push front

        cout << "____________________________________________________________________________________\n"
             << endl;

        //-------------------------------------------------------------------------------------------------------

        cout << "[6] Add n nodes by calling function push_back(obj): This is from list 1 \n";

        cout << "We will add 19 to the list of 10 1 1 3 4 and we got : \n";
        int_list1.push_back(19); // to push the number 19 to the back of List1
        int_list1.printList();   // to print out the resulting push back

        cout << "____________________________________________________________________________________\n"
             << endl;

        //-------------------------------------------------------------------------------------------------------

        cout << "[7] Delete m nodes by calling function pop_front(): This is from list 1 \n";

        cout << "We will delete the front from the list of 10 1 1 3 4 19 and we got : \n";
        int_list1.pop_front(); // to pop the front of List 1
        int_list1.printList(); // to print out the resulting pop front

        cout << "____________________________________________________________________________________\n"
             << endl;

        //-------------------------------------------------------------------------------------------------------

        cout << "[8] Delete m nodes by calling function pop_back(): This is from list 1 \n";

        cout << "We will delete the back from the list of 1 1 3 4 19 and we got : \n";
        int_list1.pop_back();  // to pop the back of List1
        int_list1.printList(); // to print out the resulting pop back

        cout << "____________________________________________________________________________________\n"
             << endl;

        //-------------------------------------------------------------------------------------------------------

        cout << "[9] Remove a node by calling function erase(): This is from list 1 \n";

        cout << "We will erase the node of 3 from the list of 1 1 3 4 and we got : \n";
        int_list1.erase(3);    // to erase the number 3 out of List1
        int_list1.printList(); // to print out the resulting of erase of number 3

        cout << "____________________________________________________________________________________\n"
             << endl;

        //-------------------------------------------------------------------------------------------------------

        cout << "[10] Delete a list : This is from list 1 \n";

        cout << "We will now delete list 1 and we got : \n";
        //~Double_List(int_list1);
        // Under Construction
        cout << "____________________________________________________________________________________\n"
             << endl;

        //-------------------------------------------------------------------------------------------------------
    }
    catch (const underflow_error &e)
    {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}
