#include <iostream>
#include "queue.h"
using namespace std;

queue::queue()
{
    size= 0;
    first_index = 0;
    last_index = 0;
    estructure = new type_item[max_itens];
}
queue::~queue()
{
    delete[] estructure;
}
bool queue::is_full()
{
    return (last_index - first_index == max_itens);
}
bool queue::is_empty()
{
    return (first_index == last_index);
}
void queue::insert(type_item item)
{
    if (is_full())
    {
        cout << "The Queue is Full.\n";
    }
    else
    {
        estructure[last_index % max_itens] = item;
        size++;
        last_index++;
    }
}
queue::remove()
{
    if (is_empty())
    {
        cout << "The Queue is empty.\n";
        return 0;
    }
    else
    {
        first_index++;
        return estructure[(first_index - 1) % max_itens];
    }
}
void queue::print()
{
    cout << "Queue: [";
    for (size_t i = 0; i < size; i++)
    {
        if (i > 0)
            cout << ", ";
        cout << estructure[i % max_itens];
    }
    cout << "]\n";
}