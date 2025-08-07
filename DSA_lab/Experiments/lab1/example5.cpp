#include<iostream>
#define n 5
using namespace std;
class Demo
{
    public: int arr[n];
            int size_arr=sizeof(arr)/sizeof(arr[0]);
            
            void display()
            {
              cout<<size_arr;
            }
};
int main()
{   Demo d;
    d.display();
    return 0;
}