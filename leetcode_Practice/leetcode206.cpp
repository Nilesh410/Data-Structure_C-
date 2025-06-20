#include<iostream>
using namespace std;
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr=head;
        ListNode* prev=nullptr;
        while(curr!=NULL)
        {
            ListNode* next1=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next1;
        }
        return prev;
    }
};
int main()
{   Solution s;
    s.reverseList(head;)
    return 0;
}