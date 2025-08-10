#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s="Hello Programmer";

    cout<<"String before reverse="<<s;
    reverse(s.begin(),s.end());
    cout<<"String after reverse="<<s;//its also affect the original string
    return 0;
}