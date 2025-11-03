#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    // 1010,110010,1100100
    int n = 1100100;
    std::string ns = std::to_string(n);
    std::vector<char> ch(ns.begin(), ns.end());

    int x = 1;
    std::vector<int> r = {};
    for (int i = 0; i < ch.size(); i++)
    {
        int ltIndex = ch[i] - '0';
        int exp = ch.size() - x;
        x++;
        int l = 1;

        for (int i = 0; i < exp; i++)
        {
            l *= 2;
        };

        if (exp == 0)
            l = 1;

        r.push_back(ltIndex * l);
    };

    int sum = 0;
    for (int i = 0; i < r.size(); i++)
    {
        sum += r[i];
    };

    cout << sum;
    return sum;
}
