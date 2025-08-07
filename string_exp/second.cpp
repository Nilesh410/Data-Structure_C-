#include<iostream>
#include<stack>
using namespace std;
int main()
{
    string str="hello programmer";
    stack <string>st;
    str+=" ";
    string temp="";
  
    int num[26]={0};
    for(int i=0;i<str.length();i++)
    {
        char c=str[i];
        if(c>='a'&& c<='z')
        {
             num[c-'a']++;
        }
    }
    for(int i=0;i<(sizeof(num)/sizeof(num[0]));i++)
    {
        if(num[i]>0)
        {
            cout<<(char)(i+'a')<<":"<<num[i]<<" ";
        }

    }

    return 0;
}