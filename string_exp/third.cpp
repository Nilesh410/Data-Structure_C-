#include<iostream>
#include<stack>
using namespace std;
int main()
{
    string str="hello programmer";
    stack <string>st;
    str+=" ";
    string temp="";
  
    for(int i=0;i<str.length();i++)
    {
        char c=str[i];
        if(c==' ')
        {
           st.push(temp);
           temp="";
        }
        else
        {
            temp+=c;
        }
    }
    string result="";
    while(st.size()!=1)
    {
       result+=st.top()+" ";
       st.pop();
    }
    result+=st.top();
    cout<<"result="<<result;
    return 0;
}