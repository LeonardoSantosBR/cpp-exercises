#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
    stack stack1;
    type_item item;
    int option;

    do
    {
        cout << "type 0 to finish stop program.\n";
        cout << "type 1 to insert into stack.\n";
        cout << "type 2 to remove item from stack.\n";
        cout << "type 3 to print stack.\n";
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "type the item to be insert:\n";
            cin >> item;
            stack1.insert(item);
            break;
        case 2:
            cout << "type the item to be remove:\n";
            cin >> item;
            stack1.remove();
            break;
        case 3:
            stack1.print();
            break;
        default:
            break;
        };
    } while (option != 0);

    return 0;
}
