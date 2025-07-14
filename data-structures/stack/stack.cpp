#include <iostream>
#include "stack.h"
using namespace std;

stack::stack()
{
    size = 0;
    estructure = new type_item[max_itens];
}

stack::~stack()
{
    delete[] estructure;
}

bool stack::is_full()
{
    return (size == max_itens);
}

bool stack::is_empty()
{
    return (size == 0);
}

void stack::insert(type_item item)
{
    if (!is_full())
    {

        estructure[size] = item;
        size++;
    }
    else
    {
        cout << "The Stack is Full.";
    }
}

stack::remove()
{
    if (!is_empty())
    {
        size--;
        return estructure[size];
    }
    else
    {
        cout << "The Stack is Empty.";
        return 0;
    }
}

stack::current_quantity()
{
    return size;
}

void stack::print()
{
    cout << "Stack: [";
    for (size_t i = 0; i < size; i++)
    {
        if (i > 0)
            cout << ", ";
        cout << estructure[i];
    }
    cout << "]\n";
}