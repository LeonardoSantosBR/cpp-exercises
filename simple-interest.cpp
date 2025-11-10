#include <iostream>
using namespace std;
int main()
{
    int c, i, t;
    cout << "digite a quantidade de capital: ";
    cin >> c;

    cout << "quantos porcento de taxa foi aplicada: ";
    cin >> i;

    cout << "por quanto tempo o capital foi aplicado: ";
    cin >> t;

    int j = c * i * t / 100;
    return j;
}
