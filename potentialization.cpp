#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int result = 1;
  vector<int> N = {9, 3};

  for (int i = 0; i < N[1]; i++)
  {
    result *= N[0];
  }

  cout << result;
  return 0;
}
