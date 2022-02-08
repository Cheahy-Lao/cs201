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
#include "To_Do_List_Implementation.h"
using namespace std;

int main(int argc, char **argv)
{
     cout << "____________________________________________________________________________________\n"
          << endl;
     cout << "[1] Create a new empty to-do-list\n";
     To_Do_List task;
     Double_List<To_Do_List> list1; // create a list using the default constructor
     cout << "____________________________________________________________________________________\n"
          << endl;
     task.create(list1, "test.txt");
     task.sort(list1);
     task.print(list1);
     // To_Do_List hello;
     // Double_List<To_Do_List> bye;
     // hello.create(bye, "testcase.txt");
     // hello.print(bye);
     // Double_List<To_Do_List> bruh;
     // hello.add(bruh);
     // Double_List<To_Do_List> updated;
     // hello.append(bye, bruh, updated);
     // hello.print(updated);
     // here is my main (Vannara)
     // imma stretch a bit uwu
     return 0;
} // it kinda works xd we just have to make it nice and clean ._.
// yeh but those are bonus so i think its ok if we dont do it but lets do it uwu //.......
// i will make some change toward the print soon
// sure
//  I fucking pass out ASbdJIASBD
