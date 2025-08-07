#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<stack>
#include<queue>
#include<list>
#include<set>
#include<map>
using namespace std;

void arrayDemo()
{
    array <int,5> arr={1,56,23,5,8};

    //access loop through
    cout<<"---Access through loop---"<<endl;
    for(int num:arr)
    {
        cout<<num<<" ";
    }
    cout<<endl;

    //access
    cout<<"---Access by index and at---"<<endl; 
    cout<<"arr[3]="<<arr[3]<<endl;
    cout<<"by using at="<<arr.at(2)<<endl;
   

    //front and back 
    cout<<"---Front and Back-----"<<endl;
    cout<<"front ele="<<arr.front()<<endl;
    cout<<"back ele="<<arr.back()<<endl;

     //Begin ang end work as pointer 
     cout<<"---Beign and end---"<<endl;
    cout<<"array begin="<<arr.begin()<<endl;
    cout<<"array end="<<arr.end()<<endl;

    //size of array
    cout<<"size of array---"<<endl;
    cout<<"array size="<<arr.size()<<endl;;

    //array empty or not
    cout<<"--Empty or not---"<<endl;
    cout<<"array is empty or not="<<arr.empty()<<endl;

    //cout<<"array capacity="-> capacity cant find out ;
    //insert and delete --> 
    // arr.push_back(34);

    //Fill Function 
    cout<<"---Fill Function---"<<endl;
     arr.fill(34);
     for(int num:arr)
    {
        cout<<num<<" ";
    }
    cout<<endl;
}
void vectorDemo()
{
    vector<int> v1;
    
    //1.Insert at last
    cout<<"---1.Insert Element----"<<endl;
    v1.push_back(23);
    v1.push_back(12);
    v1.push_back(45);
    v1.push_back(56);
    v1.push_back(67);
    for(int i:v1)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //2.Size and capacity
    cout<<"---2.Size and Capacity---";
    cout<<"\nsize="<<v1.size();
    cout<<"\ncapacity="<<v1.capacity();

    //3.Remove from last
    v1.pop_back();
    for(int i:v1)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //4. front and back element
    cout<<"Front element="<<v1.front()<<endl;
    cout<<"Back element="<<v1.back()<<endl;

    //5.Begin and end 
    auto value_begin=v1.begin();
    cout<<"Begin element address="<<*(value_begin)<<endl;
    cout<<"Last element address="<<*(v1.end())<<endl;

   //6.Ineert and delete using begin
   v1.insert(v1.begin()+1,65);
   for(int i:v1)
    {
        cout<<i<<" ";
    }
    cout<<endl;
   
   //7.Delete the elements usign erase
   v1.erase(v1.begin()+1,v1.end()-2);
    for(int i:v1)
    {
        cout<<i<<" ";
    }
    
    cout<<endl;
}
void dequeDemo()
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
    
}
void stackDemo()
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
}
void queueDemo()
{
    queue <string> q;

    //1.Insert the elements
    q.push("Maharashtra");
    q.push("Gujrat");
    q.push("MadhyaPradesh");
    q.push("TamilNadu");
    
    //2.size of queue
    cout<<"size:"<<q.size()<<endl;

    //3.Display the elements
    while(!q.empty())
    {
        cout<<q.front()<<" "<<endl;
        q.pop();
    }
}
void listDemo()
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
}
void setDemo()
{
    set <int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(7);
    s.insert(7);
    s.insert(8);
    s.insert(4);
    s.insert(4);
    s.insert(5);
    cout<<"Before erase";
    for(auto i:s)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    s.erase(s.begin());
    cout<<"After erase:"<<" ";
     for(auto i:s)
     {
        cout<<i<<" ";
     }
    cout<<endl;

    //element present or not
    cout<<"Element present or not"<<endl;
    cout<<"-5 is present or not:"<<s.count(5);
}
void mapDemo()
{
    map <int,string> mp;
    mp.insert({1,"XYZ"});
    mp.insert({2,"PQR"});
    mp.insert({3,"LMN"});

    for(auto i:mp)
    {
        cout<<i.first<<" "<<i.second<<" "<<endl;
    }
    cout<<endl;

    mp.erase(2);
    mp.erase(mp.begin());
    for(auto i:mp)
    {
        cout<<i.first<<" "<<i.second<<" "<<endl;
    }
    cout<<endl;
}
int main()
{
    int choice,ch;
    do
    {
        cout<<"----STL Strcture----";
        cout<<"\n1.Array"<<"\n2.vector"<<"\n3.dequeue"<<"\n4.stack"<<"\n5.queue"<<"\n6.list"<<"\n7.set"<<"\n8.map";
        cout<<"\nSelect the STL Strcture=";
        cin>>choice;
        switch(choice)
        {
            case 1:arrayDemo();
                    break;
            case 2:vectorDemo();
                    break;
            case 3:dequeDemo();
                    break;
            case 4:stackDemo();
                    break;
            case 5:queueDemo();
                    break;
            case 6:listDemo();
                    break;
            case 7:setDemo();
                    break;
            case 8:mapDemo();
                    break;
            default:cout<<"\nInvalid case";
        }
        cout<<"Are you continue then press 1 otherwise 0";
        cin>>ch;
    } while (ch!=0);
    return 0;
}