#ifndef TO_DO_LIST_H
#define TO_DO_LIST_H
#include "Double_List_Implementation.h"
#include <string>
using namespace std;

class To_Do_List
{
private:
    int day;
    int month;
    int year;
    bool complete;
    string task;
    string category;
    string description;

public:
    To_Do_List();
    To_Do_List(string task, string category, int day, int month, int year, string description);
    int getDay();
    int getMonth();
    int getYear();
    bool isComplete();
    string getTask();
    string getCategory();
    string getDescription();
    void setDay(int day);
    void setMonth(int month);
    void setYear(int year);
    void setComplete(bool complete);
    void setTask(string task);
    void setCategory(string category);
    void setDescription(string description);
    void create(Double_List<To_Do_List> &, string);       // [Create] - a new task list (you can create an empty list first and then add a task to the list from a text file).
    void add(Double_List<To_Do_List> &task);              // [Add] - a new task to the list (adding at the front/tail, display a sub menu).
    void remove(Double_List<To_Do_List> &task);           // [Remove] - a task from the list (removing from the front/tail, display a sub menu).
    void find(Double_List<To_Do_List> &task, string key); // [Find] - a task in the list, if found, displays the task’s information.
    void update(Double_List<To_Do_List> &task);           // [Update] - a task in the list, correcting the task information.
    void print(Double_List<To_Do_List> &task);            // [Print] - all tasks in the list.
    ~To_Do_List();                                        // [Delete] - the task list.
    void sort(Double_List<To_Do_List> &task);             // [Sort] - Sorting the task list by task's name. (BONUS)
    void append();                                        // [Append] - ListAB = List A + List B
    void merge();                                         // [Merge] - 2 sorted task lists.
};

#endif // TO_DO_LIST_H