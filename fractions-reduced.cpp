#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    //redução de fraçoes
    vector<int> fraction = {3, 15};

    while (true)
    {
        bool reduced = false;

        for (int count = 2; count <= min(fraction[0], fraction[1]); count++) //tip: nunca precisa testar números maiores que o menor número pois qualquer número maior que o menor numero não divide.
        {
            if (fraction[0] % count == 0 && fraction[1] % count == 0)
            {
                fraction[0] /= count;
                fraction[1] /= count;
                reduced = true;
                break;
            }
        }

        if (!reduced)
            break;
    }

    cout << fraction[0] << "/" << fraction[1] << endl;
    return 0;
}