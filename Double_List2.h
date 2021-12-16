#ifndef DOUBLE_LINK2_H
#define DOUBLE_LINK2_H
//	Team Name   : Debonair
//	Section		: 1&2

template <typename Type>
class Double_List2
{
public:
    void create();             // [Create] - a new task list (you can create an empty list first and then add a task to the list from a text file).
    void add();                // [Add] - a new task to the list (adding at the front/tail, display a sub menu).
    bool remove();             // [Remove] - a task from the list (removing from the front/tail, display a sub menu).
    Type find(const Type obj); // [Find] - a task in the list, if found, displays the task’s information.
    bool update();             // [Update] - a task in the list, correcting the task information.
    void print();              // [Print] - all tasks in the list.
    ~Double_List2();           // [Delete] - the task list.
    void sort();               // [Sort] - Sorting the task list by task's name. (BONUS)
    void append();             // [Append] - ListAB = List A + List B
    void merge();              // [Merge] - 2 sorted task lists.
};

#endif // DOUBLE_LINK2_H