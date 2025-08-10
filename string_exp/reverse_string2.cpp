#include<iostream>
using namespace std;
int main()
{
    string s="Hello Programmer";
    cout<<"Before reverse="<<s;
    string reverse="";
    for(int i=s.length()-1;i>=0;i--)
    {
        reverse+=s[i];
    }
    cout<<"After reverse="<<reverse;
    return 0;
}