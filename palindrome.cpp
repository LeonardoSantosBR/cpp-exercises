#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int n = -121;
    string st = to_string(n);
    string str = st;
    reverse(str.begin(), str.end());

    bool r = st == str ? true : false;
    return r;
}