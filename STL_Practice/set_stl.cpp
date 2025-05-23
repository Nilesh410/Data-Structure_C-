#include<iostream>
#include<set>
using namespace std;
int main()
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
    return 0;
}