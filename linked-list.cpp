#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode* next;

    ListNode(int x) : val(x), next(nullptr) {}
};

int main()
{
    ListNode *node = new ListNode(10);
    cout << "Valor do nó: " << node->val << endl;
    return 0;
}
