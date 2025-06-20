#include<iostream>
using namespace std;
class Node
{
    public: int value;
            Node *prev;
            Node *next;
            Node(int data)
            {
                value=data;
                prev=NULL;
                next=NULL;
            }
};
class DLL
{
    Node *head=NULL;
    public :
            void insert_at_last(int data)
            {
                  Node* temp=new Node(data);
                  Node* t1=head;
                  if(head==NULL)
                  {
                    head=temp;
                  }  
                  else
                  {
                    while(t1->next!=NULL)
                    {
                        t1=t1->next;
                    }
                    t1->next=temp;
                    temp->prev=t1;
                  }
            }
};
int main()
{
    int num,choice,ch;
    cout<<"Created empty double linked list"<<endl;
    DLL d1;
    do
    {
        cout<<"Operation List"<<endl;
        cout<<"1.Insert at end"<<endl;
        cout<<"Select the operations=>";
        cin>>choice;
        switch(choice)
        {
            case 1:cout<<"Enter the number to insert=>";
                   cin>>num;
                   d1.insert_at_last(num);
                   break;
            default:cout<<"Invalid operation"<<endl;
                    break;
        }
        cout<<"Do you want to continue then press 1 otherwise 0:=>";
        cin>>ch;
    } while (ch!=0);
    return 0;
}