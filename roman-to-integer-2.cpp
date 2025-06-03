#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s = "XX";
    vector<pair<string, int>> romanNumerals = {
        {"M", 1000}, {"CM", 900}, {"D", 500}, {"CD", 400}, {"C", 100}, {"XC", 90}, {"L", 50}, {"XL", 40}, {"X", 10}, {"IX", 9}, {"V", 5}, {"IV", 4}, {"I", 1}
    };
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int ipp = i + 1;
        int currentValue = romanNumerals[s[i]].second;
        int nextValue = romanNumerals[s[ipp]].second;

        if(currentValue < nextValue){
            count -= romanNumerals[s[i]].second;
        }else{
            count += romanNumerals[s[i]].second;
        }
    }
    cout << count;
    return 0;
}