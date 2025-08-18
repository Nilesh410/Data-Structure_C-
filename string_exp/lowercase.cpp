#include<iostream>
using namespace std;
int main()
{
    string s="Hello Programmer";
    for(auto&c:s)
    {
        c=(char)tolower(c);
        cout<<c<<" ";
    }
    cout<<s;
    return 0;
}