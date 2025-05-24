#include<iostream>
#include<string>
using namespace std;
char kthCharacter(int k)
{
    string str="a";
    //cout<<str.length();//1
    if(k<=str.length())
    {
        cout<<str;
        return str[k-1];
    }
    else
    {
        while(str.length()<k)
        {
            string temp=str;
            for(char c:temp)
            {
                //cout<<c;
                char appendChar=(c=='z')?'a':(c+1);
                str.append(1,appendChar);
            }
        }
        //cout<<str<<"\n";
        return str[k-1];
    }
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