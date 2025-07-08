#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(nullptr) {}
};

int main()
{
    // criando os nós
    ListNode *firstNode = new ListNode(1); //head
    ListNode *secondNode = new ListNode(2);
    ListNode *thirdNode = new ListNode(5);
    ListNode *fourthNode = new ListNode(3);
    ListNode *fifthNode = new ListNode(5);

    // criando ciclo
    firstNode->next = secondNode;
    secondNode->next = thirdNode;
    thirdNode->next = fourthNode;
    fourthNode->next = fifthNode;
    fifthNode->next = secondNode;

    // algoritmo floyd - tartaruga e lebre
    ListNode *slow = firstNode;
    ListNode *fast = firstNode;

    bool thereIsCyle = false;
    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            thereIsCyle = true;
            return;
        };
    }

    return 0;
}
