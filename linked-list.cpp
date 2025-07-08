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
    ListNode* firstNode = new ListNode(10);
    ListNode* secondNode = new ListNode(5);
    ListNode* thirdNode = new ListNode(23);
    ListNode* fourthNode = new ListNode(5);

    firstNode->next = secondNode;
    secondNode->next = thirdNode;
    thirdNode->next = fourthNode;
    fourthNode->next= firstNode;
    
    return 0;
}
