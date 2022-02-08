
#ifndef TO_DO_LIST_IMPLEMENTATION_H
#define TO_DO_LIST_IMPLEMENTATION_H
#include "Double_List_Implementation.h"
#include "To_Do_List.h"
#include <string>
#include <fstream>
#include <limits>
using namespace std;

To_Do_List::To_Do_List()
{
    this->task = "";
    this->category = "";
    this->day = 0;
    this->month = 0;
    this->year = 0;
    this->description = "";
}

To_Do_List::To_Do_List(string task, string category, int day, int month, int year, string description)
{
    this->task = task;
    this->category = category;
    this->day = day;
    this->month = month;
    this->year = year;
    this->description = description;
}
int To_Do_List::getDay()
{
    return this->day;
}
int To_Do_List::getMonth()
{
    return this->month;
}
int To_Do_List::getYear()
{
    return this->year;
}
bool To_Do_List::isComplete()
{
    return this->complete;
}
string To_Do_List::getTask()
{
    return this->task;
}
string To_Do_List::getCategory()
{
    return this->category;
}
string To_Do_List::getDescription()
{
    return this->description;
}
void To_Do_List::setDay(int day)
{
    this->day = day;
}
void To_Do_List::setMonth(int month)
{
    this->month = month;
}
void To_Do_List::setYear(int year)
{
    this->year = year;
}
void To_Do_List::setComplete(bool complete)
{
    this->complete = complete;
}
void To_Do_List::setTask(string task)
{
    this->task = task;
}
void To_Do_List::setCategory(string category)
{
    this->category = category;
}
void To_Do_List::setDescription(string description)
{
    this->description = description;
}
// [Create] - a new task list (you can create an empty list first and then add a task to the list from a text file).
void To_Do_List::create(Double_List<To_Do_List> &task, string filename)
{
    ifstream file(filename);
    string tempTask;
    string tempCategory;
    string tempDay;
    string tempMonth;
    string tempYear;
    string tempDescription;
    if (file.is_open())
    {
        while (!file.eof())
        {
            getline(file, tempTask, '|');
            getline(file, tempCategory, '|');
            getline(file, tempDay, '/');
            getline(file, tempMonth, '/');
            getline(file, tempYear, '|');
            getline(file, tempDescription);
            To_Do_List *temp = new To_Do_List(tempTask, tempCategory, stoi(tempDay), stoi(tempMonth), stoi(tempYear), tempDescription);
            task.push_back(*temp);
        }
    }
    file.close();
}

// [Add] - a new task to the list (adding at the front/tail, display a sub menu).
void To_Do_List::add(Double_List<To_Do_List> &task)
{
    string tempTask;
    string tempCategory;
    int tempDay;
    int tempMonth;
    int tempYear;
    string tempDescription;
    cout << "Name Your Task:";
    getline(cin, tempTask);
    cout << endl
         << "Name Your Task's Category:";
    getline(cin, tempCategory);
    cout << endl
         << "Due Day:";
    cin >> tempDay;
    cout << endl
         << "Due Month:";
    cin >> tempMonth;
    cout << endl
         << "Due Year:";
    cin >> tempYear;
    cin.ignore();
    cout << endl
         << "Provide Task's Description (optional):";
    getline(cin, tempDescription);

    To_Do_List *temp = new To_Do_List(tempTask, tempCategory, tempDay, tempMonth, tempYear, tempDescription);

    // to check users whether to push front or back
    int check; // lemme do the push front or back with switch case?
    bool validate = true;

    while (validate)
    {

        cout << "To Push Task to Front input 1 | To Push Task to Back input 2 :\n"; // sure
        cin >> check;

        switch (check)
        {
        case 1:
            task.push_front(*temp);
            validate = false;
            break;
        case 2:
            task.push_back(*temp);
            validate = false;
            break;
        default:
            cout << "Error! Please either enter 1 or 2 as your option." << endl;
            validate = true;
            break;
        }
    }
}

// [Remove] - a task from the list (removing from the front/tail, display a sub menu).
void To_Do_List::remove(Double_List<To_Do_List> &task)
{
    print(task);
    int choice;
    bool validate = true;

    while (validate)
    {
        cout << "To Remove from Front input 1 | To Remove from Back input 2 :\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            task.pop_front();
            validate = false;
            break;
        case 2:
            task.pop_back();
            validate = false;
            break;
        default:
            cout << "Error! Please either enter 1 or 2 as an option." << endl;
            validate = true;
            break;
        }
    }
}

// [Find] - a task in the list, if found, displays the task’s information.
void To_Do_List::find(Double_List<To_Do_List> &task, string key)
{
    string taskName;
    cout << "Name of Task to Search:";
    getline(cin, taskName);
    Double_Node<To_Do_List> *head = task.head();
    while (head != NULL)
    {
        if (head->getData().getTask() == key)
        {
            cout << head->getData().getTask() << " ";
            cout << head->getData().getCategory() << " ";
            cout << head->getData().getDay() << " ";
            cout << head->getData().getMonth() << " ";
            cout << head->getData().getYear() << " ";
            cout << head->getData().getDescription() << "\n";
        }
        head = head->getNext();
    }
    cout << endl
         << "Task not found.";
}

