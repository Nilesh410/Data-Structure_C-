#include<iostream>
#include<map>
using namespace std;
int main()
{
    map <int,string> mp;
    mp.insert({1,"Ridant"});
    mp.insert({2,"Gaurang"});
    mp.insert({3,"kavya"});

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
    return 0;
}