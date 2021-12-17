#ifndef TO_DO_LIST_H
#define TO_DO_LIST_H

#include <string>
using namespace std;

class To_Do_List
{
private:
    unsigned short int day;
    unsigned short int month;
    unsigned short int minutes;
    unsigned short int hours;
    unsigned short int importance;
    unsigned short int percentage;
    bool complete;
    string task;
    string category;
    string description;

public:
    void create(); // [Create] - a new task list (you can create an empty list first and then add a task to the list from a text file).
    void add();    // [Add] - a new task to the list (adding at the front/tail, display a sub menu).
    bool remove(); // [Remove] - a task from the list (removing from the front/tail, display a sub menu).
    void find();   // [Find] - a task in the list, if found, displays the task’s information.
    bool update(); // [Update] - a task in the list, correcting the task information.
    void print();  // [Print] - all tasks in the list.
    ~To_Do_List(); // [Delete] - the task list.
    void sort();   // [Sort] - Sorting the task list by task's name. (BONUS)
    void append(); // [Append] - ListAB = List A + List B
    void merge();  // [Merge] - 2 sorted task lists.
};

#endif // TO_DO_LIST_H