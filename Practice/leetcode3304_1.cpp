#include<iostream>
#include<string>
using namespace std;
string newString(string str,int k)
{
    if(str.length()>=k)
        return str;

    string newstring=str;
    for(char c:str)
    {
        char appendChar=(c=='z')?'a':(c+1);
        newstring.append(1,appendChar);
    }
    return newString(newstring,k);
}
char kthCharacter(int k)
{
        string output=newString("a",k);
        return output[k-1]; 
}
int main()
{
    int k;
    cout<<"Enter the value of k to find out kth char from string"<<"\n";
    cin>>k;
    char result=kthCharacter(k);
    cout<<"kth char="<<result;
    return 0;
}