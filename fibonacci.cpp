#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //sequencia de fibonacci
    int unt = 50;
    vector<int> ab = {0, 1};

    for (int i = 2; i <= unt; i++)
    {
        int a = ab[i - 1];
        int b = ab[i - 2];

        ab[i] = a + b;
        cout << ab[i] << endl;
    }

    return 0;
}