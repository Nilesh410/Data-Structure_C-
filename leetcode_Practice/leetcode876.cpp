#include<iostream>
using namespace std;
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};
int main()
{
    midleNode(head);
    return 0;
}