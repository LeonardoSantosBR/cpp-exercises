#include <iostream>

using namespace std;

int main()
{
    //fatoraçao
    int n;
    cin >> n;

    for (int i = 2; n != 1; i++)
    {
        while (n % i == 0)
        {
            cout << i << ((n / i == 1) ? "" : ".");
            n /= i;
        }
    }

    return 0;
}
