#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> q;

    //1.Insert the element
    cout<<"---Insert the element front and back----"<<endl;
    cout<<"push_back 12:"<<endl;
    cout<<"push_front 23:"<<endl;
    cout<<"push_back 56:"<<endl;
    cout<<"push_front 87:"<<endl;

    q.push_back(12);
    q.push_front(23);
    q.push_back(56);
    q.push_front(87);

    //2.Access the elments
    cout<<"---Access the elements----"<<endl;
    for(auto num:q)
    {
        cout<<num<<" ";
    }
    cout<<endl;

    //3.Using at,front,back
    cout<<"---Use of at front and back---"<<endl;
    cout<<"Value at index 2="<<q.at(2)<<endl;
    cout<<"element at front="<<q.front()<<endl;
    cout<<"element at back="<<q.back()<<endl;

    //4.Pop from front and back
    cout<<"---Delete from front and back----"<<endl;
    q.pop_back();
    q.pop_front();
    for(auto num:q)
    {
        cout<<num<<" ";
    }
    cout<<endl;

    //5.Insert and delte any where
    cout<<"---Insert and delete any where---"<<endl;
    q.insert(q.begin()+1,90);
    q.insert(q.begin()+2,2,67);
    q.erase(q.begin()+2,q.end()-2);
    for(auto num:q)
    {
        cout<<num<<" ";
    }
    cout<<endl;
   
     //6.Check the size and capacity of deque
     cout<<"---Check the size and capacity of deque---"<<endl;
     cout<<"Size of deque:"<<q.size()<<endl;
    
    return 0;
}