//2) Write a C++ program to define one class with data member and function. Create an object of class and access those members with any example.
#include<iostream>
using namespace std;
class Demo
{
    private: int value;
    public : void get_data()
    {
        cout<<"Enter the value of variable=";
        cin>>value;
    }
    void display()
    {
        cout<<"value="<<value;
    }
};
int main()
{
    Demo d1;
    d1.get_data();
    d1.display();
    return 0;
}