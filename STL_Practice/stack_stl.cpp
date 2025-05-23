#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack <int> s;

    //1. Insert the elements
    s.push(12);
    s.push(11);
    s.push(23);
    s.push(52);
    
    //2.size of the stack
    cout<<s.size()<<endl;
    
    //3.Display the stack elements 
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}