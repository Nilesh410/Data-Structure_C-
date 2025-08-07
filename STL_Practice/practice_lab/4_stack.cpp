#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack <int> s;

    //1. Insert the elements
    cout<<"---Push the elements----"<<endl;
    cout<<"12 11 23 52"<<endl;
    s.push(12);
    s.push(11);
    s.push(23);
    s.push(52);
    cout<<endl;

    //2.size of the stack
    cout<<"size of stack="<<s.size()<<endl;

    
    //3.Display the stack elements 
    cout<<"Stack elements are from top to bottom:"<<endl;
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}