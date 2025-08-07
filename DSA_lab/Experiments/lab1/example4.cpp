#include<iostream>
using namespace std;
class Node 
{
    private: int data;
             Node * ptr;
    public:Node (int data)
           {
             this->data=data;
             ptr=nullptr;
           }
           void display()
           {
              cout<<"Current node data="<<data;
              if(ptr!=nullptr)
                cout<<"next node data="<<ptr->data;
             else
                cout<<"next node is not present";
           }       
};
int main()
{
    Node n1(10);
    n1.display();
    return 0;
}