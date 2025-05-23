#include<iostream>
#include<queue>
using namespace std;
int main()
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
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}