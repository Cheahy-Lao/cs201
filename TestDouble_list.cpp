// CS201 Data Structure and Algorithm
// ------------------------------------------------------------------
// Doubly Linked List Impletmentation
// ------------------------------------------------------------------
// Team Name   : Debonair
// Section	   : 1&2
// -------------------------------------------------------------------
#include <iostream>
#include "Double_List.cpp"
using namespace std;

int main()
{
    Double_List<int> int_list1;
    // Double_List<int> int_list2 = int_list2;
    cout << int_list1.empty() << endl;
    cout << int_list1.size() << endl;
    cout << int_list1.front() << endl;
    cout << int_list1.back() << endl;
    cout << int_list1.head() << endl;
    cout << int_list1.tail() << endl;
    cout << int_list1.count() << endl;

    int_list1.push_front(6);
    int_list2.push_back(9);
    int_list1.pop_front();
    int_list2.pop_back();
    int_list1.erase(6);

    delete int_list1;
    return 0;
}
