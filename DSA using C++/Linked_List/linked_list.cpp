#include<iostream>
using namespace std;
class node
{
    public: int data;
            node *next;
            node()
            {
                next=NULL;
            }
};
class Linked_List
{
    node  *head;
    public: Linked_List()
            {
                head=NULL;
            }
            void insert_at_begin(int value)
            {
                node *temp=new node();
                temp->data=value;
                temp->next=head;
                head=temp;
            }
            void display()
            {
                if(head==NULL)
                    cout<<"Linked List is empty";
                node *temp=head;
                while(temp!=NULL)
                {
                    cout<<temp->data<<"->";
                    temp=temp->next;
                }
            }
};
int main()
{
    cout<<"Creat a linked:";
    Linked_List l1;
    l1.insert_at_begin(10);
    l1.insert_at_begin(20);
    l1.insert_at_begin(30);
    l1.display();
    return 0;
}