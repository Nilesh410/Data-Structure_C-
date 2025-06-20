#include<iostream>
using namespace std;
bool isPalindrome(ListNode *head)
{
    ListNode *temp=head;
    stack <int> s;
    while(temp!=NULL)
    {
        s.push(temp->value);
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL)
    {
        if(s.top()==temp->value)
        {
            temp=temp->next;
            s.pop();
        }
        else
            return false;
    }
    return true;
}
int main()
{
    isPlaindrom(head);
    return 0;
}