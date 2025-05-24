#include<iostream>
using namespace std;
int fact(int num)
{
    if (num==1)
        return 1;
    return num*fact(num-1);
}
int main()
{
    cout<<"Enter the value for factorial="<<"\n";
    int a;
    cin>>a;

    int result=fact(a);
    cout<<"Factorial result="<<"\n"<<result;
    return 0;

}