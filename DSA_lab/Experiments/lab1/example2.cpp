//3) Write a C++ program define a one class Math Operation with class members are 
//  A) two private int data member,
//  B) Define a constructor to initialize data members with       initial value
//  C) add, sub, mul, div operation function 
// Use switch case and do while to select single operation at a time.

#include<iostream>
using namespace std;
class Demo1
{
    private: int value1,value2;
    public : 
        Demo1()
        {
            value1=0;
            value2=0;
        }
        void get_data()
        {
            cout<<"Enter the value of variables=";
            cin>>value1>>value2;
        }
        void display()
        {
            cout<<"value1="<<value1<<"value2="<<value2;
        }
        void add()
        {
            cout<<"add="<<value1+value2;
        }
        void sub()
        {
            cout<<"sub="<<value1-value2;
        }
        void mul()
        {
            cout<<"mul="<<value1*value2;
        }
        void div()
        {
            cout<<"div="<<value1/value2;
        }
};
int main()
{
    Demo1 d1;
    d1.get_data();
    d1.display();
    d1.add();
    d1.sub();
    d1.mul();
    d1.div();
    return 0;
}