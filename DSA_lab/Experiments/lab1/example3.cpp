/*
  3) Write a C++ program to perform complex number addition, sub and mul with operator function as a member function. (Objective :- Understanding of how to return function value as an object type and how to pass argument as an object, use of this keyword) 
*/

#include<iostream>
using namespace std;
class Complex 
{
    private : double real,imag;
    public: 
        Complex(double real,double imag)
        {
            this->real=real;
            this->imag=imag;
        }
        Complex operator + (Complex c2)
        {
            Complex temp(0.0,0.0);
            temp.real=real+c2.real;
            temp.imag=imag+c2.imag;
            return temp;
        }
        void display()
        {
            if(imag>0.0)
               cout<<real<<"+"<<imag<<"i";
            else
                cout<<real<<imag<<"i";
        }
};
int main()
{
    double r;
    double i;
    cout<<"Enter real and image of 1st complex no";
    cin>>r>>i;
    Complex c1(r,i);
    cout<<"Enter real and image of 2nd complex no";
    cin>>r>>i;
    Complex c2(r,i);
    Complex c3=c1+c2;
    c3.display();
    return 0;
}