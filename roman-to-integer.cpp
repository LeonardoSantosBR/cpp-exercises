#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    string s = "XX";
    unordered_map<char, int> romanNumerals = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int ipp = i + 1;
        int currentValue = romanNumerals[s[i]];
        int nextValue = romanNumerals[s[ipp]];

        if (currentValue < nextValue)
        {
            count -= romanNumerals[s[i]];
        }
        else
        {
            count += romanNumerals[s[i]];
        }
    }
    count << count;
    return 0;
}