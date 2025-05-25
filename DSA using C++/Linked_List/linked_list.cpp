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
                cout<<endl;
            }
            void insert_at_last(int value)
            {
                node *temp=head;
                node *prev=head;
                while(temp->next!=NULL)
                {
                   // prev=temp;
                    temp=temp->next;
                }
                node *temp1=new node();
                temp1->data=value;
                temp->next=temp1;
            }
            void insert_at_middle(int value,int position)
            {
                node *temp=head;
                node *prev=head;
                while(temp->data!=position)
                {
                    prev=temp;
                    temp=temp->next;
                }
                node *node1=new node();
                node1->data=value;
                node1->next=temp;
                prev->next=node1;
            }
            void delete_first()
            {
                node * temp=head;
                if(head==NULL)
                    cout<<"Linked List is empty";
                 head=temp->next;
                 delete temp;
            }
             void delete_last()
            {
                node * temp=head;
                if(head==NULL)
                    cout<<"Linked List is empty";
                while(temp->next->next!=NULL)
                {
                    temp=temp->next;
                }
                 temp->next=NULL;
            }
            void delete_at_middle(int num)
            {
                if(head==NULL)
                {
                    cout<<"Linked list is empty";
                    return;
                }
                node *temp=head;
                node *prev=NULL;
                while(temp!=NULL&&temp->data!=num)
                {
                    prev=temp;
                    temp=temp->next;
                }
                if(temp==NULL)
                {
                     cout<<"No is not found in the list";
                     return;
                }
                if(prev==NULL)
                {
                    head=head->next;
                    delete temp;
                    return;
                }
                prev->next=temp->next;
                delete temp;
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
    l1.insert_at_last(40);
    l1.insert_at_last(50);
    l1.display();
    l1.insert_at_middle(23,40);
    l1.display();
    l1.delete_first();
     l1.display();
     l1.delete_last();
     l1.display();
     l1.delete_at_middle(20);
     l1.display();
    return 0;
}