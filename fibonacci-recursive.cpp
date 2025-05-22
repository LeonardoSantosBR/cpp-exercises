#include <iostream>
#include <vector>
using namespace std;

// F(0) = 0, F(1) = 1 , F(n) = F(n - 1) + F(n - 2), for n > 1.

int frml(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return frml(n - 1) + frml(n - 2);
}

int calc(int i)
{
    if (i == 1)
        return 0;
    if (i == 1)
        return 1;

    int a = i - 1;
    int b = i - 2;

    return frml(a) + frml(b);
}

int main()
{
    // sequencia de fibonacci com recursao
    int unt = 10;
    vector<int> r = {0, 1};
    for (int i = 2; i <= unt; i++)
    {
        r[i] = calc(i);
        cout << r[i] << endl;
    }

    return 0;
}