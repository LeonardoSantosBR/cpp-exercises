#include <iostream>
#include "queue.h"
using namespace std;

int main()
{
    queue queue1;
    type_item item;
    int option;

    do
    {
        cout << "type 0 to finish stop program.\n";
        cout << "type 1 to insert into queue.\n";
        cout << "type 2 to remove item from queue.\n";
        cout << "type 3 to print queue.\n";
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "type the item to be insert:\n";
            cin >> item;
            queue1.insert(item);
            break;
        case 2:
            queue1.remove();
            break;
        case 3:
            queue1.print();
            break;
        default:
            break;
        }

    } while (option != 0);
}