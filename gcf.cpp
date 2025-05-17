#include <iostream>
#include <vector>
using namespace std;

int main()
{
  //mdc
  int result = 1;
  int count = 2;
  vector<int> ns = {30, 60};

  while (true)
  {
    bool reduced = false;
    for (int i = 0; i < ns.size(); i++)
    {
      if (ns[i] % count == 0)
      {
        ns[i] /= count;
        reduced = true;
      }

      if (reduced && ns[i + 1] % count == 0)
      {
        ns[1] /= count;
        result *= count;
      }
    }

    if (!reduced)
    {
      count++;
    }
    else
    {
      count = 2;
    }

    bool isAllOne = true;
    for (int i = 0; i < ns.size(); i++)
    {
      if (ns[i] != 1)
      {
        isAllOne = false;
        break;
      }
    }

    if (isAllOne)
      break;
  }

  return 0;
}
