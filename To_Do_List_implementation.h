#ifndef TO_DO_LIST_IMPLEMENTATION_H
#define TO_DO_LIST_IMPLEMENTATION_H

#include "To_Do_List.h"
#include <string>
using namespace std;

To_Do_List::To_Do_List()
{
    day = 1;
    month = 1;
    minutes = 0;
    hours = 0;
    importance = 0;
    percentage = 0;
    complete = false;
    task = "";
    category = "";
    description = "";
}

void To_Do_List::setMonth(unsigned short int month)
{
    this->month = month;
}

void To_Do_List::setDay(unsigned short int day)
{
    this->day = day;
}

void To_Do_List::setMinutes(unsigned short int minute)
{
    this->minutes = minutes;
}

void To_Do_List::setHours(unsigned short int hour)
{
    this->hours = hours;
}

void To_Do_List::setComplete(bool complete)
{
    this->complete = complete;
}

void To_Do_List::setImportance(unsigned short int importance)
{
    this->importance = importance;
}

void To_Do_List::setPercentage(unsigned short int percentage)
{
    this->percentage = percentage;
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

unsigned short int To_Do_List::getDay()
{
    return this->day;
}

unsigned short int To_Do_List::getMonth()
{
    return this->month;
}

unsigned short int To_Do_List::getMinutes()
{
    return this->minutes;
}

unsigned short int To_Do_List::getHours()
{
    return this->hours;
}

unsigned short int To_Do_List::getImportance()
{
    return this->importance;
}

unsigned short int To_Do_List::getPercentage()
{
    return this->percentage;
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

#endif // TO_DO_LIST_IMPLEMENTATION_H