#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 1, 4, 5, 7};
    deque<int> dq; // guardando indices dos elementos do vetor nums, indices em ordem decrescente
    vector<int> res;
    int k = 3;
    int left = 0;  // inicio da janela
    int right = 0; // fim da janela

    while (right < nums.size())
    {
        while (!dq.empty() && nums[dq.front()] < nums[right]) // deixa o dq sempre com o maior dos valores da janela
        {
            dq.pop_front();
        }
        dq.push_front(right);

        if (dq.back() < left) // remove do dq qualquer indice que saiu da janela atual.
        {
            dq.pop_back();
        };

        if (right + 1 >= k)
        { // valida se a janela já está cheia com k elementos pois o left so começa a andar quando a fica cheia pela 1 vez.
            res.push_back(nums[dq.back()]);
            left++;
        };

        right++;
    };

    return 0;
}
