#include <iostream>

using namespace std;

bool checkIsPrime(int numberToCheck)
{
    for (int i = 2; i < numberToCheck; i++)
    {
        if (numberToCheck % i == 0)
            return false;
    }

    return true;
}

int main()
{
    //numeros primos
    int N;
    cin >> N;

    for (int numberToCheck = 2; numberToCheck < N; numberToCheck++)
    {
        bool isPrime = checkIsPrime(numberToCheck);
        if (isPrime)
        {
            cout << numberToCheck << " ";
        }
    }
    return 0;
}
