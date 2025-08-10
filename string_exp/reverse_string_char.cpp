//Reverse the string using char wise and origianl string is manipulate 
#include<iostream>
using namespace std;

int main()
{
    string s="Hello Programmer";
    int n=s.length();
    for(int i=0;i<n/2;i++)
    {
        char temp=s[i];
        s[i]=s[n-1-i];
        s[n-i-1]=temp;
    }
    cout<<"Reverse string="<<s;//original string affected 
    return 0;
}