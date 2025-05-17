#include <iostream>
#include <vector>
using namespace std;

int main()
{
  //soma fraçoes
  int num1, den1, num2, den2;
  cout << "Enter numerator of first fraction" << endl;
  cin >> num1;

  cout << "Enter denominator of first fraction" << endl;
  cin >> den1;

  cout << "Enter numerator of second fraction" << endl;
  cin >> num2;

  cout << "Enter denominator of second fraction" << endl;
  cin >> den2;

  int fac = 1;
  int count = 2;
  vector<int> denominators = {den1, den2};

  while (true)
  {
    bool finished = true;

    for (int index = 0; index < denominators.size(); index++)
    {
      if (denominators[index] % count == 0)
      {
        denominators[index] /= count;
        finished = false;
      }
    }

    if (finished)
    {
      count++;
    }
    else
    {
      fac *= count;
      count = 2;
    }

    bool allOne = true;
    for (int i = 0; i < denominators.size(); i++)
    {
      if (denominators[i] != 1)
      {
        allOne = false;
        break;
      }
    }

    if (allOne)
      break;
  }

  // fraction resulted
  vector<int> resultFraction = {((fac / den1 * num1) + (fac / den2 * num2)), fac};
  return 0;
}
