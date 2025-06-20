#include<iostream>
using namespace std;
ListNode * intersectionNode(Listnode * headA, ListNde* headB)
{
    ListNode *tempA=headA;
    ListNode *tempB=headB;

    while(tempA!=tempB)
    {
        tempA=tempA?tempA->next:headB;
        tempB=tempB?tempB->next:headA;
    }
    return tempA;
}
int main()
{ 
    intersectionNode(headA,headB);
    return 0;
}