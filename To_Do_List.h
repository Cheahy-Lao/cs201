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
    To_Do_List();
    void setMonth(unsigned short int);
    void setDay(unsigned short int);
    void setMinutes(unsigned short int);
    void setHours(unsigned short int);
    void setComplete(bool);
    void setImportance(unsigned short int);
    void setPercentage(unsigned short int);
    void setTask(string);
    void setCategory(string);
    void setDescription(string);
    unsigned short int getDay();
    unsigned short int getMonth();
    unsigned short int getMinutes();
    unsigned short int getHours();
    unsigned short int getImportance();
    unsigned short int getPercentage();
    bool isComplete();
    string getTask();
    string getCategory();
    string getDescription();
};

#endif // TO_DO_LIST_H