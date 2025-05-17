#include <iostream>
#include <vector>
using namespace std;

int main()
{
  // potencia de potencia
  vector<int> ns = {5, 2, 2};
  int vtSize = ns.size() - 1;
  int exp = 1;

  for (int i = 0; i < vtSize; i++)
  {
    exp *= ns[i + 1];

    if (i + 1 == vtSize)
      ns = {ns[0], exp};
  }

  return 0;
}