// [Update] - a task in the list, correcting the task information.
void To_Do_List::update(Double_List<To_Do_List> &hello)
{

    this->print(hello);
    string tempTask;
    string tempCategory;
    int tempDay;
    int tempMonth;
    int tempYear;
    string tempDescription;
    string taskName;
    cout << "Name of Task to Update:";
    getline(cin, taskName);
    Double_Node<To_Do_List> *head = hello.head();
    while (head != NULL)
    {
        if (head->getData().getTask() == taskName)
        {
            cout << "Which data do you want to update?\n";
            cout << "1. Task\n";
            cout << "2. Category\n";
            cout << "3. Day\n";
            cout << "4. Month\n";
            cout << "5. Year\n";
            cout << "6. Description\n";
            bool validate = true;
            while (validate)
            {
                int option;
                cin >> option;

                switch (option)
                {
                case 1:
                    cout << "Updated Task Name: ";
                    getline(cin, tempTask);
                    head->getData().setTask(tempTask);
                    validate = false;
                    break;
                case 2:
                    cout << "Updated Category Name: ";
                    getline(cin, tempCategory);
                    head->getData().setCategory(tempCategory);
                    validate = false;
                    break;
                case 3:
                    cout << "Updated Day: ";
                    cin >> tempDay;
                    head->getData().setDay(tempDay);
                    validate = false;
                    break;
                case 4:
                    cout << "Updated Month: ";
                    cin >> tempMonth;
                    head->getData().setMonth(tempMonth);
                    validate = false;
                    break;
                case 5:
                    cout << "Updated Year: ";
                    cin >> tempYear;
                    head->getData().setYear(tempYear);
                    validate = false;
                    break;
                case 6:
                    cout << "Updated Description: ";
                    getline(cin, tempDescription);
                    head->getData().setDescription(tempDescription);
                    validate = false;
                    break;
                default:
                    cout << "Error! Please enter a number between 1 to 6 as an option." << endl;
                    validate = true;
                    break;
                }
            }
        }
        head = head->getNext();
    }
}

// [Print] - all tasks in the list.
void To_Do_List::print(Double_List<To_Do_List> &task)
{
    Double_Node<To_Do_List> *head = task.head();
    if (head->getData().getTask().length() > head->getData().getDescription().length())
    {
        cout << "#";
    }
    while (head != NULL)
    {
        cout << head->getData().getTask() << endl;
        cout << head->getData().getCategory() << endl;
        cout << head->getData().getDay() << "/" << head->getData().getMonth() << "/" << head->getData().getYear() << endl;
        cout << head->getData().getDescription() << endl;
        head = head->getNext();
    }
}
//  [Delete] - the task list.
To_Do_List::~To_Do_List()
{
}
// [Sort] - Sorting the task list by task's name. (BONUS)
void To_Do_List::sort(Double_List<To_Do_List> &task)
{
    Double_Node<To_Do_List> *temp = task.head();
    Double_Node<To_Do_List> *next = temp->getNext();
    To_Do_List tempInfo;
    if (temp == NULL)
    {
        return;
    }
    else
    {
        while (temp->getNext() != NULL)
        {
            while (next != NULL)
            {
                if (temp->getData().getTask() > next->getData().getTask())
                {
                    tempInfo = next->getData();
                    next->setData(temp->getData());
                    temp->setData(tempInfo);
                }
                next = next->getNext();
            }
            temp = temp->getNext();
            next = temp->getNext();
        }
    }
}
// [Append] - ListAB = List A + List B (The first and second parameters are the lists that you want to append and the third is the new appended list)
void To_Do_List::append(Double_List<To_Do_List> &task, Double_List<To_Do_List> &hello, Double_List<To_Do_List> &append)
{
    append = task;
    Double_Node<To_Do_List> *head = hello.head();
    while (head != NULL)
    {
        string tempTask;
        string tempCategory;
        int tempDay;
        int tempMonth;
        int tempYear;
        string tempDescription;
        tempTask = head->getData().getTask();
        tempCategory = head->getData().getCategory();
        tempDay = head->getData().getDay();
        tempMonth = head->getData().getMonth();
        tempYear = head->getData().getYear();
        tempDescription = head->getData().getDescription();
        To_Do_List *temp = new To_Do_List(tempTask, tempCategory, tempDay, tempMonth, tempYear, tempDescription);
        append.push_back(*temp);
        head = head->getNext();
    }
    cout << "Append Successful" << endl
         << endl;
}

// [Merge] - 2 sorted task lists.
void To_Do_List::merge()
{
}

#endif // TO_DO_LIST_IMPLEMENTATION_H