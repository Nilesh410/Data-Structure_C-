#include<iostream>
#include<list>

using namespace std;
int main()
{
    list<int> li;
    //1. Insert the element using push_back and push_front
    li.push_back(23);
    li.push_front(12);
    li.push_back(52);
    li.push_back(34);
    li.push_back(45);

    for(int num:li)
        cout<<num<<" ";
    cout<<endl;

    //2. size of list
    cout<<"size of list:"<<li.size()<<endl;

    //3. Pop the elements 
    li.pop_front();
    li.pop_back();
    for(int num:li)
        cout<<num<<" ";
    cout<<endl;

    //4.Insert function 
    li.insert(li.begin(),11);
    for(int num:li)
        cout<<num<<" ";
    cout<<endl;

    //5. Erase
    li.erase(li.begin());
    for(int num:li)
        cout<<num<<" ";
    cout<<endl;

    //6.copy
    list<int> li1(li);
     for(int num:li1)
        cout<<num<<" ";
    cout<<endl;
    
    return 0;
}