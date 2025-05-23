#include<iostream>
#include<deque>

using namespace std;
int main()
{
    deque <int> q;

    //1. Insert the element from front and back
    q.push_back(3);
    q.push_back(2);
    q.push_front(5);

    for(int num:q)
    {
        cout<<num<<" ";
    }
    cout<<endl;

    //2. Pop the element from front as well as back
    q.pop_back(); //remove 2
    q.pop_front(); //remove 5
    for(int num:q)
    {
        cout<<num<<" ";//3
    }
    cout<<endl;

    //3.Element at index
    q.push_back(10);
    q.push_front(7);
    cout<<q.at(0);//7
    cout<<endl;
    for(int num:q)
        cout<<num<<" ";
    cout<<endl;

    //4. Element at front and back
    cout<<"front element:"<<q.front()<<endl;
    cout<<"back element:"<<q.back()<<endl;

    //5.Element to erase
    q.erase(q.begin(),q.begin()+1);
    for(int num:q)
        cout<<num<<" ";
    cout<<endl;
    return 0;
}