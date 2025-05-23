#include<iostream>
#include<queue>
using namespace std;
int main()
{
    //maximum heap
    priority_queue <int> maxi;

    //minimum heap
    priority_queue <int,vector<int>,greater<int> > mini;

    maxi.push(23);
    maxi.push(12);
    maxi.push(43);
    maxi.push(34);
    mini.push(23);
    mini.push(12);
    mini.push(43);
    mini.push(34);

    int n=maxi.size();
    for(int i=0;i<n;i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    int n1=mini.size();
    for(int i=0;i<n1;i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;

    
    return 0;
}