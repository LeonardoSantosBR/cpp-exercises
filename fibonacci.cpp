#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //sequencia de fibonacci
    int unt = 50;
    vector<int> ab = {0, 1};

    for (int i = 2; i <= unt; i++)
    {
        int a = ab[i - 1];
        int b = ab[i - 2];

        ab[i] = a + b;
        cout << ab[i] << endl;
    }

    return 0;
}

// * leetcode , mais inteligente, utiliza a variavel c como temporaria e depois introduz
//   na variavel b.atualizando a e b consecutivamente.
// class Solution {
// public:
//     int fib(int n) {
//         if (n == 0)
//             return 0;
//         if (n == 1)
//             return 1;

//         int a = 0, b = 1, c;
//         for (int i = 2; i <= n; i++) {
//             c = a + b;
//             a = b;
//             b = c;
//         }
//         return b;
//     }
// };