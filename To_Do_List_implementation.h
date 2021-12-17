#ifndef TO_DO_LIST_IMPLEMENTATION_H
#define TO_DO_LIST_IMPLEMENTATION_H

#include "To_Do_List.h"
#include <string>
using namespace std;

// [Create] - a new task list (you can create an empty list first and then add a task to the list from a text file).
template <typename Type>
void To_Do_List<Type>::create()
{
}
// [Add] - a new task to the list (adding at the front/tail, display a sub menu).
template <typename Type>
void To_Do_List<Type>::add()
{
}
// [Remove] - a task from the list (removing from the front/tail, display a sub menu).
template <typename Type>
bool To_Do_List<Type>::remove()
{
}
// [Find] - a task in the list, if found, displays the task’s information.
template <typename Type>
Type To_Do_List<Type>::find(const Type obj)
{
}
// [Update] - a task in the list, correcting the task information.
template <typename Type>
bool To_Do_List<Type>::update()
{
}
// [Print] - all tasks in the list.
template <typename Type>
void To_Do_List<Type>::print()
{
}
// [Delete] - the task list.
template <typename Type>
To_Do_List<Type>::~To_Do_List()
{
}
// [Sort] - Sorting the task list by task's name. (BONUS)
template <typename Type>
void To_Do_List<Type>::sort()
{
}
// [Append] - ListAB = List A + List B
template <typename Type>
void To_Do_List<Type>::append()
{
}
// [Merge] - 2 sorted task lists.
template <typename Type>
void To_Do_List<Type>::merge()
{
}

#endif // TO_DO_LIST_IMPLEMENTATION_H