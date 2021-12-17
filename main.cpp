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
#include "To_Do_List_implementation.h"
using namespace std;

int main(int argc, char **argv)
{
     To_Do_List task;
     task.create();
     task.add();
     task.remove();
     task.find();
     task.update();
     task.print();
     task.sort();
     task.append();
     task.merge();
     return 0;
}
