#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    std::stack<char> tmpst;
    std::vector<char> expression = {'(', '(', ')', '(', ')', ')', '(', ')', '('};
    for (int i = 0; i < expression.size(); i++)
    {
        if (expression[i] == '(')
        {
            tmpst.push(expression[i]);
        }
        else
        {
            tmpst.pop();
        };
    };
    return tmpst.empty();
}