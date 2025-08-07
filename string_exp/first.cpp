#include<iostream>
using namespace std;
int main()
{
    string s="Hello Programmer";
    cout<<"string length="<<s.length();
    for(int i=0;i<s.length();i++)
    {
        cout<<s[i];
    }
    cout<<endl;
    return 0;
}